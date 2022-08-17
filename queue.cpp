#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q,q1;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);


    //size(),,,,
    cout<<q.size()<<endl;

    //empty(),,,,,
    if(q.empty())cout<<"Empty"<<endl;
    else cout<<" not Empty"<<endl;

    //front(),,,,
    cout<<q.front()<<endl;

    // back(),,,,
    cout<<q.back()<<endl;

    // pop() kora,,,,,
    q.pop();
    cout<<q.front()<<endl;

     // print kora,,,,
     while(!q.empty()){
         cout<<q.front()<<" ";
         q.pop();
     }
    cout<<endl;

    // emplace(),,,,
     q.emplace(10);
     q.emplace(20);
     q.emplace(30);
     q.emplace(40);

     while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();

     }
     cout<<endl;

  //swap(),,,
   q1.push(11);
   q1.push(12);
   q1.push(13);
   q1.push(14);
   q1.push(15);

   q.swap(q1);
     cout<<"q  swap value :";
     while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
     }

     cout<<endl;


return 0;
}

