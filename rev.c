#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char x[100];
int i,j;
clrscr();
gets(x);
strrev(x);
for(i=0;x[i]!='\0';i++)
{
if(a[i+1]==' '||a[i+1]==NULL )
{
for(j=i;x[j]!=' '&&x[j]!=NULL;j--)
{
printf("%c",x[j]);
}
}
printf(" ");
}
getch();

}
