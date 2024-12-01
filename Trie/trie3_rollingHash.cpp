#include <bits/stdc++.h>
using namespace std;
#define int long long int
int hash1(string s) {
	int n=31,m=1e9+7;
	int p_val=1;
	int hash_val=0;
	for(int i=0; i<s.size(); i++) {
		hash_val+=((s[i]-'a'+1)*p_val)%m;
		p_val*=n;
		p_val%=m;
	}
	return hash_val;
}
int32_t main()
{	string s;
	cin>>s;
	cout<<hash1(s)<<endl;
	return 0;
}