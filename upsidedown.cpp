#include<iostream>
using namespace std;
int main()
{

 //let me add these comments to the master_copy of the remote origin..
	int a=30;
	int b = 40;
	cout<<a+b;

	// add these changes from master to local_master..

 //using these . variables just to pull and check changes are reflected.
int rows,i,j;
cin>>rows;
for(i=rows;i>=1;i--)
{
 j=i;
    while(j)
    {
      cout<<j;
       j--;
    } 
cout<<"\n";
}
return 0;
}

