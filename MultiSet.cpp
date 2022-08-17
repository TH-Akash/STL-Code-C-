#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(5);
    ms.insert(7);
    ms.insert(7);
    ms.insert(8);
    ms.insert(9);


    // max_size(),,,
    cout<<ms.max_size()<<endl;

    // print (),,,
    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    // begin(),end(),,,
    multiset<int>::iterator it;

    for(it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //clear(),,
    //ms.clear();

    //empty(),,
    if(ms.empty())cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;

    // erase(),,,
    ms.erase(2);

    for(auto it:ms){
        cout<<it<<" ";
    }cout<<endl;

    //or  amra jodi point kore boli kunta delate korbo,,
       it=ms.begin();
     advance(it,1);

     ms.erase(it);
     for(auto it:ms){
        cout<<it<<" ";
     } cout<<endl;

     // find(),,
     it=ms.find(7);

     if(it==ms.end())cout<<"Not Find"<<endl;
     else cout<<"find"<<endl;

     //count(),,,
     cout<<ms.count(7)<<endl;
       //  lower value point kore kake,,
       it=ms.lower_bound(5);
       for(auto it1=it;it1!=ms.end();it1++){
        cout<<*it1<<" ";
       }
     cout<<endl;

     // upper value point kore kake,,,

     it=ms.upper_bound(5);

     for(auto it2=it;it2!=ms.end();it2++){
        cout<<*it2<<" ";
     }cout<<endl;









}

