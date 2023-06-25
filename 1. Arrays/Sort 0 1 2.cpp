#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
//1
   // sort(arr, arr + n);

//2 :- 
   //Counting Number of 0s, 1s, 2s

//3 : DUTCH NATIONAL FLAG

   //3 pointers
   int low = 0, mid = 0, high = n - 1;

   while(mid <= high)
   {
      if(arr[mid] == 0)
      {
         swap(arr[mid], arr[low]);
         low++;
         mid++;
      }
      else if(arr[mid] == 1)
      {
         mid++;
      }
      else
      {
         swap(arr[mid], arr[high]);
         high--;
      }
   }

   
}
