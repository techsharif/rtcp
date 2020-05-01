#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c, m;
    scanf("%lf%lf%lf", &a, &b, &c);
    /// cin >> a >> b >> c;

    m = (a*2 + b*3 + c*5) / 10.0;

    printf("MEDIA = %.1lf\n", m);
    /// cout << "MEDIA = " << fixed << setprecision(1) << m << "\n";

    return 0;
}
