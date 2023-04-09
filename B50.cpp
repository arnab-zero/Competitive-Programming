#include <bits/stdc++.h>        //Problem title: Choosing Symbol Pairs
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
lli len = st.size();
vector<pair<char, lli>> v;
set<char> s;

for(lli i=0; i<len; ++i){
    if(s.find(st[i]) == s.end()){
        v.pb(mpr(st[i], 1));
        s.insert(st[i]);
    }
    else{
        for(lli j=0; j<v.size(); ++j){
            if(st[i] == v[j].first)
            {
                ++v[j].second;
                break;
            }
        }
    }
}

lli res = 0;

for(lli i=0; i<v.size(); ++i){
    res += v[i].second*v[i].second;
}

cout<<res<<endl;

shesh;