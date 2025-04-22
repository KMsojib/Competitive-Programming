#include <bits/stdc++.h>
using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

bool isLeftAssociative(char op)
{
    return op != '^';
}

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

void solve()
{
    string s;
    cin >> s;
    stack<char> operators;
    string output = "";

    for (char c : s)
    {
        if (isalpha(c))
        {
            output += c;
        }
        else if (c == '(')
        {
            operators.push(c);
        }
        else if (c == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                output += operators.top();
                operators.pop();
            }
            if (!operators.empty() && operators.top() == '(')
            {
                operators.pop();
            }
        }
        else if (isOperator(c))
        {
            while (!operators.empty() && isOperator(operators.top()) &&
                   ((isLeftAssociative(c) && precedence(c) <= precedence(operators.top())) ||
                    (!isLeftAssociative(c) && precedence(c) < precedence(operators.top()))))
            {
                output += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.empty())
    {
        output += operators.top();
        operators.pop();
    }

    cout << output << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
https://www.geeksforgeeks.org/java-program-to-implement-shunting-yard-algorithm/

*/