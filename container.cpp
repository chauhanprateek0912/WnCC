#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   double l,b,h,d,count=0,v,q;
   cin>>l>>b>>h>>d;
   v=l*b*h;
   while(v>0)
   {
      count++;
      q=0.98*3.1419*(d/200)*(d/200)*sqrt(2*9.8*h);
      v-=q;
      h=v/(l*b);

      }
   cout<<count;
   }
