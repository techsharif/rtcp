#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    long x,y;
    cin >> x >> y;

    double price[6] = {0.0, 4.00, 4.50, 5.00, 2.00, 1.50};

    cout << "Total: R$ "<< price[x] * y << "\n";

    return 0;
}
