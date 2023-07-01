#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    
    int n = end.size();
    vector<pair<int, int>> endSort(n);
    for(int i = 0; i < n; i++){
        endSort[i].first = end[i];
        endSort[i].second = i + 1;
    }
    sort(endSort.begin(), endSort.end());

    vector<int> ans;
    ans.push_back(endSort[0].second);

    int prev = endSort[0].first;

    for(int i = 1; i < n; i++){
        if(start[endSort[i].second - 1] > prev){
            ans.push_back(endSort[i].second);
            prev = endSort[i].first;
        }
    }

    return ans;
}
