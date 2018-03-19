#include <iostream>
#include <thread>
#include <vector>
#include <initializer_list>
#include <string>

using namespace std;

void threadFn(int &i) 
{
   for(; ; i++) 
   {
      cout<< this_thread::get_id()<<"::"<<i<<" ";
   }
   cout<<endl;
}
template <typename T>
void templateFun() {
   cout << typeid(T).name() <<endl;
}

void threadinitList(initializer_list<int> il) 
{
   cout<< "Initializer List size = "<<il.size() << endl;
   
}

void threadvector(vector<int> il) 
{
   cout<< "Vectro List size = "<<il.size() << endl;
   
}


int main()
{
   int i = 0;
   thread t1{threadFn, ref(i)};

   thread t2([](int &i) { 
         for(; i < 10; i+=2) 
         {
            cout<< this_thread::get_id()<<"--"<<i<<" ";
         }
         cout<<endl;
        }, ref(i));


   thread t3(templateFun<int>);
   thread t4(templateFun<float>);
   t3.join();

   t4.join();


   t2.join();

   t1.detach();

   initializer_list<int> il{1,2,3,4,5,6,7,8,9};
   
   thread t6{threadinitList, il};

   t6.join();

   vector<int> vec{1,2,3,4,5,6};
   
   thread t7{threadvector, vec};

   t7.join();

}
