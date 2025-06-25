#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int main(){
    string s, m;
    getline(cin, s);
    map<string, int> w;
     for (size_t i = 0; i < s.length(); ++i) {
        char ch = s[i];
        if (ch == ' ') {
            if (!m.empty()) {
                w[m]++;
                m.clear();
            }
        } else {
            m += ch;
        }
    }
    if (!m.empty()) {
        w[m]++;
    }
    map<string, int>::iterator it;
    for (it = w.begin(); it != w.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    }