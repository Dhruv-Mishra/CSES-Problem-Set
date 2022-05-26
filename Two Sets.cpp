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
        if(((n >> 2) << 2) == n || (((n+1) >> 2) << 2) == n+1 ){
            cout<<"YES"<<"\n";
            long long set_sum = (n * (n+1)) >> 2;
            long long x = ceil((sqrtl(8*set_sum+1) - 1)/2);
            long long x_sum = (x * (x+1)) >> 1;
            if(x_sum==set_sum){
                cout<<x<<"\n";
                for(int i=1;i<=x;i++){
                    cout<<i<<" ";
                }
                cout<<"\n";
                cout<<n - x<<"\n";
                for(int i=x+1;i<=n;i++){
                    cout<<i<<" ";
                }
                cout<<"\n";
            }
            else{
                long long extra = x_sum - set_sum;
                cout<<x-1<<"\n";
                for(int i=1;i<=x;i++){
                    if(i==extra){
                        continue;
                    }
                    cout<<i<<" ";
                }
                cout<<"\n";
                cout<< n -x +1<<"\n";
                for(int i=x+1;i<=n;i++){
                    cout<<i<<" ";
                }
                cout<<extra<<"\n";
            }
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
