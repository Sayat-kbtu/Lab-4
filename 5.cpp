#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> names;
    string s;
    getline(cin, s);
    string word = "";
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            if (!word.empty()) {
                names.push(word);
                word = "";
            }
        }
    }
    if (!word.empty()) {
        names.push(word);
    }
    while (!names.empty()) {
        cout << "Now serving: " << names.front() << endl;
        names.pop();
        if(names.empty()){
            cout << "Queue is empty."<<endl;
        }
    }
}
