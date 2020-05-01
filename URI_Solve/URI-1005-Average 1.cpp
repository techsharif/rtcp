#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, m;

    scanf("%lf%lf", &a, &b);
    /// cin >> a >> b;

    m = ( (a*3.5) + (b*7.5) ) / 11.0;

    printf("MEDIA = %.5lf\n", m);

    /// cout << "MEDIA = " << fixed << setprecision(5) <<m << "\n";

    return 0;
}
