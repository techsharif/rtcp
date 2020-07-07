#include <bits/stdc++.h>
using namespace std;

void solution(){
    long long a, b, mn, mx, n;
    cin >> a >> b;

    mn = min(a,b);
    mx = max(a,b);

    n = max(mn*2, mx);

    cout << n*n << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        solution();
    }

    return 0;
}
