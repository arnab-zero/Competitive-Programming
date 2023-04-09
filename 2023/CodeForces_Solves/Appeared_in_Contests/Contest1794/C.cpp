#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(n) for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;

void solve(){

    lli n;
    cin>>n;
    lli a[n];
    for(lli i=0; i<n; ++i){
        cin>>a[i];
    }

    vi v;

    for(lli i=0; i<n; ++i){

        lli j = i-1, temp = a[i], it=1;

        if(i==0){
            v.pb(it);
            continue;
        }

        while(j>=0){
            ++it;
            temp = (temp*a[j])/it;
            if(temp != a[i])
                break;
            --j;
        }

        v.pb(it);
    }

    sort(v.begin(), v.end());

    for(auto i: v)
        cout<<i<<spc;
    cout<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;