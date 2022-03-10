#ifndef UNTITLED64_HEADER_H
#define UNTITLED64_HEADER_H
#endif
#include <iostream>
class polynom {
private:
    double a;
    double b;
    double c;
public:
    polynom();
    polynom(const polynom &);
    polynom(double, double, double);

   // polynom(double aa, double bb, double cc);
    double position(double x);
    double rootAmount();
    double roots(double x);
    double minmax(double x);
    };