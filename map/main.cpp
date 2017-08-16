#include <iostream>
#include <map>

using namespace std;

int main(){
  map<int, string> mymap;
  map<int, string>::iterator map_iter;
  mymap[0] = "verve";
  mymap[1] = "suede";
  mymap[2] = "suede";
  for(map_iter=mymap.begin(); map_iter != mymap.end(); ++map_iter)
    cout << (*map_iter).first << "(" << (*map_iter).second << ")" << endl; 

}
