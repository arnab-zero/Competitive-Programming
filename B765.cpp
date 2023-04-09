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

int ar[26] = {0}, n = st.size();

if(st[0]=='a')
    ar[0] = 1;
else{
    cout<<"NO"<<endl;
    RZ;
}

lp(n){
    if(ar[st[i]-'a']!=1 && st[i]!='a')
    {
        if(ar[st[i]-'a'-1]==1)
            ar[st[i]-'a'] = 1;
        else {
            cout<<"NO"<<endl;
            RZ;
        }
    }
}

cout<<"YES"<<endl;

shesh;