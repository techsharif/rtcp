#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x;

    cin >> x;

    /// -ve 0 +ve

    if (x < 0){
        cout << "-ve";
    }else{

        if (x==0){
            cout << "0";
        }else{
            cout << "+ve";
        }
    }


    /**
    if (x < 0){
        cout << "-ve";
    }else if(x > 0){
        cout << "+ve";
    }else{
        cout << "0";
    }
    */

    return 0;
}
