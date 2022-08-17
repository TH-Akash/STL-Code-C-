#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p;

    // push or insert(),,,
      p.first=10;
      p.second=20;
     //pair<int,char>p(10,'b');
     pair<int,int>p2(p);
     pair<int,char>p3;
     p3=make_pair(25,'a');
     pair<int,char>p4;
     p4=make_pair(50,'b');

     // swap(),,
     p4.swap(p3);
     cout<<p2.first<<" "<<p2.second<<endl;
     cout<<p3.first<<" "<<p3.second<<endl;
     cout<<p4.first<<" "<<p4.second<<endl;

     //==
     if(p3==p4)cout<<"Yes"<<endl;
     else cout<<"No"<<endl;

     // !=
     if(p3!=p4)cout<<"yes"<<endl;
     else cout<<" NO"<<endl;

     // >=
    if(p3>=p4)cout<<"yes"<<endl;
     else cout<<" NO"<<endl;

     // <=
     if(p3<=p4)cout<<"yes"<<endl;
     else cout<<" NO"<<endl;





}

