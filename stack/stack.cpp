#include<bits/stdc++.h>

using namespace std;

int siz (stack<int> s){
    stack<int> temp;
    int siz=0;
     while(!s.empty()){
       ++siz;
       temp.push(s.top());
       s.pop();
    }

    while(!temp.empty()){
       s.push(temp.top());
       temp.pop();
    }
    int x = s.top();
   return (siz);
}
int main(){
    stack<int>s;
    stack<int> temp;
    s.push(2);
    s.push(3);
    s.push(20);
    s.push(5);
   int x = siz(s);
   cout<<x<<endl;


}
