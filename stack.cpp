#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    if(st.empty())cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;

    int sz=st.size();
    cout<<sz<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    // full stack print kora,,,
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;



}
