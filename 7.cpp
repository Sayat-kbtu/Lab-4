#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr;
    cout << "Numbers from 1 to 20: ";
    for (int i = 1; i <= 20; i++) {
        arr.push_back(i);
        cout << i << " ";
    }
    cout <<endl;
    reverse(arr.begin(), arr.end());
    cout<<"After reverse: ";
    for(int i =0; i<10; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
    int count = count_if(arr.begin(), arr.end(), [](int x) {
        return x % 2 == 0;
    });
    cout << "Elements are even: " << count << endl;
    arr.erase(
        remove_if(arr.begin(), arr.end(), [](int x) {
            return x % 3 == 0;
        }),
        arr.end()
    );
    cout << "After remove_if: ";
    for (size_t i = 0; i < arr.size(); ++i) {
    cout << arr[i] << " ";
}

}