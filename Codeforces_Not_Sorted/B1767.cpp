#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define RZ return 0;
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define lp(n) for(int i=0; i<n; ++i)
#define spc " "
#define nl cout<<endl
typedef long long int lli;



shuru;

lli t, n;
cin>>t;

while(t--){
    cin>>n;
    lli a[n];
    lli x;
    cin>>x;
    for(lli i=0; i<n-1; ++i)
        cin>>a[i];
    sort(a, a+n-1);
    for(lli i=0; i<n-1; ++i){
        if(a[i]>x)
        {
            if((a[i]+x)%2)
                x = (a[i]+x)/2 + 1;
            else
                x = (a[i]+x)/2;
        }
    }

    cout<<x<<endl;

}

shesh;