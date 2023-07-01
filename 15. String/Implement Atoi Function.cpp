#include <bits/stdc++.h> 
int atoi(string s) {
    // Write your code here.
    int n = s.length();

    int dec = 1;
    int num = 0;
    bool neg = false;
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] == '-') neg = true;

        if(s[i] >= '0' && s[i] <= '9')
        {
            int digit = s[i] - '0';
            num += (digit * dec);
            dec *= 10;
        }
    }
    if(neg) return num * (-1);
    else return num;
}
