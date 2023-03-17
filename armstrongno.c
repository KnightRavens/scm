#include <stdio.h>
#include <math.h>

int main()
{
  int Number, Temp, Reminder, Times =0, Sum = 0;
 
  printf("please Enter number to Check ");
  scanf("%d", &Number);
  
  Temp = Number;
  while (Temp != 0) 
   {
      Times = Times + 1;
      Temp = Temp / 10;
   }
   
  Temp = Number;
  while( Temp > 0)
   {
     Reminder = Temp %10;
     Sum = Sum + pow(Reminder, Times);
     Temp = Temp /10;
   }
 
  printf("Sum of entered number is = %d\n", Sum);

  if ( Number == Sum )
      printf("%d is Armstrong Number", Number);
  else
      printf("%d is not Armstrong Number", Number);
 
  return 0;
}