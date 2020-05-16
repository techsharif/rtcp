/**
Sum of digits

input:       output:
45067         22
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int n, sum;

     cin >> n;

     sum = 0;

     while(n){
        sum = sum + (n%10); /// sum+= (n%10)
        n = n/10; /// n/=10

     }

     cout << sum << "\n";

    return 0;
}
