// You are given a read only array of n integers from 1 to n.

// Each integer appears exactly once except A which appears twice and B which is missing.

// Return A and B.

// Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

// Note that in your output A should precede B.

// Example:

// Input:[3 1 2 5 3] 

// Output:[3, 4] 

// A = 3, B = 4

#include<bits/stdc++.h>
using namespace std;
//Approach 
// First, find out the values of S and Sn and then calculate S – Sn (Using the formulas).
// Then, find out the values of S2 and S2n and then calculate S2 – S2n.
// After performing steps 1 and 2, we will be having the values of X + Y and X – Y. Now, by 
// substitution of values, we can easily find the values of X and Y.

//optimal Approach 
vector<int>MissingRepeating(vector<int>&A) {
    int n = A.size();
    //SN denotes sum of first n Natural No
    //S2N Square of first n Natural No
    int SN=(n*(n+1))/2;
    int S2N=(n*(n+1)*(2*n+1))/6;

    // calculate sum for s and s2 for array 
    int s=0;
    int s2=0;
    for(int i=0;i<n;i++){
        s+=A[i];
        s2+=A[i]*A[i];
    }
    int val1 = s - SN;

    int val2 = s2 - S2N;

    val2 = val2/val1;

    int x = (val1 + val2) / 2;
    int y = x - val1;

    return {x,y};

}

int main(){
    vector<int>A={1,3,4,5,2,2};
    int n=A.size();
    vector<int>res=MissingRepeating(A);
    for(auto it:res){
        cout<<it<<" ";
    }
    // int repeating=-1;
    // int missing=-1;
    
    // for(int i=1;i<=n;i++){
    //     int cnt=0;
    //     for(int j=0;j<n;j++){
    //         if(A[j]==i)cnt++;    
    //     }
    //     if(cnt==2)repeating=i;
    //     else if(cnt==0)missing=i;
        
    //     if(repeating!=-1 && missing!=-1){
    //         break;
    //     }
    // }
    // cout<<repeating<<missing;
    return 0;
}
