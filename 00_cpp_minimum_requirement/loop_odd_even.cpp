#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    int num;
    for(; ; ){
        cin >> num;

        if (num == 0 ){
            break;
        }

        if (num % 2 == 0){
            cout << "Even" << endl;
        }else{
            cout << "Odd" << endl;
        }

    }

    return 0;
}
