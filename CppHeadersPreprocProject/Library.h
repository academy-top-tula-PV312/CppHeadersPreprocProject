#include <iostream>
#pragma once

//struct Node
//{
//	int value;
//	Node* next;
//};

template <typename T>
T* ArrayCreate(int size);

void ArrayInit(int* array, int size);

void ArrayPrint(int* array, int size);


#include "Library.cpp"

