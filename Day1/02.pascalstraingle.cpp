// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

#include<bits/stdc++.h>
using namespace std;

vector<int>generateans(int row){
    long long ans=1;
    vector<int>ansrow;
    ansrow.push_back(ans);
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/col;
        ansrow.push_back(ans);
    }
    return ansrow;
}

vector<vector<int>>generate(int numrows){
    vector<vector<int>>res;
    for(int i=1;i<=numrows;i++){
        res.push_back(generateans(i));
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>final=generate(n);
    for(auto it:final){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
return 0;
}


