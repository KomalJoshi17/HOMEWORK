// https://leetcode.com/problems/add-digits/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while(num>=10) {
			int currSum = 0;
			while(num>0) {
				currSum += num%10;
				num /= 10;
			}
			num = currSum;
		}
		return num;
    }
};
int main() {
	int n; cin>>n;
	Solution ob;
	cout<<ob.addDigits(n)<<endl;
	return 0;
}   