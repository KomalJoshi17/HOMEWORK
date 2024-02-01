// https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

class Solution {
  public:
    int armstrongNumber(int n){
        int sum = 0;
        int num;
        for (int i = n; i > 0; i /= 10)
        {
            num = i % 10;
            sum += (num * num * num);
        }
        if (sum == n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};