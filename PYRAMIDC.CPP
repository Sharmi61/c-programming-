#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r;
clrscr();
for(i=1;i<=3;i++)
{for(j=3-i;j>0;j--)
{
printf("\t");
}for(r=1;r<=i;r++){
printf("*\t\t");
}
printf("\n");
}
getch(); }