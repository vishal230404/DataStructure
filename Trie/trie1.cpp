#include <bits/stdc++.h>
using namespace std;
struct trie {
	trie *next[26];
	trie() {
		for(int i=0; i<26; i++) {
			next[i]=NULL;
		}
	}
	bool ended=false;
};
void insert(string s,trie *root) {
	trie *curr=root;
	for(int i=0; i<(int)s.size(); i++) {
	    int idx=s[i]-'a';
		if(curr->next[idx]==NULL) {
			curr->next[idx]=new trie();
		}
        curr=curr->next[idx];
	}
	curr->ended=true;
}
bool in_trie(string s,trie *root) {
	trie *curr=root;
	
	for(int i=0; i<s.size(); i++) {
	    int idx=s[i]-'a';
		if(curr->next[idx]==NULL) return false;
		curr=curr->next[idx];
	}
	return curr->ended;
}
int main()
{
	trie *root=new trie();
	insert("vishal",root);
	insert("apaar",root);
	cout<<in_trie("apar",root);

	return 0;
}