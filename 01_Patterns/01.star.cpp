#include <iostream>
using namespace std;

int main(){
    int n = 3;

    for ( int i = 0; i < n; i++)
    {
       for (int j=i+1; j>0; j--) {
        cout << "*" << " ";
       }
       cout << endl;
    }
    return 0;
    
}

/* output 

*
* *
* * *

**/ 