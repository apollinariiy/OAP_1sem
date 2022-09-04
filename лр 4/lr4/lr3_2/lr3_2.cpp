

#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float x1, x2, y1;
	
	printf("Введите x1 "); scanf_s("%f", &x1);
	printf("Введите x2 "); scanf_s("%f", &x2);
	printf("Введите y1 "); scanf_s("%f", &y1);
	if (x1>x2 && x1 > y1)
		 printf("max(x1,x2,y1) = x1: %f \n",x1);
	 if(x2>y1 && x2>x1) printf("max(x1,x2,y1) = x2: %f \n", x2);
		else printf("max(x1,x2,y1) = y1: %f \n", y1);
}


