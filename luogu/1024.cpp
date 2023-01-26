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
    for (int i = -101;i + 1 <= 101;i++) {
        double l = i, r = i + 1;
        double lres = f(l), rres = f(r);
        if (lres == 0) {
            printf("%.2f ", l);
        }
        if (lres * rres < 0) {
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