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
#define nl cout<<endl;
typedef long long int lli;

void solve(){

    lli n, count = 0, sum = 0;
    cin>>n;
    lli a[n];
    lp(0,n,1){
        cin>>a[i];
        if(a[i]==1)
            ++count;
        else 
            sum += a[i];
    }   

    if(n==1){
        cout<<"NO"<<endl;
        return;
    }

    if(count == 0){
        cout<<"YES"<<endl;
        return;
    }

    lli nonOne = n-count;
    if(sum-nonOne < count){
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;