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

    lli n;
    cin>>n;
    lli a[n];
    lp(0,n,1){
        cin>>a[i];
    }

    lp(0,n,1){
        if(a[i]<0 and i==n-1){
            if(a[i-1]<=0){
                a[i] = -a[i];
                a[i-1] = -a[i-1];
            }
            else if(a[i-1]>0 and abs(a[i-1])<abs(a[i])){
                a[i] = -a[i];
                a[i-1] = -a[i-1];
            }
        }
        else if(a[i]<0){
            if(a[i+1]>0 and abs(a[i])>abs(a[i+1])){
                a[i] = -a[i];   
                a[i+1] = -a[i+1];
            }
            else if(a[i+1]<=0){
                a[i] = -a[i];
                a[i+1] = -a[i+1];
            }
        }

        lp(0,n,1)   
            cout<<a[i]<<spc;
        cout<<endl;
    }

    lli sum=0;

    lp(0,n,1){
        sum += a[i];
    }

    cout<<sum<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;