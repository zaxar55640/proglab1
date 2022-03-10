#include <iostream>
#include "header.h"
using namespace std;

int main()
{


    int a,b,c;
    cin >> a >> b >> c;
    polynom poly(a,b,c);
    int x;
    cin >> x;
    cout << "Position in a dot: " << poly.position(x) << endl;
    cout << "Roots amount: " << poly.rootAmount() << endl;
    poly.roots(x);
    cout << "min or max: " << poly.minmax(x) << endl;

    return 0;
}
