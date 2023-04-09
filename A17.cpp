#include <bits/stdc++.h>            //problem title: NoldBach Problem
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

vi sieve(int n){
    int a[n+1] = {0};
    vi v;
    int i;
    
    for(i=2; i*i<n; ++i){
        if(!a[i]){
            v.pb(i);
            a[i] = 1;
            int temp = i;
            for(int j=2*i; j<n; j+=i){
                if(!a[j])
                    a[j] = 1;
            }
        }
    }

    for(--i; i<=n; ++i){
        if(!a[i])
            v.pb(i);
    }

    return v;
}


shuru;

int n, x;
cin>>n>>x;
vi v = sieve(n);
int len = v.size();

//cout<<len<<endl;

//for(int i:v)
//    cout<<i<<spc;
//nl;

if(v.size()-2 < x)
{
    cout<<"NO"<<endl;
    RZ;
}

int i = 0, j = 1, count = 0;

for(int z=2; z<len; ++z){
    if(v[i]+v[j] >= n)
        break;
    if(v[i]+v[j]+1 < v[z])
    {
        while(v[i]+v[j]+1 < v[z])
            i=j, ++j;
        if(v[i]+v[j]+1 == v[z])
            ++count, i=j, ++j;
    }
    else if(v[i]+v[j]+1 == v[z])
    {
        ++count, i=j, ++j;
    }
}

//cout<<count<<endl;

if(count >= x)
    cout<<"YES"<<endl;
else 
    cout<<"NO"<<endl;

shesh;