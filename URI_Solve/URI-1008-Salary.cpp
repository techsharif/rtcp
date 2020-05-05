#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    double c;

    scanf("%lld%lld%lf", &a, &b, &c);
    /// cin >> a >> b >> c;

    printf("NUMBER = %lld\n", a);
    printf("SALARY = U$ %.2lf\n", b*c);

///    cout << "NUMBER = " << a << "\n";
///    cout << "SALARY = U$ " << fixed << setprecision(2) <<b*c <<"\n";

    return 0;
}
