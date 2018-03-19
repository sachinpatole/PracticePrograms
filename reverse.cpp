

#include <iostream>

using namespace std;

void reverse(char *arr, int st, int end)  {

   while(st <= end)
   {
      char tmp = arr[st];
      arr[st] =  arr[end];
      arr[end] = tmp;
   
      ++st;
      --end;

   }

}


void recureverse(char *arr, int st, int end)  {

      if(st >= end)  
         return;

      char tmp = arr[st];
      arr[st] =  arr[end];
      arr[end] = tmp;

      recureverse(arr, (st+1), (end-1));
   
}




main()
{

   char array[] = "elotap nihcas";

   recureverse(array, 0, sizeof(array)-2);

   cout << array << endl;

   return 0;
}
