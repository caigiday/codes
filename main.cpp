#include <iostream>
using namespace std;

int main()
{
    int vd;
    cin >> vd;
    if (vd < 0) {
        cout << " vd < 0 ";
    }
    else if (vd > 0) {
        cout << " vd > 0 ";
    }
    else {
        cout << " vd = 0 ";
    }
    
    int acy = 25;
    for (int sol = 14 ; sol < acy ; sol++) {
        cout << sol << " ";
    }
    
    int sol; 
    cin >> sol;
    switch (sol) {
        case 0:
         cout << " sol true ";
         break;
    default:
         cout << " sol false ";
    }
    return 0;
}