

#include <iostream>

class CMyClass {
   
private:
   CMyClass* operator&()  {
      return this;
   }
};



int main()

{

   

   CMyClass obj;
   CMyClass* ptr = &obj;


}
