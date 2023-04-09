#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define lp(n) for(int z=0;z<n;++z)
#define spc " "
typedef long long int lli;

shuru;

int t, n;
cin>>t;

while(t--)
{
    cin>>n;
    int a[n];
    int out=0, od=0, ev=0, no=0, ne=0;

    for(int i=0;i<n;++i)
    {
        cin>>a[i];

        if(a[i]%2==1)
            ++no;
        else
            ++ne;

        if(out)
            continue;

        if(od==1&&a[i]%2==0)
            od=0, ev=1;
        else if(ev==1&&a[i]%2==1)
            od=1, ev=0;
        else if(ev==1&&a[i]%2==0)
            out=1;
        else if(od==1&&a[i]%2==1)
            out=1;
        else if(a[i]%2==0)
            ev=1;
        else if(a[i]%2==1)
            od=1;
    }

    if(no==n)
    {
        cout<<"YES"<<endl;
        continue;
    }
    else if(ne==n)
    {
        cout<<"YES"<<endl;
        continue;
    }
    else if(!out)
    {
        cout<<"YES"<<endl;
        continue;
    }

    if(out)
    {
        cout<<"NO"<<endl;
    }
}

shesh;