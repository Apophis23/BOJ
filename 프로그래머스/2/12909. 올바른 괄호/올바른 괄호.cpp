#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char>stk;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            stk.push(s[i]);
        }
        else if(s[i]==')'){
            if(stk.size()==0){
                return false;
            }
            stk.pop();
        }
    }
    if(stk.size() == 0){
        return true;
    }
    else{
        return false;
    }
}