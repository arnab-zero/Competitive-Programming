#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long int lli;

void solve(){
    int n, one=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
        if(a[i]==1)
            ++one;    
    }

    cout<<one/2+one%2+n-one<<endl;
}

int main(void){
    fastio;
    
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}