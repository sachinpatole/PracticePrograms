#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
   list<int> lst = {1,2,3,4,5,6};

/*   lst.push_back(34);   
   lst.push_back(78);   
   lst.push_back(38);   
   lst.push_back(12);   

   lst.push_front(12);   
   lst.push_front(32);   
   lst.push_front(62);   
   lst.push_front(99);   
*/
   list<int>::iterator itr = find(lst.begin(), lst.end(), 4);

   cout << lst.size() << *itr << endl;

}
