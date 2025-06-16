#include <iostream>
#include "PPPheaders.h"

int main() {

    cout << "Please enter your first and second name followed by your age:" << endl;
    string first_name;
    string second_name;
    double age = -1.0;
    cin >> first_name >> second_name >> age;
    cout << "Hello " << first_name << " " << second_name << "! "
         << "You are " << age*12 << " months old." << endl;

    cout << "Please enter a float: ";
    double n = 0;
    cin >> n;
    cout << "n = " << n
         << "\nn+1 = " << n+1
         << "\nn*3 = " << n*3
         << "\nn/3 = " << n/3
         << "\nn^2 = " << n*n
         << "\nsqrt n = " << sqrt(n)
        << endl;

    return 0;

}