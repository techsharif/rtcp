#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long p, n;

    cin >> p >> n;

    if (p == 0)
    {
        cout << "0\n" ;
        return 0;
    }

    int i;
    for (i=1; i<n; i++)
    {

        if (p==1) break;

        if (p%2==0) p = p/2;
        else p = 3*p + 1;

    }

    if (i == n)
        cout << p << "\n";
    else
    {
        int c = n - i;
        if (c%3==0) p = 1;
        else if (c%3==1) p = 4;
        else p = 2;

        cout << p << "\n";
    }

    return 0;
}






/**

1 4 2 1 4 2 1
2 1 4 2 1 4 2 1
3 10 5 16 8 4 2 1 4 2 1 4 2 1
4 2 1 4 2 1 4 2 1
5 16 8 4 2 1 4 2 1 4 2 1
6 3 10 5 16 8 4 2 1 4 2 1 4 2 1

n1 = 1
n1 + c = ?

c % 3 == 0 , 1
c % 3 == 1, 4
c % 3 == 2, 2

n1 = 8
n1 + 4 = 4 % 3 = 1 = 4
**/





