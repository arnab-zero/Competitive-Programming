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

    int tar, n, ex;
    cin>>tar>>n>>ex;

    int ev=0, od=0;

    for(int i=1; i<=n; ++i){
        if(ev and od)
            break;
        if(i==ex)
            continue;
        if(i&1 and od==0)
            od=i;
        else if(i%2==0 and ev==0)
            ev=i;
    }

    if(!ev and !od){
        cout<<"NO"<<endl;
        return;
    }

    if((tar&1) and !od){
        cout<<"NO"<<endl;
        return;
    }

    if(tar<ev and tar<od){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    if(od==1){
        cout<<tar<<endl;
        for(int i=0; i<tar; ++i){
            cout<<1<<spc;
        }
        cout<<endl;
        return;
    }

    if(ev==2 and (tar%2==0)){
        cout<<tar/2<<endl;
        for(int i=0; i<tar/2; ++i){
            cout<<2<<spc;
        }
        cout<<endl;
        return;
    }

    if(ev==2 and (tar&1)){
        cout<<(tar-od)/2+1<<endl;
        for(int i=0; i<(tar-od)/2; ++i)
            cout<<2<<spc;
        cout<<od<<endl;
        return;
    }

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;