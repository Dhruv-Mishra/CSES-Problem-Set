#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 int main() {   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        long long n;
        cin>>n;
        int x=5;
        long long ans = 0;
        while(n/x > 0){
            ans += (int)n/x;
            x = x*5;
        }
        cout<< ans<<"\n";
    }
    return 0;
}
