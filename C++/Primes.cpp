#include<iostream.h>
#include<conio.h>
#include<math.h>

bool isprime(unsigned long long int x)
{
 int c=0;
 unsigned long long int i;
 for(i=1;i<=sqrt(x);i++)
 {
  if(x%i==0)
  {
   if(i*i==x)
    c++;
   else
    c=c+2;
  }
 }
 if(c==2)
  return 1;
 else
  return 0;
}

int main()
{
 clrscr();
 unsigned long long int i,n;
 int c=0;
 cout <<"Enter a no. : ";
 cin >>n;
 cout <<"\n";
 if(c==2)
 {
  cout <<"2";
  c=1;
 }
 if(c>2)
 {
  for(i=3;i<=n;i=i+2)
  {
   if(isprime(i)==1)
   {
    cout <<""<<i<<" ";
    c++;
   }
  }
 }
 cout <<"\n\nCount= "<<c<<endl;
 getch();
 return 0;
}
