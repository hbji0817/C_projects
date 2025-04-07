#include <stdio.h>

int main()
{
	int h1, h2, m1, m2,t;
	scanf("%d %d", &h1, &m1);
	scanf("%d", &t);
	if(t>=60)
	{
		h2 = t/60;
		m2 = t%60;
	}
	else
	{
		h2 = 0;
		m2 = t;
	}
	h1 += h2;
	m1 += m2;
	if(m1 >= 60)
	{
		h1++;
		m1 = m1 % 60;
	}
	if(h1 >= 24)
		h1 = h1 % 24;
	printf("%d %d", h1, m1);
	
	return 0;
}

/*
#include <stdio.h>

int main()
{
    int h,m,t;
    scanf("%d %d %d",&h,&m,&t);
    while (t >= 60)
    {
        t -= 60;
        if(h==23)
        	h=0;
        else
        	h=h+1;
    }
    if(60-m <= t)
    {
        h=(h==23 ? 0 : h+1);
        printf("%d %d",h,m+t-60);
    }
    else
    {
        printf("%d %d",h,m+t);
    }
    return 0;
}

*/