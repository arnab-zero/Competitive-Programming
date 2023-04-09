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
cin>>t;

while(t--)
{
    cin>>n;
    vector<string> v, w;
    string st;

    for(int i=0;i<n;++i)
    {
        cin>>st;
        string nt;
        nt+=st[1], nt+=st[0];
        v.pb(st);
        w.pb(nt);
    }

    for(auto u:v)
        cout<<u<<spc;
    cout<<endl;

    sort(v.begin(), v.end());
    
    for(auto u:v)
        cout<<u<<spc;
    cout<<endl;

    sort(w.begin(), w.end());

    for(auto u:w)
        cout<<u<<spc;
    cout<<endl;

}

shesh;
