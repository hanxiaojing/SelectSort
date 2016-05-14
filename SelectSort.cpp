//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//#include<assert.h>
//
//void Print(int* a,int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << a[i] << "  ";
//	}
//	cout << endl;
//}
//
//
////Sequence in ascending order 
//void SelectSort(int* a, int size)
//{
//	assert(a);
//	
//	for (int i = 0; i < size; i++)
//	{
//		int minnum = i;
//		for (int j = i+1; j < size;j++)
//		{
//			if (a[minnum] > a[j])
//			{
//				minnum = j;
//			}		
//		}
//		if (i != minnum)
//		{
//			swap(a[i], a[minnum]);
//		}
//		
//	}
//}
//
//
//
//
//void TestSelectSort()
//{
//	int a[10] = {9,8,7,6,5,4,3,2,1,0 };
//	SelectSort(a, sizeof(a) / sizeof(a[0]));
//	Print(a,sizeof(a)/sizeof(a[0]));
//}
//
//
//int main()
//{
//	TestSelectSort();
//	system("pause");
//	return 0;
//}
//
