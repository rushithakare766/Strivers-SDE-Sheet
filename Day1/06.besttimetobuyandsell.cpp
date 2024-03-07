// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5

#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[6]={7,1,5,3,6,4};
    int n=6;

    int profit=0;
    int mini=nums[0];

    for(int i=1;i<n;i++){
        int cost=nums[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,nums[i]);
    }
    cout<<profit<<endl;
return 0;
}
