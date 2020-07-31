#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(4);

    double x1, x2, y1, y2, d;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    /// scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    d = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );

    cout << d << "\n";
    /// prinf("%.4lf\n", d);

    return 0;
}
