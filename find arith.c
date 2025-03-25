#include <stdio.h>
int main()
{
	char a;
	printf("enter a symbol");
	scanf("%c",&a);
	if (a=='+'|| a=='*'|| a=='-'|| a=='/'|| a=='%')
	{
		printf("% c i arith",a);
	}
	else{
		printf("%c is special char",a);
	}
	return 0;
}