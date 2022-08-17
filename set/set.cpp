#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string>s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
   auto it=s.find("abc");
   for(auto it:s){
    cout<<it<<" ";
   }cout<<endl;
   for( auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
   }cout<<endl;

   if(it!=s.end()){
     cout<<(*it);
   }cout<<endl;
   s.erase(it);
   for(auto it:s){
    cout<<it<<" ";
   }cout<<endl;


}
