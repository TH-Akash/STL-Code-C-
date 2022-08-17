#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string>m){
    cout<<"Size : "<<m.size()<<endl;
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    unordered_map<int,string>m;
    m[1]="abc";
    m[5]="cde";
    m[3]="acd";
    m[6]="a";
    m[5]="cde";
    print(m);
}
