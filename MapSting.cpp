 #include<bits/stdc++.h>
using namespace std;
int main(){
  map<int,string>mp;
  mp.insert({1,"akash"});
  mp.insert({2,"Tanvir"});
  mp.insert({3,"Hasan"});
  mp[4]="aba";
  mp[5]="bbn";
  cout<<mp[2]<<endl;
  for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
  }
  map<string,int>mp1;
  mp1["aaaa"]=1;
  mp1["bbbb"]=2;
  mp1["cccc"]=3;
  mp1["dddd"]=4;
  cout<<mp1["aaaa"]<<endl;
  for(auto it:mp1){
    cout<<it.first<<" "<<it.second<<endl;
  }





}
