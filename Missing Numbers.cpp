#include<bits/stdc++.h>
#include <vector>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long ll;

vector<int> farr;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    ll t;
    t=1;
    while(t--){
        ll n;
        cin>>n;
        for(int i=0;i<n;i++){
            farr.push_back(0);
        }
        int temp;
        for(int i=0;i<n-1;i++){
            cin>>temp;
            farr[temp-1]=1;
        }
        for(int i=0;i<n;i++){
            if(farr[i]==0){
                cout<<i+1<<"\n";
                break;
            }
        }

    }
    return 0;
}
