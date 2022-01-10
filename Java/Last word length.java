/* Given a string s consisting of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
If the last word does not exist, return 0.
Note: A word is defined as a character sequence consists of non-space characters only. */


import java.util.*;

class Main
{
 public static void main (String args[])
 {
  Scanner sc=new Scanner(System.in);
  String str=sc.nextLine();
  int i,len=str.length(),c=0;
  for(i=0;i<len;i++)
  {
   c++;
   if(str.charAt(i)==' ')
    c=0;
  }
  System.out.print(c);
  sc.close();
 }
}