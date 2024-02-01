// https://www.geeksforgeeks.org/problems/sum-of-digits1742/1

#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:
    int sumOfDigits(int N){
        int sumOfDigits=0;
        while(N!=0){
            sumOfDigits+=N%10;
            N=N/10;
        }
        return sumOfDigits;
    }
};
int main() { 
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) <<endl;
    }
    return 0; 
}