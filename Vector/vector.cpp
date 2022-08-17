#include<bits/stdc++.h>
using namespace std;
 void printVce(vector<int>&v){ // V vector er reference v te asche,,
     cout<<v.size()<<endl;// v.size() time compexity  0(1),

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     v.push_back(77);
     cout<<endl;

 }
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    v.push_back(7);
    v.push_back(10);

    vector<int>&v2=v;//  V vector er copy  na  baniye , accual vector baniye ,Refernce use korsi & diya,,
    // vector copy, time compleacity 0(n),
    v.pop_back();
    v2.push_back(50);
    printVce(v);
    printVce(v);
    printVce(v2);

}
