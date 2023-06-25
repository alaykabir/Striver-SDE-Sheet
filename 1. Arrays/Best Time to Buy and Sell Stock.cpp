#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
    int initial = arr[0];
    int profit = 0;

    for(int i = 1; i < arr.size(); i++)
    {
        int curr = arr[i] - arr[i-1];
        int prev = arr[i] - initial;
        if(prev >= curr) profit = max(profit, prev);
        else{
            initial = arr[i-1];
            profit = max(profit, curr);
        }
    }

    return profit;
}
