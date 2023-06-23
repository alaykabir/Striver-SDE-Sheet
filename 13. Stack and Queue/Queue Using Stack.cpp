#include <bits/stdc++.h>
class Queue {
    
    stack<int> input;
    stack<int> output;
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        while(!input.empty())
        {
            output.push(input.top());
            input.pop();
        }

        input.push(val);

        while(!output.empty())
        {
            input.push(output.top());
            output.pop();
        }
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(input.empty() == true){ 
            return -1;
        }
        else{
        int x = input.top();
        input.pop();
        return x;
        }
    }

    int peek() {
        // Implement the peek() function here.
        if(input.empty()) return -1;
        return input.top();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        if(input.empty()) return true;
        else return false;
    }
};
