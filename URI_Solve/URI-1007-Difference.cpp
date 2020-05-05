#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    /// cin >> a >> b >> c >> d;

    printf("DIFERENCA = %lld\n", a*b - c*d);
    /// cout << "DIFERENCA = " << (a*b - c*d) << "\n";


    return 0;
}
