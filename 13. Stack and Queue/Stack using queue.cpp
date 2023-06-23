#include <bits/stdc++.h> 
class Stack {
	// Define the data members.

    queue<int> q;

   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return q.empty();
    }

    void push(int element) {
        // Implement the push() function.
        int s = q.size();
        q.push(element);
        for(int i = 0; i < s; i++)
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }

    int pop() {
        // Implement the pop() function.
        if(q.empty()) return -1;
        int x = q.front();
        q.pop();
        return x;
    }

    int top() {
        // Implement the top() function.
        if(q.empty()) return -1;
        return q.front();
    }
};
