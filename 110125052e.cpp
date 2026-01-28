#include<stdio.h>

int tinhtong(int a, int b);
int tinhhieu(int a, int b);
int tinhtich(int a, int b);
int tinhthuong(int a,int b);

int main()
{
	int a,b,s,h,t,g;
	float ch;
	
	printf("Nhap vao so nguyen a =");
	scanf("%d", &a);
	printf("Nhap vao so nguyen b =");
	scanf("%d", &b);
	
	s=tinhtong(a,b);
	printf("\ntong %d + %d = %d", a,b,s);

	h=tinhhieu(a,b);
	printf("\nhieu %d - %d = %d", a,b,h);

	t=tinhtich(a,b);
	printf("\ntich %d * %d = %d", a,b,t);
	
	g=tinhthuong(a,b);
	printf("\nthuong %d / %d = %d", a,b,g);

	 return 0;
}

int tinhtong(int a, int b)
{
	return a+b;
}

int tinhhieu(int a, int b)
{
	return a-b;
}

int tinhtich(int a, int b)
{
	return a*b;
}

int tinhthuong(int a, int b)
{
	return(float) a/b;
}
