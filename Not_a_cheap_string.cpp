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
    string st;
    cin>>st>>n;
    int len=st.size(), sum=0;

    for(int i=0;i<len;++i)
        sum+=st[i];

    sum-=len*96;

    if(sum<=n)
    {
        cout<<st<<endl;
        continue;
    }

    string te=st;

    sort(te.begin(), te.end());

    if(te[0]-'a'>n)
    {
        cout<<endl;
        continue;
    }

    int  tar = sum-n;
    int ar[26]={0};
    sum=0;

    for(int i=len-1;;--i)
    {
        sum+=(te[i]-96);
        ++ar[te[i]-'a'];
        if(sum>=tar)
            break;
    }

    for(int i=0;i<len;++i)
    {
        if(ar[st[i]-'a']>0)
            --ar[st[i]-'a'];
        else 
            cout<<st[i];
    }

    cout<<endl;

}

shesh;