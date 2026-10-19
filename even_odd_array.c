#include <stdio.h>
int main()
{
int a[10],i,even=0,odd=0;
printf("Enter 10 integers: ");
{
for(i=0; i<=10; i++)
{
scanf("%d", &i);
}
if(a[i] % 2 == 0)
{
printf("even++");
}
else
{
printf("odd++");
}
printf("Total number of even integers = %d\n");
printf("Total number of odd integers = %d\n");
printf("\n");
return 0;
 }
