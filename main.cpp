#include <iostream>
#include "functions.cpp"

using namespace std;

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << sum_array(5, arr) << endl;
    cout << sum(5, 1, 2, 3, 4) << endl;
    cout << factorial(5) << endl;
    int a = 5;
    int b = 10;
    swap(a, b);
    cout << a << " " << b;
    return 0;
}
