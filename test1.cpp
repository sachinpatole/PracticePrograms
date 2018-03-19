#include <iostream>
#include <iomanip>

using namespace std;

int& fun(int *p) 
{

   return *p;

}

int* fun1(int *p) 
{

   return p;
}

class Base {
   private:
      int i;

   public:
   Base(int ii = 0) : i(ii) { }
   int & get() { &i; }
   int * getP() { &i; }
   void print() { cout<< i << endl; }
};


int * somefun() { int *i = new int(10); return i; }

int & somefun1() { int *i = new int(10); return *i; }


main() 
{

//   const int i = 9;
//   string name = "Sachin Patole";
//  cout << right << setw(40) << setfill(' ') << name << endl;

//   cout << left << setw(40) << setfill(' ') << name << endl;

//   float f = 100.3634;

//   cout <<right <<setw(10) << setfill('0')<< setprecision(6) << f << endl;

   int i = 8;

   fun(&i) = 10;

   cout<< i <<endl;

   *fun1(&i) = 1000;

   cout<< i <<endl;


   Base obj1(99);
   
   obj1.get() = 98;
 
   obj1.print();

   *obj1.getP() = 9908;
 
   obj1.print();

   *somefun() = 10;
   
   somefun1() = 10;


}
