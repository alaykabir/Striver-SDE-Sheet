#include <bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	sort(arr.begin(), arr.end());

    int maxi = arr[k - 1];

    int min = arr[n - k];

	vector<int> ans;
	ans.push_back(maxi);
	ans.push_back(mini);
	// priority_queue<int, vector<int>, greater<int>> min_pq;
	// priority_queue<int> max_pq;

	// for(int i = 0; i < n; i++)
	// {
	// 	if(min_pq.size() < k) min_pq.push(arr[i]);
	// 	else{
	// 		if(arr[i] > min_pq.top())
	// 		{
	// 			min_pq.pop();
	// 			min_pq.push(arr[i]);
	// 		}
	// 	}
	// 	if(max_pq.size() < k) max_pq.push(arr[i]);
	// 	else{
	// 		if(arr[i] < max_pq.top())
	// 		{
	// 			max_pq.pop();
	// 			max_pq.push(arr[i]);
	// 		}
	// 	}	
	// }

	// vector<int> ans;
	// ans.push_back(max_pq.top());
	// ans.push_back(min_pq.top());

	return ans;
}
