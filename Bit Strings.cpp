#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 long long power(long long x, unsigned int y, long long p){ 
    long long res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0){
        if (y & 1)
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
 int main() {   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        long long n;
        cin>>n;
        cout<<power(2,n,1000000007)<<"\n";   
    }
    return 0;
}
