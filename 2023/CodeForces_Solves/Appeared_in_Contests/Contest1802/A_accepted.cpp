#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(x,n,d) for(int i=x;i<n;i+=d)
#define spc " "
typedef long long int lli;

void solve(){

    int n;
    cin>>n;
    int pos=0, neg=0;

    lp(0, n, 1){
        int x;
        cin>>x;
        if(x>0)
            ++pos;
        else    
            ++neg;
    }

    int i=1;

    for(i=1; i<=pos; ++i)
        cout<<i<<spc;
    --i;
    for(int j=0; j<neg; ++j){
        if(i>0)
            cout<<--i<<spc;
    }
    cout<<endl;

    i=0;

    while(pos or neg){

        if(pos){
            cout<<++i<<spc;
            --pos;
        }
        
        if(neg and i>0){
            cout<<--i<<spc;
            --neg;
        }
    }
    cout<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;