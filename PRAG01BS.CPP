#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],n,i,j,t;
cout<<"Enter how many nos.=\n";
cin>>n;
cout<<"\nEnter NOs. in sorted order";
for(i=0;i<n;i++)
{
cout<<" ";
cin>>a[i];
}
for(i=0;i<(n-1);i++)
{
 for(j=i+1;j<n;j++)
 {
 if(a[i]>a[j])
 {
 t=a[i];
 a[i]=a[j];
 a[j]=t;
 }
 }
}
cout<<"\nNos. in sorted order";
  for(i=0;i<n;i++)
  cout<<"\n"<<a[i];
getch();
}