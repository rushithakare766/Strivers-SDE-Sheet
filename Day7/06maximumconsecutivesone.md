# Problem Name : [Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/description/)

## Description
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive


## cpp solution
```cpp

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1=0;
        int cnt=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                max1=max(max1,cnt);
            }
            else{
                cnt=0;
            }
        }
        return max1;
    }
}

# Time Complexity 
The time complexity of the solution is  O(N) ,where space complexity is O(1).














