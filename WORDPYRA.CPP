#include<stdio.h>
#include<conio.h>
void main()
{int i,j,r=0,count=0,n;
clrscr();
printf("enter length\n");
scanf("%d",&n);
char a[19];
scanf("%s",&a);
for(i=1;i<sizeof(a);i++){
for(j=1;j<=i;j++){
if(r!=sizeof(a)){
printf("%c\t",a[r]);
r++;
}else{
count=1;
printf("*\t");
}}printf("\n");
if(count==1){break;}
else if(r==sizeof(a)){break;}else{continue;}
}getch();
}