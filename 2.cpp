#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int n, f;
    set<int>s;
    for(int i = 0; i< 10; i++){
        cin >> n;
        s.insert(n);    
    }
    cout << "After remove duplicates: ";
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Enter the number you want to search for: ";
    cin >> f;
    cout <<"After find: ";
    if (s.find(f) != s.end()) {
        cout << f << " exists in the set." << endl;
    } else {    
        cout << f << "Does not exist in the set." << endl;
    }
    cout << "All elements: ";
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    return 0;

}