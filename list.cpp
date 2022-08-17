#include<bits/stdc++.h>
using namespace std;
 int main(){
     /*
     list<int>li;
     list<int>li2;
     li={1,2,3,45,6,7};
     li2={3,4,6,7,8,9};

      li.swap(li2);
      for(auto it:li){
        cout<<it<<" ";
      }
      cout<<endl;

      for(auto it:li2){
        cout<<it<<endl;
      }
      */
      // merge(),,,
      list<int>li={1,2,3,4,5,6};
      list<int>li2={3,4,5,6,7,8};
      li.merge(li2);

       for(auto it:li){
        cout<<it<<" ";
       }
       cout<<endl;

 }
