#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli bin_expo(lli a, lli n){
    if(n == 0)
        return 1;
    else if(n%2)
        return a*bin_expo(a, (n-1)/2)*bin_expo(a, (n-1)/2);
    else if(n%2 == 0)
        return bin_expo(a, n/2)*bin_expo(a, n/2);
}

int main(void){
    lli a, n;
    cin>>a>>n;
    lli ans = bin_expo(a, n);
    cout<<ans<<endl;
    return 0;
}