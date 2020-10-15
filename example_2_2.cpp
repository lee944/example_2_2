// example_2_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<stdio.h>
#include<float.h>

#include<time.h>
#include<stdlib.h>


enum { ARR_LEN = 100 };
int main()
{
//例2-2
	puts("\nCharacteristics of the type float\n"); 
	printf("Storage size:%d bytes\n"
		"Smallest postive value:%E\n"
		"Greatest postive value:%E\n"
		"Precision:%d decimal digits\n",
		sizeof(float), FLT_MIN, FLT_MAX, FLT_DIG);
	puts("\nAn example of float precision:\n");
	double d_var = 12345.6;
	float f_var = (float)d_var;
	printf("The floating-point number""%18.10f\n", d_var);
	printf("has been stored in a variable of type float as the value""%18.10f\n", f_var);
	printf("The rounding error is ""%18.10f\n", d_var - f_var);
	return 0;

//例2-3
	/*int i, * pNumbers =(int*)malloc(ARR_LEN * sizeof(int));
	if (pNumbers == NULL)
	{
		fprintf(stderr, "Insufficient memory.\n");
		exit(1);
	} 
	srand((unsigned)time(NULL));
	for (i = 0; i < ARR_LEN; i++)
		pNumbers[i] = rand() % 10000;
	printf("\n%d random numbers between 0 and 0000:\n", ARR_LEN);
	for (i = 0; i < ARR_LEN; i++)
	{
		printf("%6d", pNumbers[i]);
		if (i % 10 == 9)putchar('\n');
	}
	free(pNumbers);
	return 0;*/

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
