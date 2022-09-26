#include <stdio.h>;
#include <locale.h>
#include <malloc.h>


//void fun()
//{
//setlocale(LC_ALL, "Rus");
//	int x = 0;
//	int* p = &x;
//	L:
//	printf("Редактирование элемента:\n");
//	scanf_s("%d", p);
//	printf("x = %d\n", *p);
//	printf("\n");
//	goto L;
//}
//
//void fun_1()
//{
//	setlocale(LC_ALL, "Rus");
//	int* a;
//	int i;
//	int n = 1000000;
//	a = (int*)malloc(n * sizeof(int));
//
//	for (i = 0; i < n; i++)
//	{
//		*(a + i) = i;
//		printf("%d ", *(a + i));
//	}
//
//}
//
//void fun_2(int* a, int n)
//{
//	setlocale(LC_ALL, "Rus");
//	
//	for (int i = 0; i < n; i++)
//	{
//		*(a + i) = i;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", *(a + i));
//	}
//}

//void fun_3(int* a3, int n3)
//{
//	setlocale(LC_ALL, "Rus");
//	int num = 1;
//
//	for (int i = 0; i <= n3; i++)
//	{
//		for (int j = 0; j < num; j++)
//		{
//			*a3 = i;
//			if (i <= n3) 
//			{
//				printf("%d ", *a3);
//			}
//            i++;
//            a3++;	
//		}
//		num++;
//		printf("\n");
//		i--;
//	}
//
//}


	int summ(int x, int y)
	{
		return x + y;
	}

	int razn(int x, int y)
	{
		return x - y;
	}

	int umn(int x, int y)
	{
		return x * y;
	}

	int del(int x, int y)
	{
		return x / y;
	}


int main()
{
	setlocale(LC_ALL, "Rus");


	/*printf("Введите количество элементов: \n");
	int n3;
	scanf_s("%d", &n3);
	int* a3 = calloc(n3, sizeof(int));*/


	int a = 40;
	int b = 8;
	int result;
	int (*operation)(int a, int b);

	operation = summ;
	result = operation(a, b);
	printf("Результат суммы = %d \n", result);

	operation = razn;
	result = operation(a, b);
	printf("Результат разности = %d \n", result);

	operation = umn;
	result = operation(a, b);
	printf("Результат умножения = %d \n", result);

	operation = del;
	result = operation(a, b);
	printf("Результат деления = %d \n", result);


	/*int n;
	scanf_s("%d", &n);
	int* a = calloc(n, sizeof(int));*/


	/*fun();
	fun_1();*/
	/*fun_2(a, n);*/
	/*fun_3(a3, n3);*/
}