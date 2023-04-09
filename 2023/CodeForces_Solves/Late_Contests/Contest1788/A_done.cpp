#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define spc " "

int solve(){
    int n, x;
    cin>>n;
    int a[n];
    cin>>x;

    if(x==1)
        a[0]=0;
    else 
        a[0]=1;

    for(int i=1; i<n; ++i){
        cin>>x;
        (x==2)?(a[i]=a[i-1]+1):(a[i]=a[i-1]);
    }

    // for(int i=0; i<n; ++i)
    //     cout<<a[i]<<spc;
    // cout<<endl;

    if(a[n-1] & 1)
        return -1;
        
    if(a[n-1] == 0)
        return 1;

    int tar = a[n-1]/2;
    for(int i=0; i<n; ++i){
        if(a[i]==tar)
            return i+1;
    }
}

int main(void){
    fastio;

    lli t;
    cin>>t;

    while(t--){
        cout<<solve()<<endl;
    }

    return 0;
}