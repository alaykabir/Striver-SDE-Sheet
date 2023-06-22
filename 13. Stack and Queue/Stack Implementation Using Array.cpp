#include <bits/stdc++.h> 
// Stack class.
class Stack {
   
public:
    int size;
    int Top;
    int * arr;
    
    Stack(int capacity) {
        Top = -1;
        size = capacity; 
        arr = new int[capacity];
        
    }

    void push(int num) {
        Top++;
        arr[Top] = num;
    }

    int pop() {
        if(Top == -1) return -1;
        else
        {int x = arr[Top];
        Top--;
        return x;}
        
    }
    
    int top() {
        if(Top == -1) return -1;
        else return arr[Top];
    }
    
    int isEmpty() {
        if(Top == -1) return 1;
        else return 0;
    }
    
    int isFull() {
        if(Top + 1 == size) return 1;
        else return 0;
    }
    
};
