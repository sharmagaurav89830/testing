#include<iostream>
using namespace std;
int main()
    {
       int j;
       cout<<"ENTER A NO.\n";
       cin>>j;
       int c=j;
       int m=0;
       while(c>0)
       {
           c=c/10;
           m++;
       }
       cout<<"NO OF DIGITS ARE="<<m;
       return 0;
    }