//Problem link - https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();

        vector<vector<int>> m_intervals;
        for(int i = 0; i < n; i++)
        {
            if(m_intervals.empty() || m_intervals.back()[1] < intervals[i][0])
            {
                m_intervals.push_back(intervals[i]);
            }
            else
            {
                m_intervals.back()[1] = max(m_intervals.back()[1], intervals[i][1]);
            }
        }

        return m_intervals;
    }
};
