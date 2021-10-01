#include<iostream.h>
#include<conio.h>

 void insert(int a[], int size, int n)
  {
    int i, j;
    for(i=0; i<size; i++)
     { if(a[i]>n)
	{
	  for(j=size; j>=i; j--)
	    a[j]=a[j-1];
	  a[i]=n;
	  return;
	}
     }
    a[i]=n;
  }

 void main()
  {
    clrscr();
    int a[10], num, i;
    cout<<"Enter 5 Numbers in ascending order:\n";
    for(i=0; i<5; i++)
      cin>>a[i];
    cout<<"Enter the new element to be inserted: ";
    cin>>num;
    insert(a, 5, num);
    cout<<"New Arrary: ";
    for(i=0; i<6; i++)
     cout<<a[i]<<" ";
    getch();
  }