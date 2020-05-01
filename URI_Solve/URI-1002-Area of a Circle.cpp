#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double r, a, pi;
    pi = 3.14159;

    /// cin >> r;
    scanf("%lf", &r);
    a = pi * r * r;

    ///cout << "A=" << fixed << setprecision(4) << a << "\n";
    printf("A=%.4lf\n",a);

    return 0;
}
