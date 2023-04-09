#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lpn for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;

void solve(){

    int n, pos=0, neg=0;
    cin>>n;
    int a[n];
    lpn{
        cin>>a[i];
        if(a[i]>0)
            ++pos;
        else if(a[i]<0)
            ++neg;
    }

    if(2*pos>=n){
        cout<<1<<endl;
        return;
    }
    else if(2*neg>=n){
        cout<<-1<<endl;
        return;
    }

    cout<<0<<endl;

}



shuru;
fastio;

solve();

shesh;