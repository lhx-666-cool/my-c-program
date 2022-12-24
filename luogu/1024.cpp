#include<iostream>
using namespace std;
double a, b, c, d;
double f(double x) {
    double res = x * x * x * a;
    res += x * x * b;
    res += x * c;
    res += d;
    return res;
}
int main() {
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    for (int i = -100;i + 1 <= 100;i++) {
        double l = i - 1e-4, r = i + 1 - 1e-4;
        if (f(l) * f(r) <= 0) {
            while (r - l > 0.0001) {
                double mid = (l + r) / 2;
                if (f(l) * f(mid) > 0) {
                    l = mid;
                } else {
                    r = mid;
                }
            }
            printf("%.2f ", l);
        }
    }
}