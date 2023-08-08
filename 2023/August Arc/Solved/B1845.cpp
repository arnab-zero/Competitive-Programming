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

    int xa, ya, xb, yb, xc, yc, maxi=1;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;

    if(xa<0){
        xb+=xa;
        xc+=xa;
    }
    else if(xa>0){
        xb-=xa;
        xc-=xa;
    }

    if(ya<0){
        yb+=ya;
        yc+=ya;
    }
    else if(ya>0){
        yb-=ya;
        yc-=ya;
    }

    if(xb>0 and xc>0){
        maxi+=min(xb,xc);
    }
    else if(xb<0 and xc<0){
        maxi+=min(abs(xb),abs(xc));
    }

    if(yb>0 and yc>0){
        maxi+=min(yb,yc);
    }
    else if(yb<0 and yc<0){
        maxi+=min(abs(yb),abs(yc));
    }

    cout<<maxi<<endl;

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;