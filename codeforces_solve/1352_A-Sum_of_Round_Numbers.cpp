#include <bits/stdc++.h>
using namespace std;

void calc(int n, int m, int s){
    if (n==0) {
        cout << s << "\n";
        return;
    }
    if (n%10 == 0){
        calc(n/10, m*10, s);
    }else{
        calc(n/10, m*10, s+1);
        cout << (n%10) * m << " ";
    }
}

void rSolution(){
    int n;
    cin >> n;
    calc(n, 1, 0);
    cout << "\n";
}

void solution(){
    int n, m=1, step=0, terms[10], x=0;
    cin >> n;

    while(n){
        if (n%10 !=0 ){
            step++;
            terms[x++] = (n%10) * m;
        }
        m = m*10;
        n = n/10;
    }

    cout << step << "\n";
    for(int i=0; i<x; i++) {
        cout << terms[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    int test_cases;
    cin >> test_cases;
    while(test_cases--){
//        solution();
        rSolution();
    }

    return 0;
}
