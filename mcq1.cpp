#include <iostream>

using namespace std;


class A {
   public:
      void fun(double i) { cout<< "\nIn A::Fun " << (i+1.11)<<'\n'; }
      void fun(string str) { cout<< "\nIn A::Fun " << str <<'\n'; }


};


class B : public A {
   public:
      using A::fun;
      void fun(int i) { cout<< "\nIn B::Fun"<< (i+1) <<'\n'; }

};

main() 
{
   B obj;
   obj.fun(10);
   obj.fun(10.10);
   obj.fun("sachin");


}
