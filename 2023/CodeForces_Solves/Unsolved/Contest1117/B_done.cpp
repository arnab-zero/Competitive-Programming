#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lpn for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;

void solve(){

    int n, m, k;
    cin>>n>>m>>k;
    lli a[n];
    lpn{
        cin>>a[i];
    }

    sort(a, a+n);

    lli max1 = a[n-1], max2 = a[n-2];
    lli q = m/(k+1), rem = m%(k+1);
    lli maxres = q*(k*max1+max2) + rem*max1;
    cout<<maxres<<endl;
}



shuru;
fastio;

solve();

shesh;