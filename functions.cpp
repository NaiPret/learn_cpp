#include <iostream>

using namespace std;

int sum(int a, int b = 0, int c = 0, int d = 0, int e = 0, int f = 0, int g = 0, int h = 0, int i = 0, int j = 0) {
    return a + b + c + d + e + f + g + h + i + j;
}

int sum_array(int num, int arr[]) {
    int sum {};
    for (int i = 0; i < num; i++) {
        sum += arr[i];
    }
    return sum;
}

double sum_array(int num, double arr[]) {
    double sum {};
    for (int i = 0; i < num; i++) {
        sum += 1.0 * arr[i];
    }
    return sum;
}

long int factorial(int num) {
    long int factorial = 1;
    if (num < 0)
        return -1;
    if (num == 0 || num == 1)
        return 1;
    for(int i = 1; i <= num; ++i) {
        factorial *= (long)i;
    }
    return factorial;
}
