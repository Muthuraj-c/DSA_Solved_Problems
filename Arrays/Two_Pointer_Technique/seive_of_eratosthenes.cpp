//Problem link - https://www.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/0
//Find prime number using seive of eratosthenes method.

class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int> prime_nums;
        bool table[N + 1];
        for(int i = 2; i <= N; i++){
            table[i] = true;
        }
        
        for(int i = 2; i <= N; i++)
        {
            if(table[i] == true){
                for(int j = i * i; j <= N; j += i)
                    table[j] = false;
            }
        }
        
        for(int i = 2; i <= N; i++)
        {
            if(table[i] == true){
                prime_nums.push_back(i);
            }
        }
        
        return prime_nums;
    }
};
