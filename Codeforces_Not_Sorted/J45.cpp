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
#define spc " "
#define nl cout<<endl
typedef long long int lli;

shuru;

int a, b;
cin>>a>>b;

int n = a*b;

if(n==1)
{
    cout<<1;
    RZ;
}

if(a<=2 && b<=2)
{
    cout<<-1;
    RZ;
}
else if(a<=3 && b==1)
{
    cout<<-1;
    RZ;
}
else if(a==1 && b<=3)
{
    cout<<-1;
    RZ;
}

if(a==1)
{
    int ev = 2, od = 1;
    for(; ev<=n; ev+=2)
        cout<<ev<<spc;
    for(; od<=n; od+=2)
        cout<<od<<spc;
}
else if(b==1)
{
    int ev = 2, od = 1;
    for(; ev<=n; ev+=2)
        cout<<ev<<endl;
    for(; od<=n; od+=2)
        cout<<od<<endl;
}
else if(a==2)
{
    int dif;

    (b%2 == 0)?(dif = b):(dif = b+1);

    for(int i=1; i<n; i+=2)
        cout<<i<<spc;
    nl;

    cout<<dif<<spc;

    for(int i=n-2; i>1; i-=2)
    {
        if(i==dif)
            cout<<n;
        else 
            cout<<i;
        
        cout<<spc;
    }
}
else if(b==2)
{
    int ev = n, od = n-1;

    for(int i=0; i<a; ++i)
    {
        for(int i=0; i<b; ++i){
            if(od >= 1)
            {
                cout<<od<<spc;
                od -= 2;
            }
            else 
            {
                cout<<ev<<spc;
                ev -= 2;
            }
        }
        nl;
    }
}
else 
{
    int ev = 2, od = 1;

    for(int i=0; i<a; ++i)
    {
        for(int j=0; j<b; ++j)
        {
            if(od<=n)
            {
                cout<<od<<spc;
                od+=2;
            }
            else
            {
                cout<<ev<<spc;
                ev+=2;
            }
        }
        nl;
    }
}

shesh;