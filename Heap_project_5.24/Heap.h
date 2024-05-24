#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int HeapDataType;
typedef struct Heap
{
	HeapDataType* _a;
	int _size;
	int _capacity;

}Heap;

void HeapInit(struct Heap* php, HeapDataType* a, int n);
void HeapDestory(struct Heap* php);
void HeapPush(struct Heap* php,HeapDataType x);
void HeapPop(struct Heap* php);
HeapDataType HeapTop(Heap* php);