#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    int arr[600000], action = 1;
    priority_queue <pair<int, int>> pq;
    /// priority_queue <pair<int, pair<int, int>>> pq;


    pq.push({n, -1});
    /// pq.push({n, {n-1, 1}}

    while(!pq.empty()){
        int l, r;
        l = -pq.top().second;
        /// l = pq.top().second.second
        r = l + pq.top().first - 1;
        pq.pop();

        int mid = (l+r)/2;
        arr[mid] = action++;

        if (l>=r) continue;
        if(mid>l) pq.push({mid-l, -l});
        if(r>mid) pq.push({r-mid, -(mid+1)});
    }

    for (int i=1; i<=n; i++){
        cout << arr[i] << " ";
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
        solution();
    }

    return 0;
}
