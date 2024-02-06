//                        "بسم الله"

//    اللهمَّ صَلِّ وَسَلِّمْ وَبَارِكْ عَلَى سَيِّدِنَا مُحَمَّدٍ وَعَلَى آلِهِ عَدَدَ كَمَالِ اللهِ وَكَمَا يَلِيقُ بِكَمَالِهِ


/*
  Infix to postfix conversion in C++
  Input Postfix expression must be in a desired format.
  Operands and operator, both must be single character.
  Only '+'  ,  '-'  , '*', '/' and '$' (for exponentiation)  operators are expected.
*/


//==================================================include..
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
//==================================================Define..

#define speedy                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define fr1(n) for (ll i = 1; i <= n; ++i)
#define fr(n) for (ll i = 0; i < n; ++i)
#define rfr(n) for (long long i = n - 1; i >= 0; i--)
#define frj(n) for (ll j = 0; j < n; ++j)
#define frj1(n) for (ll j = 1; j <= n; ++j)
#define N << "\n";
#define sz(x) (ll) x.size()

/* -----------------------------Code Begins from here-------------------------------------------*/

// Function to verify whether an operator has higher precedence over other
int HasHigherPrecedence(char operator1, char operator2)
{
    if (operator1 == '$') //*   $ is the highest precedence operator
    {
        return true;
    }
    if (operator1 == '*' || operator1 == '/') //*    * and / have equal precedence
    {
        return (operator2 != '$');
    }
    if (operator1 == '+' || operator1 == '-') //*   + and - have equal precedence
    {
        return (operator2 != '$' && operator2 != '*' && operator2 != '/');
    }
    return false;
}



// Function to verify whether a character is operator symbol or not.
bool IsOperator(char C)
{
    return C == '+' || C == '-' || C == '*' || C == '/' || C == '$';
}



// Function to verify whether a character is alphanumeric chanaracter (letter or numeric digit) or not.
bool IsOperand(char C)
{
    return isalpha(C) || isdigit(C);
}



// Function to convert Infix expression to postfix
string InfixToPostfix(string expression)
{

    stack<char> s;
    string postfix = "";
    for (int i = 0; i < sz(expression); i++)
    {
        if (expression[i] == ' ' || expression[i] == ',')
        {
            continue;
        }
        else if (IsOperand(expression[i]))
        {
            postfix += expression[i];
        }
        else if (IsOperator(expression[i]))
        {
            while (!s.empty() && s.top() != '(' && HasHigherPrecedence(s.top(), expression[i]))
            {
                postfix += s.top();
                s.pop();
            }
            s.push(expression[i]);
        }

        else if (expression[i] == '(')
        {
            s.push(expression[i]);
        }
        else if (expression[i] == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
    }
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}



void Khaltbeta_blsalsa()
{
    string expression;
    cout << "Enter Infix Expression \n";

    getline(cin, expression); // 1+2*3$4/5-6
    string postfix = InfixToPostfix(expression);
    cout << "Output = " << postfix << "\n"; // 123*4$5/6-+
}
//==================================================Main..
int main()
{

    speedy
        ll t = 1;
    // cin >> t;
    while (t--)
    {

        Khaltbeta_blsalsa();
    }
}