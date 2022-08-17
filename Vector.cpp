#include<bits/stdc++.h>
using namespace std;
 int main(){
     /*
     vector<int>v;
     v.push_back(1);
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);
      v.push_back(5);
     v.push_back(6);
     v.push_back(7);

    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        }
        cout<<endl;
        cout<<v.front()<<endl;
        cout<<v.back()<<endl;
        cout<<v.size()<<endl;
        v.clear();
        cout<<v.size()<<endl;
        cout<<v[1]<<endl;


        if(v.empty()) cout<<"Empty"<<endl;
        else cout<<"Not Empty"<<endl;
        v.push_back(8);
        v.push_back(9);
        v.push_back(10);
       v.insert(v.begin(),1);
       v.insert(v.end(),5);
       v.insert(v.end()-2,3);
       v.insert(v.begin()+2,2);
       v.insert(v.begin()+4,4,4);

         for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
         }
         cout<<endl;

   // swap korar jonno...
   vector<int>v1;
   v1.push_back(10);
   v1.push_back(20);
   v1.push_back(30);

    vector<int>v2;
     v2.push_back(1);
     v2.push_back(2);
     v2.push_back(3);

     cout<<"Before Swap"<<endl;
     for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
     }
     cout<<endl;
      for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";

      }
      cout<<endl;
      swap(v1,v2);
      cout<<"After swaping "<<endl;

       for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
       }
       cout<<endl;

       for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
       }
       cout<<endl;


       //sort korar jonno....

       vector<int>v1;
        v1.push_back(10);
        v1.push_back(30);
        v1.push_back(20);
        v1.push_back(15);

        cout<<"Before sorting : "<<endl;

        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;

        sort(v1.begin(),v1.end());

        cout<<" Before sorting :";
        for(int i=0;i<v1.size();i++)
       {

           cout<<v1[i]<<" ";
       }
       cout<<endl;


        //reverse() korar jonno.....

         vector<int>v;
         v.push_back(29);
         v.push_back(30);
         v.push_back(32);
         v.push_back(33);
         v.push_back(35);
         v.push_back(40);
         cout<<"Before reverse: ";
          for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
          }
          cout<<endl;
          reverse(v.begin(),v.end());
          cout<<" After the reverse :";
          for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
          }
          cout<<endl;

            */
            /*
            // iterator .....

            vector<int>v;
            v.push_back(1);
            v.push_back(2);
            v.push_back(3);
            v.push_back(4);

           vector<int>::iterator it;

           /*
           //singel value print korar jonno....
           it=v.begin()+2;
           cout<<*it<<endl;
           */

          /*
           // sob gulu aksate print korar jonno;

           for(it=v.begin();it!=v.end();it++){
                 cout<<*it<<endl;
           }

         */

           // reverse(),,,,
            vector<int>v={1,32,5,6,7};
            reverse(v.begin(),v.end());

           // aibabeo loop use kore kora jai
            for(auto vector :v){
                cout<<vector<<" ";
          }
          cout<<endl;











 }




