#include<bits/stdc++.h>
using namespace std;


void even_odd(int num){

    if (num % 2 == 0){
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }
}


int main()
{
    int num;

    for (int i=1; i<=5; i++){
        cin >> num;
        even_odd(num);
    }

    return 0;
}
