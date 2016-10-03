#include<iostream>
#include<cstdio>
using namespace std;


int mc91(int n)
 {
     if (n > 100) {
         return n - 10;
     }
      else {
         return mc91(mc91(n+11));
     }
 }

int main()
 {
     int n;
     while(cin>>n)
     {
         if (n==0) break;
         printf("f91(%d)=%d\n",n,mc91(n));


     }
     return 0;
 }
