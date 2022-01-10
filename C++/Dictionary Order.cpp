#include<iostream>
using namespace std;

main()
{
 string t;
 int i,j,n;
 cin >>n;
 string str[n];
 for(i=0;i<n;i++)
  cin >>str[i];
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(str[i]>str[j])
   {
    t=str[i];
    str[i]=str[j];
    str[j]=t;
   }
  }
 }
 cout <<"Names Sorted in Alphabetical Order : \n\n";
 for(i=0;i<n;i++)
  cout <<str[i]<<"\n";
 return 0;
}