static int LeapYear(int year)
{
 if(year%4==0)
 {
  if(year%100==0)
  {
   if(year%400!=0)
    return 0;
   else
    return 1;
  }
  else
   return 1;
 }
 else
  return 0;
}