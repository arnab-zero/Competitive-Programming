// #include <bits/stdc++.h>             // fix it for function call solve()
// using namespace std;

// #define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define spc " "
// typedef long long int lli;

// int solve(int n, int x, int y){

//     int mx = max(x, y);
//     int mn = min(x, y);

//     if(mn!=0)
//         return -1;
    
//     if((n-1)%mx and mx)
//         return -1;

//     int pr = 1, cnt=0;
//     for(int i=1; i<n; ++i){
//         if(cnt==mx)
//             cnt=0, pr=i;
//         cout<<pr<<spc;
//         ++cnt;
//     }

//     return 1;
// }

// int main(void){
//     fastio;

//     int t;
//     cin>>t;

//     while(t--){
//         int n, x, y;
//         cin>>n>>x>>y;
//         int res = solve(n, x, y);
//         if(res == -1)
//             cout<<res<<endl;
//     }

//     return 0;

// }



// Accepted Code: 
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define spc " "
typedef long long int lli;


int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        
        int mx = max(x,y);
        int mn = min(x,y);
    
        if(mn!=0 or mx==0){
            cout<<-1<<endl;
            continue;
        }
        
        if((n-1)%mx and mx){
            cout<<-1<<endl;
            continue;
        }
    
        int pr = 1, cnt=0;
        for(int i=2; i<=n; ++i){
            if(cnt==mx)
                cnt=0, pr=i;
            cout<<pr<<spc;
            ++cnt;
        }
        cout<<endl;
    }

    return 0;
}