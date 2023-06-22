#include <bits/stdc++.h> 
class Queue {
public:
    int start, end, currSize;
    int * arr;

    Queue() {
        start = -1;
        end = -1;
        currSize = 0;

        arr = new int[5000];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(currSize == 0) return true;
        else return false;

    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(end == -1)
        {
            start = 0;
            end = 0;
        }
        else
        {
            end += 1;
        }

        arr[end] = data;
        currSize++;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(end == -1)
        {
            return -1;
        }

        // start++;
        int x = arr[start];
        if(start < end) start++;
        else {end = -1; start = -1;}
        currSize--;
        return x;

    }

    int front() {
        // start++;
        if(start == -1) return -1;
        return arr[start];
    }
};
