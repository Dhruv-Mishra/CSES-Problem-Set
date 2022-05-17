#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

 int main() {   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long y,x;
        cin>>y>>x;
        if(x>=y){
            if(x%2){
                cout<< x * x + 1 -y<<"\n";
            }
            else{
                cout<< (x-1) * (x-1) + y<<"\n";
            }
        }
        else{
             if(y%2==0){
                cout<< y * y + 1 -x<<"\n";
            }
            else{
                cout<< (y-1) * (y-1) + x<<"\n";
            }
        }
    }
    return 0;
}
