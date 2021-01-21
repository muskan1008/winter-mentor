#include <iostream>

using namespace std;
//fibonaaci series 
int main()
{int i=0;
int j=1;
cout<<i<<j;
for (int k=0;k<11;k++)
{int d=i+j;
cout<<d;
i=j;
j=d;
}
   return 0;
}