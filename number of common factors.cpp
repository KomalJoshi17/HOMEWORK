// https://leetcode.com/problems/number-of-common-factors/

#include<iostream>
using namespace std;

class Solution {
public:
    int commonFactors(int a, int b) {
        int ans = 0;
        for(int i=1 ; i<=min(a,b) ; i++) {
			if(a%i==0 && b%i==0) ans++;
		}
		return ans;
    }
};

int main() {
	int a,b; cin>>a>>b;
	Solution ob;
	cout<<ob.commonFactors(a,b)<<endl;
	return 0;
}