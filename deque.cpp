#include<bits/stdc++.h>
using namespace std;
 int main(){
     deque<int>dq;
     dq.push_back(1);
     dq.push_back(2);
     dq.push_back(3);
     dq.push_back(4);
     dq.push_back(5);

     /*
       // erase() funcation,,,,,
       deque<int>::iterator it,it2;
       it=dq.begin();
       it2=dq.begin()+3;

       dq.erase(it,it2);

     //dq.clear();
     for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
     }
     cout<<endl;
     if(dq.empty())cout<<"Empty"<<endl;
     else cout<<"Not Empty"<<endl;
        */

         // insert(),,,,
         deque<int>::iterator it;
         it=dq.begin()+2;
         dq.insert(it,8);


         for(auto it:dq){
            cout<<it<<" ";
         }
         cout<<endl;











 }

