#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout << fixed << setprecision(2);

    long a, b, c, d;

    cin >> a >> b >> c >> d;

    if (b > c && d > a && ( (c+d) > (a+b) ) && c > 0 && d > 0 && a % 2 == 0){
        cout << "Valores aceitos\n";
    }else{
        cout << "Valores nao aceitos\n";
    }


    return 0;
}
