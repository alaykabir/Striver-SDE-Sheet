bool isValidParenthesis(string s)
{
    stack<char> st;
    st.push(s[0]);
    bool ans = true;
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }

        if(s[i] == ')')
        {
            if(!st.empty())
            {
                if(st.top() == '(')st.pop();
                else{ans = false; break;}
            } 
            else{ans = false; break;}
        }
        if(s[i] == '}')
        {
            if(!st.empty())
            {
                if(st.top() == '{')st.pop();
                else{ans = false; break;}
            }
            else{ans = false; break;}
        }
        if(s[i] == ']')
        {
            if(!st.empty())
            {
                if(st.top() == '[')st.pop();
                else{ans = false; break;}
            }
            else{ans = false; break;}
        }
    }

    if(!st.empty()) ans = false;
    return ans;
}
