// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.
//  DO NOT allocate another 2D matrix and do the rotation.

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]


// TC: O(N*N) + O(N*N)
//SC: O(1)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>rotatemt(vector<vector<int>>&matrix,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    return matrix;
}
int main(){
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    int n=matrix.size();
    int m=matrix[0].size();

    vector<vector<int>>res=rotatemt(matrix,n);

    for(auto it:res){
        for(auto ans:it){
            cout<<ans<<" ";
        }
        cout<<endl;
    }
return 0;
}
