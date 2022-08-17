#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m){
    cout<<m.size()<<endl;
    for(auto &it:m){
      cout<<(it).first<<" "<<(it).second<<endl;
    }
}
int main(){
    map<int,string>m;
    m[1]="aaa";
    m[5]="bbb";
    m[3]="ccc";
    m.insert({4,"ddd"});
    map<int,string>::iterator it;

    /*
    for(auto it:m){
        cout<<(it).first<<" "<<(it).second<<endl;
    }
    */
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<"size :";
    print(m);
    //find (),,
     it= m.find(3);//0(log n)
    if(it==m.end()){
        cout<<"no value";
    }
    else{
        cout<<it->first<<" "<<it->second<<endl;
    }
    // erase(),,,
    cout<<"erase() funcation:"<<endl;
    m.erase(7);// (log n)
    for(auto it:m){
        cout<<(it).first<<" "<<(it).second<<endl;
    }
    /*
    m.clear();
    for(auto it:m){
        cout<<(it).first<<" "<<(it).second<<endl;
    }
    */





}
