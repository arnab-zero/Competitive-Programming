#include <bits/stdc++.h>
using namespace std;

#define shuru    int main(void){
#define shesh    return 0;}
#define vi       vector<int>
#define pii      pair<int,int>
#define pb       push_back
#define pob      pop_back
#define mpr      make_pair
#define tcyc     cin>>t; while(t--)
#define lp(n)    for(int z=0;z<n;++z)
#define py       cout<<"YES"
#define pn       cout<<"NO"
#define pmo      cout<<"-1"
#define spc      " "
typedef long long int lli;

shuru;

int t, n;

tcyc
{
    cin>>n;
    string st;
    cin>>st;
    int a[26]={0};
    int res=0;
    for(int i=0;i<n;++i)
    {
        if(a[st[i]-'A']==0)
        {
            res+=2;
            a[st[i]-'A']=1;
        }
        else 
            ++res;
    }

    cout<<res<<endl;
}

shesh;