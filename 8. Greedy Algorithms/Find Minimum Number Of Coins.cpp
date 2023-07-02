#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int curr[9] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};

    int coins = 0;
    for(int i = 8; i >= 0; i--){
        if(amount >= curr[i]){
            while(amount >= curr[i]){
                amount -= curr[i];
                coins++;
            }
        }

        if(amount == 0) break;
    }

    return coins;
}
