#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <set>
#include <iterator>

<<<<<<< HEAD
using namespace std ;

int nazwisko()
{
multiset<string> s;
ifstream in("nazwiska.txt");
ofstream out("nazwiska_leksyko.txt");
copy(istream_iterator<string>(in),istream_iterator<string>(),inserter(s,s.begin()));
copy(s.begin(),s.end(),ostream_iterator<string>(out,"\n"));
=======
int sortowanie()  
{
	std::ifstream in;
  std::ofstream out;

  int max = 100; //30
  int min = 0;
  int i;
  int licznik;
  int* A = new int[max];

  in.open("liczby.txt");

  
  while(in >> i) {
    
    if(min == max) {
    //	int* B = new int[2];
      int* B = new int[2*max];
      for(licznik = 0;licznik < min;licznik++)
        B[licznik] = A[licznik];
      delete[] A;
      A = B;
      max *= 2;
    }
    A[min] = i;
    min++;
  }
  in.close();
	
  for(int min = 1;min < max;min++) {
    int zmienna = A[min];
    int licznik = min;
    while(licznik > 0) {
      if(A[licznik-1] < zmienna) {
        A[licznik] = A[licznik-1];
        licznik--;
      } else
        break;
    }
    A[licznik] = zmienna;
  }
  
  out.open("liczby_mal.txt");
  for(licznik = 0;licznik < min;licznik++)
    out << A[licznik] << std::endl;
  out.close();
>>>>>>> refs/remotes/origin/Ver.1.0_liczby_mal
}

int main()
{
<<<<<<< HEAD
nazwisko();
return 0;
}
=======
sortowanie();
return 0;
}


>>>>>>> refs/remotes/origin/Ver.1.0_liczby_mal
