#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	   int n = A>B?B:A;
	    int num;
        for(num = n; num>=1; num--) {
            if(A%num==0 && B%num==0)
                break;
        }
        return num;
	} 
};
int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}