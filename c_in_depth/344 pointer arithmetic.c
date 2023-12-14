/*P9.4 Pointer arithmetic*/
#include<stdio.h>
int main(void)
{
	int a=5,*pi=&a;
	char b='x',*pc=&b;
	float c=5.5,*pf=&c;
	printf("Value of pi=Address of a=%p\n",pi);
	printf("Value of pc=Address of b=%p\n",pc);
	printf("Value of pf=Address of c=%p\n",pf);
	pi++;       //add of a+1*4
	pc++;       //add of a+1*1
	pf++;       ////add of a+1*8
	printf("Now value of pi=%p\n",pi);
	printf("Now value of pc=%p\n",pc);
	printf("Now value of pf=%p\n",pf);
	return 0;
}
