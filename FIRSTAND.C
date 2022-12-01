#include<stdio.h>
#include<conio.h>
void main()
{
    long long num, rem, prod = 1;
    clrscr();
    printf("Enter a number: ");
    scanf("%lld", &num);
    printf("All Number In Reverse Order");
    while(num != 0)
    {
	rem = num % 10;
	prod = rem;
	num /=  10;
	printf(" %lld",prod);
    }

getch();
}


