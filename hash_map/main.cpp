#include <iostream>
#include <hash_map>
#include <string.h>

using namespace __gnu_cxx;
using namespace std;

/*
// This is so called functor or function object
// try to use struct as functor
struct eqstr
{
  bool operator()(const char* s1, const char* s2) const
  {
    return strcmp(s1, s2) == 0;
  }
};
*/

// This is so called functor or function object
// try to use class as functor
class eqstr
{
  public:
    bool operator()(const char* s1, const char* s2) const
    {
      return strcmp(s1, s2) == 0;
    }
};

int main(){
  //hash_map<const char*, int, hash<const char*>, eqstr> mymap;
  hash_map<const char*, int> mymap;
  mymap["verve"] = 0;
  mymap["blur"] = 2;
  mymap["suede"] = 1;
  //hash_map<const char*, int, hash<const char*>, eqstr>::iterator iter;
  hash_map<const char*, int>::iterator iter;
  for (iter=mymap.begin(); iter != mymap.end(); ++iter)
    cout << (*iter).first << " (" << (*iter).second << ")" << endl;

}
