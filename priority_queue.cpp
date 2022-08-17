#include<bits/stdc++.h>
using namespace std;
int main(){
    // normaly top a grater value thakbe ,,,
    priority_queue<int>pq,pq1;

  //priority_queue<int,vector<int>,greater<int> >pq;// amra jodi top a small value rakhte cai,,

   //push(),,,,
    pq.push(1);
    pq.push(4);
    pq.push(3);
    pq.push(2);
    pq1.push(5);
    pq1.push(6);
    pq1.push(7);
    pq1.push(8);


   // empty(),,,,
   if(pq.empty())cout<<"Empty"<<endl;
   else cout<<"not Empty"<<endl;

   //size(),,,
   cout<<pq.size()<<endl;

   //top(),,,
   cout<<pq.top()<<endl;

   // pop()
    pq.pop();
   cout<<pq.top()<<endl;

   //full value print kora,,,,

   while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();

   }
   cout<<endl;


   // swap(),,,
   pq.swap(pq1);
   while(pq.size()>0){
    cout<<pq.top()<<" ";
    pq.pop();
   }
   cout<<endl;

   // emplace(),,,
     pq1.emplace(10);
     pq1.emplace(20);
     pq1.emplace(30);
     pq1.emplace(40);

     while(pq1.size()>0){
        cout<<pq1.top()<<" ";
        pq1.pop();

     }



}
