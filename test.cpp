#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
//int add(int x,int y)
//{
//
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum =add(a,b);
//	printf("%d", sum);
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while(i<10)
	{
		printf("%d", arr[i]);
		i++;
	}
	
	return 0;
}