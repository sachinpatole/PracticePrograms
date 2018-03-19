#include <iostream>
#include <assert.h>
#include <string>
#include <map>
#include <limits>
#include <algorithm>

template<class K, class V>
class interval_map {
    template< K,  V>
    friend void IntervalMapTest(interval_map<K, V>);

private:
    std::map<K,V> m_map;

public:
    // constructor associates whole range of K with val by inserting (K_min, val)
    // into the map
    interval_map( V const& val) {
        m_map.insert(m_map.begin(),std::make_pair(std::numeric_limits<K>::lowest(),val));
    }

    // Assign value val to interval [keyBegin, keyEnd). 
    // Overwrite previous values in this interval. 
    // Do not change values outside this interval.
    // Conforming to the C++ Standard Library conventions, the interval 
    // includes keyBegin, but excludes keyEnd.
    // If !( keyBegin < keyEnd ), this designates an empty interval, 
    // and assign must do nothing.
    void assign( K const& keyBegin, K const& keyEnd, V const& val ) {
        K keyBg = keyBegin;

       while(keyBg != keyEnd) {
           m_map.insert(m_map.begin(), std::make_pair(keyBg, val));       
           keyBg++;
        }

        std::cout<< m_map.size() <<std::endl ;

//        for(std::map<class K, class V>::iterator itr = m_map.begin() ; itr !=  m_map.end() ; itr++ ) 
         for (const auto& kv : m_map)
         {
            std::cout << kv.first << " has value " << kv.second << std::endl;

         }

     }

    // look-up of the value associated with key
    V const& operator[]( K const& key ) const {
        return ( --m_map.upper_bound(key) )->second;
    }
};

template<class K, class V>
void IntervalMapTest(interval_map<K,V> obj) {
   std::cout<< obj.m_map.size() << std::endl;

}


// Many solutions we receive are incorrect. Consider using a randomized test
// to discover the cases that your implementation does not handle correctly.
// We recommend to implement a function IntervalMapTest() here that tests the
// functionality of the interval_map, for example using a map of unsigned int
// intervals to char.

int main() {
  interval_map<int, char> obj('B');

   obj.assign(5, 10, 'A');
  //IntervalMapTest(obj);

}
