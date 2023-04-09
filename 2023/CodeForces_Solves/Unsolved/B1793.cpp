#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define spc " "

void solve(int x, int y){
    cout<<2*(abs(x)+abs(y))<<endl;
    cout<<0<<spc;

    while(x--)
        cout<<1<<spc<<0<<spc;
    
    while(y++)
        cout<<-1<<spc<<0<<spc;

    cout<<endl;
}

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int x, y;
        cin>>x>>y;
        solve(x, y);
    }

    return 0;
}