#include<iostream>
using namespace std;

template <class T>

T Addition(T No1, T No2)
{
   T Ans = 0;
   Ans = No1 + No2;
   return Ans;
}

int main()
{
  int x = 10, y = 11, ret = 0;
  ret = Addition(x,y);
  cout<<"int Addition is :"<<ret<<"\n";

  float a = 10.4, b = 11.8, fret = 0;
  fret = Addition(a,b);
  cout<<"float Addition is :"<<fret<<"\n";

  double d1 = 14.7, d2 = 19.4, dret = 0;
  dret = Addition(d1, d2);
  cout<<"double Addition is :"<<dret<<"\n";

  return 0;
}