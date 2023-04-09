#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(void){
    fastio;

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i)
        cin>>a[i];

    int st=-1, en=-1, on = 0; 

    for(int i=1; i<n; ++i){
        if(a[i-1]>a[i]){
            if(!on){
                ++on;   // on = 1
                st = i-1;
            }
            else if(on == 2){
                cout<<"no"<<endl;
                return 0;
            }
        }
        if(a[i-1]<a[i] && on==1){
            ++on;   // on = 2
            en = i-1;
            if(a[st]>a[i]){
                cout<<"no"<<endl;
                return 0;
            }
            else if(st-1>=0 && a[st-1]>a[i-1]){
                cout<<"no"<<endl;
                return 0;
            }
        }
    }

   if(en==-1 && st!=-1){
        if(a[n-1]<a[st-1] && st-1>=0){
            cout<<"no"<<endl;
            return 0;
        }
        else {
            cout<<"yes"<<endl;
            cout<<st+1<<" "<<n<<endl;
            return 0;
        }
    }

    cout<<"yes"<<endl;

    if(st==-1 && en==-1)
        cout<<1<<" "<<1<<endl;
    else 
        cout<<st+1<<" "<<en+1<<endl;

    return 0;
}