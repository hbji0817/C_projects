#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	if(t>7)
		if(t>12)
			printf("강알칼리성");
		else
			printf("알칼리성");
	else if(t<7)
		if(t<=2)
			printf("강산성");
		else
			printf("산성");
	else 
		printf("중성");
	return 0;
}
	
	