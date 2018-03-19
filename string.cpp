#include <iostream>
#include <string>

using namespace std;

int main() 
{
   string s1 = "hello";    // hello

   string s2(s1);          // hello

   string s3(s1, 3);       // lo

   string s4(s1, 1, 10);    // ello

   string s5("hello", 3);  // hel

   string s6({'s','a','c','h','i','n'});  // sachin

   string s7(5, 'A');      // AAAAA


   cout << s1 << '\t' << s2 << '\t' << s3 << '\t' << s4 << '\t' << s5 << '\t' << s6 << '\t' << s7 << endl;

   string s("sachinpatole");

   cout << s.size() << endl;

   cout << s.length() << endl;

   cout << s.capacity() << endl;

   s.reserve(100);
   cout << s.capacity() << endl;

   s.reserve(2);
   cout << s.capacity() << endl;

    s.resize(20);
   cout << s.capacity() << endl;

   s.resize(15, 'x');
   cout << s << endl;


   string ss("sachinpatole");

   cout << ss.at(3) << endl;

   ss.at(0) = 'S';

   cout << ss << endl;

   ss[6] = 'P';

   cout << ss << endl;
   
   cout << ss.front() << endl;

   cout << ss.back() << endl;

   ss.push_back('3');

   cout << ss << endl;

   ss.pop_back();

   cout << ss << endl;




   string sss("sachinpatole");

   string ssss;
   ssss.assign(sss);
   cout << ssss << endl;

   ssss.assign(sss, 0, 6);
   cout << ssss << endl;

    ssss.assign("Sachin");
   cout << ssss << endl;

    ssss.assign("Sachin", 3);
   cout << ssss << endl;

    ssss.assign(10, 'x');
   cout << ssss << endl;

    ssss.assign({'s','a','c','h','i','n'});
   cout << ssss << endl;

    ssss.append({'p','a','t','o','l','e'});
   cout << ssss << endl;

   ssss.insert(6, "Bhagwat", 7);

   cout << ssss << endl;

   cout << ssss.substr(0,6) << endl;

   cout << ssss.data()<< endl;

   cout << ssss.c_str()<< endl;

   return 0;


}
