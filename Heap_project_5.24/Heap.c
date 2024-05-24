#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"




 void Swap(int*a,int*b )
{



}

void AdjustDown(HeapDataType*a,int n,int root)
{
	int parent = root;
	int children = parent * 2 + 1;
	while (children < n)
	{
		if (a[children + 1] < a[children])
		{
			children++;

		}
		if (a[children] < a[parent])
		{
			Swap(&a[children], &a[parent]);
			parent = children;
			children = parent * 2 + 1;
		}
		else
		{
			break;
		}

	}

}

void HeapInit(struct Heap* php, HeapDataType* a, int n)
{
	php->_a = (HeapDataType*)malloc(sizeof(HeapDataType) * n);
	memcpy(php->_a,a, sizeof(HeapDataType)* n);
	php->_size = n;
	php->_capacity = n;
	//¹¹½¨¶Ñ

}

