#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Lambda function to print vector elements
    for_each(v.begin(), v.end(), [](int i) {
        cout << i << " ";
    });
    cout << endl;
    cout<<"----------"<<endl;
    // Lambda function to calculate the sum of vector elements
    int sum = 0;
    for_each(v.begin(), v.end(), [&sum](int i) {
        sum += i;
    });
    cout << "Sum: " << sum << endl;

    return 0;
}
