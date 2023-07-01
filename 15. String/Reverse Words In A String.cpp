#include <bits/stdc++.h>

string reverseString(string &str){
	// Write your code here.

	str += ' ';

	stack<string> st;
	string word = "";

	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == ' '){
			if(word != ""){
				st.push(word); 
				word = "";
			}
		} 
		else word += str[i];
	}	

	string ans = "";
	while(!st.empty())
	{
		ans += st.top();
		ans += " ";
		st.pop();
	}

	ans.pop_back();

	return ans;
}
