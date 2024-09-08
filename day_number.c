#include<stdio.h>
#include<conio.h>
void main()
{
int day;
printf( "enter day number\n");
scanf("%d", &day);

if (day==1)
{
    printf("day is monday\n");

}

else if (day==2)
{
    printf("day is tuesday");
}

else if (day==3)
{
    printf("day is wednesday");
}
else if (day==4)
{
    printf("day is thrusday");
}
else if (day==5)
{
    printf("day is friday");
}
else if (day==6)
{
    printf("day is saturday");
}
else if (day==7)
{
    printf("day is sunday");
}
else 
{
    printf("invalid day number");
}
getch();
}




