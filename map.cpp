#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main () 
{
   pair<int, int >  p = make_pair(10, 20);  
   map <int, int > mp(p);

      
   for (auto itr = mp.begin(); itr != mp.end(); itr++) 
   {
      cout<< *itr << endl; 

   }



}
