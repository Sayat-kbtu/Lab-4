#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr(10);
    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 99 + 1;

    }
    cout << "Random nubers: ";
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr.begin(), arr.end());
    cout << "After the sort: ";
    for(int i = 0; i < 10; i++){
        cout <<  arr[i]<< " ";
    }
    cout << endl;
    auto minIt = min_element(arr.begin(), arr.end());
    cout << "Minimum: " << *minIt << endl;

    auto maxIt = max_element(arr.begin(), arr.end());
    cout << "Maximum: " << *maxIt << endl;
    cout << "After the unique: ";
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}