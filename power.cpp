#include "power.hpp"

int naivePower(int x, int n)
{
    if (x == 0) return 0;
    if (n == 0) return 1;
    return x * naivePower(x, n - 1);
}

int unoptimizedDCPower(int x, int n)
{
    if (x == 0) return 0;
    if (n == 0) return 1;
    if (!(n & 1)) return unoptimizedDCPower(x, n / 2) * unoptimizedDCPower(x, n / 2);
    return x * unoptimizedDCPower(x, n / 2) * unoptimizedDCPower(x, n / 2);
}

int optimizedDCPower(int x, int n)
{
    if (x == 0) return 0;
    if (n == 0) return 1;
    int temp = optimizedDCPower(x, n / 2);
    if (!(n & 1)) return temp * temp;
    return x * temp * temp;
}