#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define spc " "
#define pb push_back
typedef long long int lli;

int solve(int n, int plr){
    if(n&1){
        if(n==1)
            return 3-plr;
        else 
            return plr;
    }

    if(n==2)
        return plr;

    vector<int> v;
    for(int i=2; i*i<=n; ++i){
        if(n%i)
            continue;
        if(i&1)
            v.pb(i);
        else if((n/i)&1)
            v.pb(n/i);
    }

    int maxi=0;
    for(int i=v.size()-1; i>=0; --i){
        if((n/v[i])%2==0){
            maxi=v[i];
            break;
        }
    }

    // cout<<endl;
    // for(auto i:v)
    //     cout<<i<<spc;
    // cout<<endl;
    // cout<<maxi<<endl;

    if(maxi==0)
        return 3-plr;

    return solve(n/maxi, 3-plr);
}

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int res=solve(n, 1);
        
        if(res==1)
            cout<<"Ashishgup"<<endl;
        else    
            cout<<"FastestFinger"<<endl;
    }

    return 0;
}