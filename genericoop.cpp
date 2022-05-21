#include<iostream>
using namespace std;

template <class T>

class Arithematic
{
  public:
    T No1;
    T No2;

    Arithematic(T a, T b)
    {
       No1 = a;
       No2 = b; 
    }

    T Addition()
    {
       T ans;   //do not initialize w any value coz we dont know the datatype.
       ans = No1 + No2;
       return ans;
    }
    
    T Subtraction()
    {
       T ans;
       ans = No1 - No2;
       return ans;
    }
};

int main()
{
  Arithematic <int>iobj(10, 11);
  int ret = iobj.Addition();
  cout<<"Addition is :"<<ret<<"\n";

  Arithematic <double> dobj(17.3, 11.5);
  double dret = dobj.Addition();
  cout<<"Addition is :"<<dret<<"\n";

  return 0;
}