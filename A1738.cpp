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

int t, n;
cin>>t;
while(t--){
    cin>>n;
    int x;
    vi type, fire, frost;
    for(int i=0; i<n; ++i)
        cin>>x, type.pb(x);
    for(int i=0; i<n; ++i)
    {
        if(type[i]==0)
            cin>>x, fire.pb(x);
        else if(type[i]==1)
            cin>>x, frost.pb(x);
    }
    
    sort(frost.begin(), frost.end(), greater<int>());
    sort(fire.begin(), fire.end(), greater<int>());

    int sum = 0, dt, i=0, j=0, sfr=frost.size(), sfi=fire.size();

    while(1)
    {
        
    }

    


}

shesh;