#include<stdio.h>
#include<iostream>
int main()
{
int i,j,n;
char a[80];
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
gets(a);
for(j=0;a[j]!='\0';j++)
{
if((a[j]<='Y'&&a[j]>='A')||(a[j]<='y'&&a[j]>='a'))
a[j]=a[j]+1;
else if(a[j]=='z')
a[j]='a';
else  if(a[j]=='Z')
a[j]='A';
else ;
}
puts(a);
}
return 0;
}