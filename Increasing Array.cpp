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
        vector<int> v;
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            v.push_back(temp);
        }
        int current_max=v[0];
        long long answer = 0;
        for(int i=1;i<n;i++){
            if(current_max>=v[i]){
                answer+= current_max - v[i]; 
            }
            else{
                current_max = v[i];
            }
        }
        cout<< answer<<"\n";
    }
    return 0;
}
