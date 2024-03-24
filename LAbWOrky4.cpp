#include <iostream>
#include <stack>
#include <string>



int main() {

    std::stack <char> st;
    std::string inp;
    bool flag = true;
    getline(std::cin, inp);
    for (int i = 0; i < inp.size(); i++)
    {
        if (inp[i] == '(' || inp[i] == '{' || inp[i] == '[')
            st.push(inp[i]);
        else
        {
            if (st.empty())
            {
                flag = false;
                break;
            }
            else
            {
                char top = st.top();
                st.pop();
                if (inp[i] == ')' && top != '(' ||
                    inp[i] == ']' && top != '[' ||
                    inp[i] == '}' && top != '{')
                {
                    flag = false;
                    break;
                }


            }
        }
    }
    if (st.empty() && flag) std::cout << "yes";
    else std::cout << "no";
    return 0;
}
