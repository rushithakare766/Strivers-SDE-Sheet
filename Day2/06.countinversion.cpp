// For a given integer array/list 'ARR' of size 'N' containing all distinct values, find the total number 
// of 'Inversions' that may exist.

// An inversion is defined for a pair of integers in the array/list when the following two conditions are met.

// A pair ('ARR[i]', 'ARR[j]') is said to be an inversion when:

// 1. 'ARR[i] > 'ARR[j]' 
// 2. 'i' < 'j'

// Where 'i' and 'j' denote the indices ranging from [0, 'N').

// Sample Input 1 :
// 3
// 3 2 1
// Sample Output 1 :
// 3

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={3,2,1};
    int n=arr.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}