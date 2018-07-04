#include<iostream>
using namespace std;
int main()
{
 
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

