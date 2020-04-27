#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;

    int flag = 0;

    while(cin>>a){
        if (a==0) break;

        if (a < 0){
            flag = 1;
        }
    }

    if (flag == 0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }


    return 0;
}
