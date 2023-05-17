#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char **argv)
{
  int i,n,*a;
  n = argc-1;
    a = new int[n];
  for (i=0;i<n;i++)
    {
      a[i] = atoi(*(argv+i+1));
      cout<<"a["<<i<<"]= "<< a[i] << endl;
    }
  int *pa = a;
  int *pb = a+n-1;
  int temp;

  for(i=0;i<n/2;i++)
    {
      temp = *pa;
      *pa = *pb;
      *pb = temp;
      pa++;pb--;
    }
  pa-=(n/2);
  for(i=0;i<n;i++)
    {
      cout << *(pa+i) << endl;
    }
  delete []a;  
}