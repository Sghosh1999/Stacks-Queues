//Check for Balanced Parenthesis

#include<bits/stdc++.h>
#include<string.h>
#include<stack>
#include<iostream>
using namespace std;

bool isPair(char opening,char closing)
{
    if(opening =='(' && closing == ')') return true;
    if(opening =='{' && closing == '}') return true;
    if(opening = '[' && closing == ']') return true;
    return false;
}

bool isBalanced(string expr)
{
    stack<char> S;
    for(int i=0;i<expr.length();i++)
    {
        if(expr[i]=='(' || expr[i]=='{' || expr[i]=='[')
        S.push(expr[i]);
        
        if(expr[i]==')' || expr[i]=='{' || expr[i]=='[')
         {
             if(S.empty() || !isPair(S.top(),expr[i]))
             {
                 return false;
             }
             else
             {
                 S.pop();
             }
         }
    }
    
    return S.empty()? true:false;
}

int main()
 {
     string expr;
     cin>>expr;
     
     if(isBalanced(expr))
     {
         cout<<"Expression is Balanced"<<endl;
     }
     else
     {
         cout<<"Expression is not balanced"<<endl;
     }
    return 0;
 }
