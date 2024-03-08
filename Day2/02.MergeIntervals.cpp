// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
// and return an array of the non-overlapping intervals that cover all the intervals
//  in the input.

// Example 1:
// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

#include<bits/stdc++.h>
using namespace std;

// vector<vector<int>>mergeinterval(vector<vector<int>>&matrix,int n){
//     sort(matrix.begin(),matrix.end());
//     vector<vector<int>>res;
//     for(int i=0;i<n;i++){
//         if(res.empty() || matrix[i][0]>res.back()[1]){
//             res.push_back(matrix[i]);
//         }
//         else{
//             res.back()[1]=max(res.back()[1],matrix[i][1]);
//         }
//     }
//     return res;
// }

//Tc : nlogn+o(2n)
vector<vector<int>>mergeinterval(vector<vector<int>>&matrix,int n){
    sort(matrix.begin(),matrix.end());
    vector<vector<int>>res;
    for(int i=0;i<n;i++){
        int start=matrix[i][0];
        int end=matrix[i][1];

        if(!res.empty() && end<=res.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(matrix[j][0]<=end){
                end=max(end,matrix[j][1]);
            }
            else{
                break;
            }
        }
        res.push_back({start,end});
    }
    return res;
}

int main(){
    vector<vector<int>>matrix={{1,3},{2,6},{8,10},{15,18}};
    int n=matrix.size();
    int m=matrix[0].size();

    vector<vector<int>>ans=mergeinterval(matrix,n);
    for(auto it:ans){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
return 0;
}
