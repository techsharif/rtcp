#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(5);

    double a, b, c;
    cin >> a >> b >> c;

    double temp = b*b - 4*a*c;

    if (temp < 0 || a==0){
        cout << "Impossivel calcular\n";
    }else{
        double r1 = (-b + sqrt(temp)) / (2*a);
        double r2 = (-b - sqrt(temp)) / (2*a);

        cout << "R1 = "<< r1 <<"\n";
        cout << "R2 = "<< r2 <<"\n";
    }

    return 0;
}
