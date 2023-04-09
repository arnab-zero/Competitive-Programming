#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define spc " "
typedef long long int lli;

void solve(){
    int n;
    cin>>n;

    vector<pair<int, int>> v;
    int a[2*n+1] = {0};

    // for(int i=0; i<2*n+1; ++i)
    //     cout<<a[i]<<spc;
    // cout<<endl;

    v.pb({1, 2*n});
    a[1]=1;
    a[2*n]=1;

    int h = 1+2*n, i=2, temp=h-1;

    while(1){
        if(i>2*n)
            break;
        if(a[i]==0 and a[temp-i]==0 and i!=temp-i){
            a[i]=1;
            a[temp-i]=1;
            v.pb({i,temp-i});
            --temp;
        }

        i+=2;
    }

    temp=h+1, i=3;

    while(1){
        if(i>2*n)
            break;
        
        if(a[i]==0 and a[temp-i]==0 and i!=temp-i){
            a[i]=1;
            a[temp-1]=1;
            v.pb({i,temp-i});
            ++temp;
        }

        i+=2;
    }

    if(v.size()!=n){
        cout<<"No"<<endl;
        return;
    }

    cout<<"yes"<<endl;
    for(auto i:v){
        cout<<i.first<<spc<<i.second<<endl;
    }

    return;
}

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return  0;
}