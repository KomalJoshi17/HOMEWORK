// https://codeforces.com/contest/1352/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		int currPowOfTen = 1;
		vector<int> ans;
		while(n>0) {
			int dig = n%10;
			n /= 10;
			if(dig>0) {
				ans.push_back(dig*currPowOfTen);
			}
			currPowOfTen *= 10;
		}
		cout<<ans.size()<<endl;
		for(int i : ans) {
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}