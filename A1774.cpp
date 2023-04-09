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

int t, len;
string st;
cin>>t;

while(t--){
    cin>>len>>st;
    int sum = 0;
    if(st[0] == '1')
        sum = 1;

    for(int i=1; i<len; ++i){
        if(st[i] == '1'){
            if(sum==1)
            {
                cout<<"-";
                --sum;
            }
            else 
            {
                cout<<"+";
                ++sum;
            }
        }
        else 
            cout<<"+";
    }

    nl;
}

shesh;
