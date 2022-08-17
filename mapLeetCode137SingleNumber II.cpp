#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    int ans;
    for(i=0;i<mp.size();i++){
        int x=mp[i];
        mp[i]++;
    }
    map<int,int>::iterator it;
    for(auto it:mp){
        int x=it.first;
        int y=it.second;
        if(y==1){
            ans=x;
            break;
        }
    }
    cout<<ans<<endl;


}
