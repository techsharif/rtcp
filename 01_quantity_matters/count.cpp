#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;

    int count = 0;

    while(cin>>a){
        if (a==0) break;

        if (a < 0){
            count ++;
        }
    }

    cout << count << endl;


    return 0;
}
