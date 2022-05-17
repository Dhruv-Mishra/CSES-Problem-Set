#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

 int main() {   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        string s;
        cin>>s;
        int sub_len=1;
        int max_len=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                sub_len++;
            }
            else{
                max_len = max(max_len,sub_len);
                sub_len = 1;
            }
        }
        max_len = max(max_len,sub_len);
        cout<< max_len<<"\n";
    }
    return 0;
}
