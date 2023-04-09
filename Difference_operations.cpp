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
    int out=0, cnt=0;

    for(int i=0;i<n;++i)
        cin>>a[i];
    
    if(a[0]==1)
    {
        cout<<"YES"<<endl;
        continue;
    }

if(a[0]%2==0)
    {
        for(int i=0;i<n;++i)
    {
        
        if(a[i]%2!=0)
         {
             out=1;
             break;
         }
         else if(a[i]<a[0])
         {
             out=1;
            break;
          }
        ++cnt;
     }
    }
else if(a[0]%2==1)
{
    for(int i=0;i<n;++i)
    {
        if(a[i]<a[0])
        {out=1;break;}
        else if(a[i]%a[0]!=0)
        {out=1; break;}
        ++cnt;
    }

}

    if(out)
    {
        cout<<"NO"<<endl;
        continue;
    }
    else if(cnt==n)
    {
        cout<<"YES"<<endl;
        continue;
    }
    
}

shesh;
