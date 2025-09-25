#include <iostream>
#include "number.h"

using namespace std;

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;
    
    if (Digits(number)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}