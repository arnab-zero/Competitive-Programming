#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define vi vector<int>
#define si set<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define in insert
#define mpr make_pair
#define spc " "
#define nl cout<<endl
typedef long long int lli;

shuru;

int a, b;
cin>>a>>b;
string st;
si x, y;

for(int i=0; i<a; ++i)
{
    cin>>st;
    for(int j=0; j<st.size(); ++j)
    {
        if(st[j] == 'S')
            x.in(i), y.in(j);
    }
}

int sx = x.size(), sy = y.size();

cout<< (a-sx)*b + (b-sy)*a - (a-sx)*(b-sy);


shesh;
