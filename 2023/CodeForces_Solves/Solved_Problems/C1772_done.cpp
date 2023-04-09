#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define spc " "

void solve(int k, int n){

    int num = 1, inc = 0, i;

    for(i=1; i<=k; ++i){
        if(n-num-inc<k-i)
            break;
        cout<<(num+=inc)<<spc;
        ++inc;
    }

    //num-=inc;
    
    for(; i<=k; ++i)
        cout<<++num<<spc;

    cout<<endl;
}

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int k, n;
        cin>>k>>n;
        solve(k, n);
    }

    return 0;
}