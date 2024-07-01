#include<iostream>
using namespace std;

int main() {
    long n;

    // Input the value of n
    cin >> n;

    // Calculate the sum of first n natural numbers
    

    // Initialize sum to accumulate the sum of entered numbers
    int sum = 0;

    // Input n-1 numbers
    for(int i = 1; i < n; i++) {
        int x;
        cin >> x;
        sum = sum + x;
    }

    // The missing number is the difference between sum1 and sum
    int missing_number = (n * (n + 1)) / 2 - sum;

    // Output the missing number
    cout << missing_number << endl;

    return 0;
}
