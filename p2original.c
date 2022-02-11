#include<stdio.h>
#include<math.h>
int input_side()
{
 int a;
 printf ("enter the value of a");
 scanf ("%d",&a);
 return a;
}

int check_scalene(int a , int b , int c)
{
  if (a!=b && b!=c)
  return 0;
  else
  return 1;
}

void output(int a , int b , int c ,int isscalene)
{
 if (isscalene ==0)
 printf ("the triangle with sides %d, %d & %d is 
 scalene triangle\n" ,a,b,c);
 else 
 printf ("the triangle with sides %d %d %d is not 
 scalene\n",a,b,c);
}
int main()
{
  int x , y, z,k;
  x= input_side();
  y= input_side();
  z= input_side();
  k=check_scalene(x,y,z);
  output(x,y,z,k);
  return 0;
}