#include <iostream>
#include <future>

using namespace std;

void asyncFun()
{
   cout << "Async Function Called" << endl;
}


int main()

{

   future<void> fun = async(launch::async, asyncFun);

   fun.get();

   return 0;
}
