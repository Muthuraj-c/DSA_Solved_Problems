//Problem link - https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/0

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        return b == 0 ? a : gcd(b, a % b);
    }
};
