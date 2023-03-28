#include<iostream>

using namespace std;

int main( )
{
   double a[10] = {1,2,3,4,5,6,7,8,9,10};
   for (double *cp = &a[0] ; cp<=&a[9] ; cp+=2) {
      cout << cp << " : " << (*cp) << endl;
   }
   return 0;
}

//kich thuoc kieu int: 4
//kich thuoc kieu double: 8
//khich thuoc buoc nhay la 16
