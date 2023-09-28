#include <iostream>
using namespace std;

int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int calculateSumDecreasing(int m){
    int sum = 0;
    for (int i = 0; i >= 1 ; i--)
    {
        sum += i;
    }
    return sum;
    
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    int sum = calculateSumDecreasing(n);

    cout << "Sum = "<< n << sum;
    return 0;
}
