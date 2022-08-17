#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s={1,2,3,4,6,7};
    for(auto it:s){
        cout<<it<<" ";
    }cout<<endl;

    // Lower_bound(),,,,,
    set<int>::iterator it;
    it=s.upper_bound(3);
    if(it==s.end()){
        cout<<"the element is larger to the grater elemnt"<<endl;
    }
    else{
        cout<<" the lower bound of is "<<*it<<endl;
    }
    // Upper_bound(),,,,,
    set<int>::iterator it1;
    it1=s.upper_bound(7);

    if(it1==s.end()){
        cout<<"the element is larger or equal to the Greater than"<<endl;
    }
    else{
        cout<<" the upper_bound of 6 is "<<*it1<<endl;
    }

    // emplace (),,,
    set<int>se;
    se.emplace(1);
    se.emplace(2);
    se.emplace(3);
    for(auto it:se){
        cout<<it<<endl;
    }
    // swap(),,,
    set<int>s1;
    s1={1,2,4,6,8,91,67};

    s.swap(s1);
    for(auto it:s){
        cout<<it<<" ";
    }cout<<endl;

    // operator(),,,

    set<int>s2;
    s2=s1;
    for(auto it:s2){
        cout<<it<<" ";
    }cout<<endl;



}
