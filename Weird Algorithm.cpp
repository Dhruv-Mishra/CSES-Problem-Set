#include<bits/stdc++.h>
#include <vector>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
typedef long long ll;
 
int main() {   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    ll t;
    t=1;
    bool f=true;
    while(t--){
        ll n;
        cin>>n;
        while(n!=1){
            cout<<n<<" ";
            if(n%2){
                n= n *3 + 1;
                continue;
            }
            n = n / 2 ;
        }
        cout<<1<<"\n";
    }
    return 0;
}