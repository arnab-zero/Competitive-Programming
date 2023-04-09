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
    int n, yes=0, neg=0, sum=0;
    cin>>n;
    int a[n];
    lpn{
        cin>>a[i];
        if(i!=0 and a[i-1]==-1 and a[i]==a[i-1])
            ++yes;
        if(a[i]<0)
            ++neg;
        sum += a[i];
    }

    if(yes)
        cout<<sum+4<<endl;
    else if(neg)    
        cout<<sum<<endl;
    else 
        cout<<sum-4<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;