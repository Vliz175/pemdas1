#include <iostream>
using namespace std;

int main() {
    int number;

    // Meminta input dari user
    cout << "Masukkan sebuah bilangan: ";
    cin >> number;

    // Menentukan ganjil atau genap
    if (number % 2 == 0) {
        cout << number << " adalah bilangan genap." << endl;
    } else {
        cout << number << " adalah bilangan ganjil." << endl;
    }

    return 0;
}
