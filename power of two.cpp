// https://leetcode.com/problems/power-of-two/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
        while(n%2 == 0){
            n=n/2;
        }
        return true;   
    }
};
int main() {
	int n;
    cin>>n;
    Solution ob;
	cout<<ob.isPowerOfTwo(n)<<endl;
	return 0;
}