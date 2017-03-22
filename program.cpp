#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <set>
#include <iterator>
#include <stdio.h>
#include <string.h>
 
using namespace std ;

int nazwisko()
{
multiset<string> s;
ifstream in("nazwiska.txt");
ofstream out("nazwiska_leksyko.txt");
copy(istream_iterator<string>(in),istream_iterator<string>(),inserter(s,s.begin()));
copy(s.begin(),s.end(),ostream_iterator<string>(out,"\n"));
}
void sortowanie( )
{
  FILE *plik;
  char strtmp[ 501 ];
  char nazwisko[ 501 ];
  int res;
  int index;
  char Nazwiska[100][501];
  int i,j;

  plik = fopen("liczby.txt", "rt");
  if(plik==NULL)
  {
    printf("B31d odczytu pliku\n");
    return;
  }
  index=0;
  while((!feof(plik))&&(index<100))
  {
   
    res=fscanf(plik,"%s",nazwisko);
    if(res!=1)
    {
      printf("B31d odczytu");
      break;
    }
    strcpy(Nazwiska[index],nazwisko);
    index++;
  }
  fclose( plik);
  for(i=0;i<index;i++)
  {
    for(j=0;j<index-i-1;++j)
    {
      if(strcmp(Nazwiska[j],Nazwiska[j-1])>0)
      {
    
        strcpy(strtmp,Nazwiska[j]);
        strcpy(Nazwiska[j],Nazwiska[j-1]);
        strcpy(Nazwiska[j-1],strtmp);
      }
    }
  }

  plik = fopen("liczby_mal.txt", "w+t");
  if(plik==NULL)
  {
    printf("B31d otwarcia pliku\n");
    return ;
  }
  for(i=0;i<index;i++)
  {
    fprintf(plik,"%s ",Nazwiska[i]);
    fprintf(plik,"\n");
  }
  fclose( plik );

  return;
}
int main()
{
nazwisko();
sortowanie();
return 0;
}
