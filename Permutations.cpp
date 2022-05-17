#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

 int main() {   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        int n;
        cin>>n;
        if(n==1){cout<<1<<"\n";}
        else if(n<4){cout<<"NO SOLUTION"<<"\n";}
        else if(n==4){cout<<"2 4 1 3"<<"\n";}
        else{
        for(int i=n;i>0;i=i-2){cout<<i<<" ";}
        for(int i=n-1;i>0;i=i-2){cout<<i<<" ";}
        cout<<"\n";
        }
    }
    return 0;
}
