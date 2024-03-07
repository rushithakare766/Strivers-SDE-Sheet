// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].

// Input: nums = [1,2,3]
// Output: [1,3,2]

/*
2 1 5 4 3 0 0
1)find larger prefix match A[i]<A[i+1]
2)find ele>A but the smallest one 
3)place remaining in sorted order 
*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,2,3};
    int ind=-1;
    int n=nums.size();
    //larger prefix match
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            ind=i;
            break;
        }
    }
    //find the ele greater than a in correct place
    for(int i=n-1;i>=ind && ind!=-1;i--){
        if(nums[i]>nums[ind]){
            swap(nums[i],nums[ind]);
            break;
        }
    }

    //put remaining thing in sorted order
    reverse(nums.begin()+ind+1,nums.end());
    for(int i:nums){
        cout<<i<<" ";
    }
return 0;
}
