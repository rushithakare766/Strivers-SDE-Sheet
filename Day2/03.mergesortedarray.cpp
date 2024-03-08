// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers 
// m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside
//  the array nums1. To accommodate this, nums1 has a length of m + n, where the first m 
//  elements denote the elements that should be merged, and the last n elements are set to 
//  0 and should be ignored. nums2 has a length of n.

// Example 1:

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

#include<bits/stdc++.h>
using namespace std;
void mergesorted(vector<int>&nums1,vector<int>&nums2,int n1,int n2){
    int left=n1-1;
    int right=0;

    while(left>=0 && right<n2){
        if(nums1[left]>nums2[right]){
            swap(nums1[left],nums2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
}
int main(){
    vector<int>nums1={1,2,3};
    vector<int>nums2={2,5,6};
    int n1=nums1.size();
    int n2=nums2.size();

    mergesorted(nums1,nums2,n1,n2);
    for(auto it:nums1){
        cout<<it<<" ";
    }
    for(auto it:nums2){
        cout<<it<<" ";
    }

return 0;
}