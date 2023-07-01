#include <bits/stdc++.h>
int romanToInt(string s) {
    // Write your code here
    // char symbol[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    // int val[7] = {1, 5, 10, 50, 100, 500, 1000};

    map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    

    int n = s.length();

    int num = 0;
    int val = 1001;
    for(int i = 0; i < n; i++){
        if(mp[s[i]] < mp[s[i+1]]) 
            num -= mp[s[i]];
        else 
            num += mp[s[i]];

        // val = mp[s[i]];
    }

    // if(mp[s[n - 2]] >= mp[s[n - 1]]) num += (mp[s[n - 2]]+mp[s[n - 1]]);
    // else num += (mp[s[n-1]] - mp[s[n - 2]]);

    return num;
}
