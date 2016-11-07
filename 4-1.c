#include<stdio.h>
#include<float.h> // 该文件定义了表示浮点数的符号

int main()
{
	printf("The size of the smallest positive non-zero value of type float is %.3e\n",FLT_MIN);
	printf("The size of the largest value of type float is %.3e\n",FLT_MAX);

	return 0;
}
