#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double average(const vector<int> & v){
    int sum = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        sum += *it;
    }       
    return static_cast<double>(sum) / v.size();
}
int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0; i< n; i++){
        cin >> numbers[i];
    }
    double avg = average(numbers);

    cout << "Average: " << avg << endl;

    return 0;
}