#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"

int main()
{
	int n,x;
	
	printf("Good day\n\n");
	printf("available task:\n");
	printf("1 - Linear algorithms\n");
	printf("2 - Cyclic algorithms\n");
	printf("3 - Character Stream Processing\n");
	printf("4 - Processing character strings\n");
	printf("5 - One-dimensional arrays\n");
	printf("6 - Two-dimensional arrays \n");
	printf("7 - Bitwise processing of integers\n\n");
	
	printf("Choose number of task\n");
	scanf("%d", &n);
	printf("Choose main(1) or additional(2)\n");
	scanf("%d", &x);
	if(x!=1 && x!=2)
	{
		printf("alert");
	}
	switch (n) {
	case 1:
		if (x == 1)
			lr1();
		else
			lr1d();
		break;
	case 2:
		if (x == 1)
			lr2();
		else
			lr2d();
		break;
	case 3:
		if (x == 1)
			lr3();
		else
			lr3d();
		break;
	case 4:
		if (x == 1)
			lr4();
		else
			lr4d();
		break;
	case 5:
		if (x == 1)
			lr5();
		else
			lr5d();
		break;
	case 6:
		if (x == 1)
			lr6();
		else
			lr6d();
		break;
	case 7:
		if (x == 1)
			lr7();
		else
			lr7d();
		break;
	default:
		printf("alert");
		
	}
	//getchar();
	//if(getchar()== '!'){
	  //  return 0;
	//}
}

