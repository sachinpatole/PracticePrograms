// Construtor Deligation 

#include <iostream>

using namespace std;

class A {
   int _a, _b;

   public:
      A(): A(0) { cout <<"Zero Argument\n"; }
      A(int a): A(a,0) { cout <<"One Argument\n"; }

      A(int a , int b ) : _a(a), _b(b) 
      { 
         cout <<"Common inializtion for each constirtor\n";

         cout <<"Two Argument\n"; 

      }

};


int main()
{

   A obj(1);

}
