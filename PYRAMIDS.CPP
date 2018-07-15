#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r,m=2;
clrscr();
for(i=1;i<=3;i++)
{for(j=3-i;j>0;j--)
{
printf("\t");
}
if(i==1){
printf("*");
}else{for(r=1;r<i+m;r++){
printf("*\t");
} m++;  }
printf("\n");
}
getch(); }