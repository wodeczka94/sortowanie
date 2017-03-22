#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std ;

int nazwisko()
{
multiset<string> s;
ifstream in("nazwiska.txt");
ofstream out("nazwiska_leksyko.txt");
copy(istream_iterator<string>(in),istream_iterator<string>(),inserter(s,s.begin()));
copy(s.begin(),s.end(),ostream_iterator<string>(out,"\n"));
}

int main()
{
nazwisko();
return 0;
}
