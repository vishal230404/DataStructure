#include <bits/stdc++.h>
using namespace std;
struct trie{
    trie * next[26];
    trie(){
        for(int i=0;i<26;i++){
             next[i]=NULL;
        }
    }
};
void insert(string s,trie * root){
    trie * curr=root;
    for (int i = 0; i < s.size(); i++){
        int idx=s[i]-'a';
        if(curr->next[idx]==NULL) curr->next[idx]=new trie();
        curr=curr->next[idx];
    } 
    
}
bool in_trie(string s, trie * root){
    trie * curr=root;
    for(int i=0;i<s.size();i++){
        int idx=s[i]-'a';
        if(curr->next[idx]==NULL) return false;
    }
    return true;
}
int main()
{   string s,patt;
    cin>>s>>patt;
    trie *root=new trie();
    for(int i=0;i<s.size();i++){
        insert(s.substr(i,s.size()-i),root);
    }
    cout<<in_trie(patt,root)<<endl;
      return 0;
}