#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define spc " "
#define nl cout<<endl
typedef long long int lli;

shuru;

string st;
cin>>st;
int len = st.size(), lf = 0, rg = 0, rem = 0;

for(int i=0; i<len; ++i)
{
    if(st[i] == ')')
        ++lf;   //left sided bracket count
    else if(st[i] == '(')
        ++rg;   //right sided bracket count

    if(lf>rg)
        rem += lf-rg, lf = 0, rg = 0;
}

rem += rg-lf;

cout<<len-rem<<endl;

shesh;