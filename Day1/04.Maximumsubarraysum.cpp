// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[9]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;

    int sum=0;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi<<endl;
return 0;
}
