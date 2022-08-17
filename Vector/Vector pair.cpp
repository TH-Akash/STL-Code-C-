#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v_p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        int b;
        cin>>a>>b;
        v_p.push_back(make_pair(a,b));
    }

  //  v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>>::iterator it;
    // full vactor print,,,
    for(it=v_p.begin();it!=v_p.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    // full vector print (),,,
    for(it=v_p.begin();it!=v_p.end();it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    auto d=1;
    cout<<d<<endl;
    for(auto &value:v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }

}
