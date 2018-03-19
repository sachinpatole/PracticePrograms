#include <iostream>
#include <vector>
#include <list>
#include <algorithm>



using namespace std;

int main()
{
   vector<int> vec;

   for(int i = 10; i > 0; i--)
   {  
      vec.push_back(i);
   }

   cout<< "size of vector :" << vec.size() << endl;

   vec.push_back(11);

   cout<< "size of vector :" << vec.size() << endl;

   vector<int>::iterator itr;

   itr = vec.begin();

   for(; itr != vec.end(); itr++) 
   {
      cout<<*itr<<endl;
   }

   sort(vec.begin(), vec.end());

   itr = vec.begin();

   for(; itr != vec.end(); itr++) 
   {
      cout<<*itr<<endl;
   }


   // array to demonstarte iterator and using sort() algorithm

   int arr[] = {20,2,6,1,7,99,4,6,3,8,5,7,6,43};

   int *begin = arr;

   int sizearray = sizeof(arr)/sizeof(arr[0]);

   int *end = &arr[sizearray] ;

   for(int i = 0; i < sizearray; i++) 
   {
      cout<<arr[i]<<endl;
   }

   sort(begin, end);

   for(int i = 0; i < sizearray; i++) 
   {
      cout<<arr[i]<<endl;
   }


}
