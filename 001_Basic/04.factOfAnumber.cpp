#include <iostream>
using namespace std;

int main() {
    int n;
    int fact = 1;

    cout << "enter number : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "fact of a number " << n << " is: " << fact << endl;
    return 0;
}