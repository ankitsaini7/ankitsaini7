#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,big;

printf("enter value\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
  if (a>c)
    {big=a;} 
 else 
    {big=c;}
  }
 else if (b>c)
 {big =b;}
 else{big=c;}

 printf("greatest number is%d\n",big);
 getch();


}




