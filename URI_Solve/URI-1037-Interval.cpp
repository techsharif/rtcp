#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    cout << fixed << setprecision(3);

    double a;
    cin >> a;

    if (a < 0.0 || a > 100.0){
        cout << "Fora de intervalo\n";
    }else{
        if (a <=25.0) cout << "Intervalo [0,25]\n";
        else if (a <=50.0) cout << "Intervalo (25,50]\n";
        else if (a <=75.0) cout << "Intervalo (50,75]\n";
        else if (a <=100.0) cout << "Intervalo (75,100]\n";
    }

    return 0;
}
