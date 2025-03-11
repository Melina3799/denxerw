#include <stdio.h>
#include <stdlib.h>

int main()
{

 

	int x, y, z, w ;
	float u;
	
	x = 5;
	y = 45;
	z= x*x*y;
	
	
	printf("i timi tou z ypologistike kai einai:\n");
	printf("%d\n", z);
	
	w=(z/x)/y;
	
	printf("i timi tou w ypologistike kai einai:\n");
	printf("%d\n", w);
	u=(y+9.3)/x;
	printf("i timi tou u ypologistike kai einai:\n");
	printf("%f\n",u);
	
	printf("telos programmatos\n");
	system("PAUSE");
	return 0;
}
