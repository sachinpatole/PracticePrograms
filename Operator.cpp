
#include <iostream>
#include <ostream>

using namespace std;





class CMyclass {
   int iVal;
   string strValue;

  public:
   CMyclass(int i = 0, string str = "") : iVal(i), strValue(str) { }

   CMyclass operator +(const CMyclass &rhs) {
      CMyclass obj;
      obj.iVal = iVal + rhs.iVal;
      obj.strValue = strValue + rhs.strValue;
      return obj;
   }  
   friend ostream& operator << (ostream &os, const CMyclass &rhs);
};

ostream& operator << (ostream &os, const CMyclass &obj) 
{
   os << obj.iVal << "\t" << obj.strValue << endl; 
   return os;
}


int main()
{

   CMyclass obj1(1,"Sachin"), obj2(2, "Patole"), obj3;

   obj3 = obj1 + obj2;

   cout << obj3 << obj1 << obj2;

   return 0;
}
