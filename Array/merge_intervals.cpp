// https://leetcode.com/problems/merge-intervals/description/

// optimized approach
/*
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]

understand question properly
now
1)first sort the array
[[1,3],[2,6],[8,10],[15,18]]
2)store the intervals[0] in vector<int> temp;
-->temp{[1,3]}
3)looping the intevals array and check 
if(it[0] <= temp[1])
then 
temp[1] = maximum of temp[1], it[1]

else
insert temp into new 2d-array vector<vector<int>> merged
temp = it;


4)after all coming out the last will remain then add temp it into new merged

*/


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> mergedIntervals;
        if(intervals.size() == 0){
            return mergedIntervals;
        }

        sort(intervals.begin(), intervals.end());
        vector<int> temp = intervals[0];

        for(auto it:intervals){
            if(temp[1] >= it[0]){
                temp[1] = max(it[1], temp[1]);
            }else{
                mergedIntervals.push_back(temp);
                temp = it;
            }
        }

        mergedIntervals.push_back(temp);
        return mergedIntervals;

    }
};