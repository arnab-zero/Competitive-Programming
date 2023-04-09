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

int n, x, sum = 0;
cin>>n;
int change = n;
vi ar;

for(int i=0; i<2*n-1; ++i)
    cin>>x, ar.pb(x);
sort(ar.begin(), ar.end());

for(int i=0; i<2*n-1; ++i)
{
    if(ar[i]>=0)
    {
        sum += ar[i];
        change = 0;
        continue;
    }
    else
    {
        if(change)
        {
            sum += (-1)*ar[i];
            --change;
        }
        else
            sum += ar[i];
    }

}

cout<<sum;

shesh;