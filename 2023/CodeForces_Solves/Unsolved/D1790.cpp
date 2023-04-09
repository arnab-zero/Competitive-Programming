#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(n) for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;

void solve(){

    int n;
    cin>>n;

    int a[n+1];
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        ++a[x];
    }

    sort(a, a+n);

    int count=0, i=1;

    while(i<n+1){

        if(a[i]==0){
            ++i;
            continue;
        }

        int del = a[i];
        count+=del;

        for(int j=i; i<n+1; ++j){
            if(a[j]==0)
                break;
            else if(a[j]>=del)
                a[j]-=del;
            else 
                del=a[j], a[j]=0;
        }

        ++i;
    }

    cout<<count<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;