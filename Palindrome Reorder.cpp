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
        int frequency_arr[26]={};
        for(auto i:s){
            frequency_arr[(int)i - (int)'A']++;
        }
        bool oddFlag=false;
        bool isPossible=true;
        string front;
        string backRev;
        int last_add=-1;
        for(int i=0;i<26;i++){
            if(frequency_arr[i]&1){
                if(oddFlag){
                    isPossible=false;
                    break;
                }
                else{
                    oddFlag=true;
                    last_add = i;
                }
            }
            else{
                for(int j=0;j<frequency_arr[i]/2;j++){
                     front.push_back((char)('A'+i));
                     backRev.push_back((char)('A'+i));
                }
            }
        }
        if(isPossible){
        string answer;
        if(last_add!=-1){
            for(int j=0;j<frequency_arr[last_add];j++){
                     front.push_back((char)('A'+last_add));
            }
        }
        reverse(backRev.begin(), backRev.end());
        answer = front+ backRev;
        cout<<answer<<"\n";
        }
        else{
            cout<<"NO SOLUTION"<<"\n";
        }
    }
    return 0;
}
