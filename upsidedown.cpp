#include<iostream>
using namespace std;
int main()
{
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
