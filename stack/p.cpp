#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   int a;
   long long l;
   char c;
   float f;
   double d;
   cin>>a>>l>>c>>f>>d;
   cout<<a<<endl;
   cout<<l<<endl;
   cout<<c<<endl;
   cout.precision(3);
   cout << fixed << f<< endl;
  cout.precision(9);
  cout << fixed << d << endl;
    return 0;
}
