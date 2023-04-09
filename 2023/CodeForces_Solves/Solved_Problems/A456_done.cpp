#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool sortByFirst(const pair<int, int> &a, const pair<int, int> &b){
    return a.first < b.first;
}

int main(void){
    fastio;

    int n;
    cin>>n;
    vector<pair<int, int>> v;

    for(int i=0; i<n; ++i){
        int x, y;
        cin>>x>>y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), sortByFirst);

    for(int i=1; i<n; ++i){
        if(v[i-1].second>v[i].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }

    cout<<"Poor Alex"<<endl;

    return 0;
}