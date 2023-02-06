#include <iostream>
using namespace std;

int main() 
{   
    int a;
    cin >> a;
    if (a > 0) {
        cout << "số dương";
    }
    else if (a < 0) {
         cout << "số âm";
    }
    else {
         cout << "bằng 0";
    }
    
    return 0;
}