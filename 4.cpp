#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;
int main(){
    stack<char> formula;
    string s,x;
    getline(cin, s);
    for (size_t i = 0; i < s.length(); ++i) {
        char ch = s[i];
        if (ch == '(') {
            formula.push(ch);
        }else if(ch == ')'){
            if (formula.empty()) {
                cout << "Incorrect" << endl;
                return 0;
            }
            formula.pop();
        }
    }
    if(formula.empty()){
        cout << "Correct" << endl;
    } else {
        cout << "Incorrect" << endl;
    }
    return 0;
}
