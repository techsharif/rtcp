#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout << fixed << setprecision(2);

    long long c1, c2, u1, u2;
    double p1, p2;

    cin >> c1 >> u1 >> p1;
    cin >> c2 >> u2 >> p2;

    cout << "VALOR A PAGAR: R$ " << (u1*p1 + u2*p2);

//    scanf("%lld%lld%lf", &c1, &u1, &p1);
//    scanf("%lld%lld%lf", &c2, &u2, &p2);

//    printf("VALOR A PAGAR: R$ %.2lf\n", u1*p1 + u2*p2);

     cout << "\n";

    return 0;
}
