#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(n) for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;

void solve(){
    int l, r;
    lli maxi=0, num=0;
    cin>>l>>r;

    for(int i=l+1; i*i<=r; ++i){
        int j=i, j2 = i*2;
        int lc = __gcd(j,j2)/(j*j2), temp=lc;

        int count=2;

        while(1){
            lc = __gcd(j2,temp)/(j2*temp);
            if(lc<r){
                ++count;
                j2=temp;
                temp=lc;
            }
            else 
                break;
        }

        if(count > maxi){
            maxi=count;
            num=1;
        }
        else if(count == maxi)
            ++num;
    }

    cout<<maxi<<spc<<num<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;