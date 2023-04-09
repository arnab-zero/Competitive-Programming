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

string st;
cin>>st;
vector<char> v;
int len = st.size(), nota = 0, take=0, drive=0;

for(int i=0; i<len; ++i)
{
    if(st[i]!='a')
    {
        v.pb(st[i]);
        ++nota;
    }

    if(len-i-1<nota)
    {
        cout<<":("<<endl;
        RZ;
    }
    else if(len-i-1==nota)
    {
        take=i+1;
        break;
    }
}
  
for(int i=take; i<len; ++i)
{
    if(st[i]!=v[drive])
    {
        cout<<":("<<endl;
        RZ;
    }
    ++drive;
}

for(int i=0; i<take; ++i)
{
    cout<<st[i];
}

shesh;