#include <bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>> arr;

    for(int i = 0; i < finish.size(); i++){
        arr.push_back({finish[i], i});
    }

    sort(arr.begin(), arr.end());
    // reverse(arr.begin(), arr.end());

    int act = 1;
    int prev = arr[0].first;
    for(int i = 1; i < finish.size(); i++){
        if(start[arr[i].second] >= prev){
            act++;
            prev = arr[i].first;
        }
    }

    return act;
}
