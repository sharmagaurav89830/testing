#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],n,lb,ub,mid,i,data,found=0;
cout<<"\nEnter how many Nos.=";
cin>>n;
cout<<"\nEnter Nos. in sorted order\n";
    for(i=0;i<n;i++)
    cin>>a[i];
cout<<"\nEnter the data for searching";
cin>>data;
lb=0;
ub=n-1;
while((lb<=ub)&&(found==0))
{
mid=(lb+ub/2);
if(data==a[mid])
{
cout<<"\nData found at location"<<mid+1;
found=1;
}
else if(data<a[mid])
    ub=mid-1;
else
lb=mid+1;
}
if(found==0)
cout<<"\nData is not found";
getch();
}