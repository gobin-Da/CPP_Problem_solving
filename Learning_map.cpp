#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    map <string, int> m;
    map <string, int>:: iterator it;
    m["Gobinda"] = 1;
   // m["Gobinda"] = 44;
    m["Bishu"] = 2;
    m.insert(make_pair("Bht", 3));

    it = m.begin();
    
    for(it=m.begin(); it!=m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    // cout << it->first << endl;
}