#include "header.h"
#include <math.h>
using namespace std;
polynom::polynom() : a(1.0), b(1.0), c(1.0) {

}

polynom::polynom(const polynom &copy) : a(copy.a), b(copy.b), c(copy.c) {

}

polynom::polynom(double i, double j, double k) : a(i), b(j), c(k) {

}
double polynom::position(double x) {
    double pos = a*x*x + b*x + c;
    return pos;
}
double polynom::rootAmount() {
    double D = b*b - 4*a*c;
    if (D == 0)
        return 1;
    if (D > 0)
        return 2;
    if (D < 0)
        return 0;
}
double polynom::roots(double x) {
    double D = b*b - 4*a*c;
    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "First root: " << x1 << endl << "Second root: " << x2 << endl;
    }
    if (D == 0) {
        double x1 = -b / (2 * a);
        cout << "First root: " << x1 << endl;
    }
    if (D < 0) {
        cout << "No root";
    }
}

double polynom::minmax(double x){
    double minmax = -b/(2*a);
    if (a < 0) {
    return minmax;
    }
    if (a > 0) {
        return minmax;
    }
}

