//Problem link - https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/0

class Solution {
public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here

        long long int min = arr[0];
        long long int max = arr[0];

        for (long long int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < min)
                min = arr[i];

            if (arr[i] > max)
                max = arr[i];
        }

        return make_pair(min, max);
    }
};