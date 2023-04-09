#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define synch ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define spc " "
#define tab "\t"
#define nl cout<<endl
#define RZ return 0
typedef long long int lli;



shuru;

synch;

lli t;
while(t--){
    lli x, y, gcd;
    lli one = 3, two = 4;

    cin>>x>>y>>gcd;

    for(int i=1; i<gcd; ++i)
        one *= 10;
    for(int i=1; i<gcd; ++i)
        two *= 10;

    while(1){
        one *= 3;
        
    }

}

shesh;






/*
lightOJ: Integer Divisibility

lli t, n, d;
cin>>t;

for(lli j=1; j<=t; ++j){
    cin>>n>>d;

    lli i = 1, add = d, remainder = 0;

    for(;; ++i){
        remainder = (add%n + remainder) % n; 
    
        if(remainder == 0){
            cout<<"Case "<<j<<": "<<i<<endl;
            break;
        }
        add = add*10;
    }
}
*/
