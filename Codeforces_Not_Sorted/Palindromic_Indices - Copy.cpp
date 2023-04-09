#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define lp(n) for(int z=0;z<n;++z)
#define spc " "
typedef long long int lli;

shuru;

int t, n;
string st;
cin>>t;

while(t--)
{
    cin>>n;
    cin>>st;

    if(n%2==1)
        cout<<(n+1)/2<<endl;
    else 
        cout<<n/2<<endl;
}

shesh;