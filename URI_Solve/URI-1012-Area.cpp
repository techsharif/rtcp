#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout << fixed << setprecision(3);

     double a, b, c;
     cin >> a >> b >> c;

     cout << "TRIANGULO: "<< a*c/2  << "\n";
     cout << "CIRCULO: "<< 3.14159*c*c  << "\n";
     cout << "TRAPEZIO: "<< (a+b)/2*c << "\n";
     cout << "QUADRADO: "<< b*b << "\n";
     cout << "RETANGULO: "<< a*b << "\n";

    return 0;
}
