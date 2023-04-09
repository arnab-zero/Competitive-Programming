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

int n, x;
lli sum=0, mi;
lli mi2 = mi = 1000000000;

cin>>n;

for(int i=0; i<n*n; ++i)
{
    cin>>x;
    if(x<mi2)
        mi2 = x;
    if(i%2){
        if(x<mi)
            mi = x;
    }
    sum+=x;
}

if(n%2)
    cout<<sum-mi2<<endl;
else
    cout<<sum-mi<<endl;

shesh;