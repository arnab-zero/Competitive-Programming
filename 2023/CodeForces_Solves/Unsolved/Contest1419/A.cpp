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
    string st;
    cin>>n>>st;

    bool od=false, ev=false;

    lp(0,n,2){
        if(st[i]=='1' or st[i]=='3' or st[i]=='5' or st[i]=='7' or st[i]=='9'){
            od=true;
            break;
        }
    }

    lp(1,n,2){
        if(st[i]=='2' or st[i]=='4' or st[i]=='6' or st[i]=='8' or st[i]=='0'){
            ev=true;
            break;
        }
    }

    if(n & 1){
        if(od){
            cout<<1<<endl;
            return;
        }
        cout<<2<<endl;
    }
    else{
        if(ev){
            cout<<2<<endl;
            return;
        }
        cout<<1<<endl;
    }
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;