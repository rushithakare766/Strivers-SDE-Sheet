// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2

#include<bits/stdc++.h>
using namespace std;
//optimal approach 
// Linked list cycle approach 
// int slow = nums[0];
// int fast = nums[0];
//   do {
//     slow = nums[slow];
//     fast = nums[nums[fast]];
//   } while (slow != fast);
//   fast = nums[0];
//   while (slow != fast) {
//     slow = nums[slow];
//     fast = nums[fast];
//   }
//   return slow;

int main(){
    int nums[]={1,3,4,2,2};
    int n=5;

    map<int,int>mp;
    for(int i:nums){
        mp[i]++;
    }
    for(auto it:mp){
        if(it.second>1){
            cout<<it.first<<endl;
            break;
        }
    }
    cout<<nums[0];
return 0;
}