#include <iostream>
#include <string>

using namespace std;

bool uniqueStrCpp(string str) 
{
   bool status[256] = {false};
   for(int i = 0; i < str.size(); i++) 
   {
      int ch = str.at(i);
      if(status[ch] == true)
         return false;
      status[ch] = true;
   }
   return true;
}



void RemoveDuplicate(string &str) 
{
   bool status[256] = {false};
   for(int i = 0; i < str.size(); i++) 
   {
      int ch = str.at(i);
      if(status[ch] == true) {
         //return false;
         if((i+1) != str.size) 
         {
            str.insert(i, str.at(i+1));
         }
         else 
         {
            str.insert(i, NULL);  
         }
      }
      status[ch] = true;
   }
   //return true;
}


int main()
{
   string mystring("Sachin");

   cout<< uniqueStrCpp(mystring) <<endl;

   RemoveDuplicate(mystring);

   cout<< mystring;

   return 0;
}
