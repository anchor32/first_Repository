#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double number = 123.456789;

    // Set precision to 2 decimal places
    cout << fixed << setprecision(2) << number << endl;

    // Set precision to 4 decimal places
    cout << fixed << setprecision(4) << number << endl;

    
    return 0;
}