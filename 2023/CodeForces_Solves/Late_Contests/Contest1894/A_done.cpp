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

    lli n, k, temp;
    cin>>n>>k;
    temp = n;

    if(n%2 == 0){
        cout<<"Yes"<<endl;
        return;
    }

    if(n%k == 0){
        cout<<"YES"<<endl;
        return;
    }

    if((n&1) and (k%2==0)){
        cout<<"NO"<<endl;
        return;
    }

    for(lli i=k; i<n; i+=k){
        temp-=k;
        if(temp%2 == 0){
            cout<<"Yes"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;