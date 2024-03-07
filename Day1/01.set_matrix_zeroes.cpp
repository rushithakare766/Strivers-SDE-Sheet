// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]
#include<bits/stdc++.h>
#include<vector>
using namespace std;

//tc = o(n*m)*(n+m)+(o*n)
// void rowmark(vector<vector<int>>&matrix,int n,int m,int i){
//     // mark entire row as -1 
//     for(int j=0;j<m;j++){
//         if(matrix[i][j]!=0){
//             matrix[i][j]=-1;
//         }
//     }
// }

// void colmark(vector<vector<int>>&matrix,int n,int m,int j){
//     //mark entire col as -1 
//     for(int i=0;i<n;i++){
//         if(matrix[i][j]!=0){
//             matrix[i][j]=-1;
//         }
//     }
// }

// vector<vector<int>>zeromatrix(vector<vector<int>>&matrix,int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==0){
//                 rowmark(matrix,n,m,i);
//                 colmark(matrix,n,m,j);
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==-1){
//                 matrix[i][j]=0;
//             }
//         }
//     }
//     return matrix;
// }

vector<vector<int>>zeromatrix(vector<vector<int>>&matrix,int n,int m){
    int row[n]={0};
    int col[n]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
int main(){
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>res=zeromatrix(matrix,n,m);


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // for(auto it:res){
    //     for(auto ele:it){
    //         cout<<ele<<" ";
    //     }
    //     cout<<endl;
    // }
return 0;
}