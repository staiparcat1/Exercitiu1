#include "NumberList.h"
#include <iostream>
void NumberList::Init()
{
	count = 3;
	numbers[0] = 0;
	numbers[1] = 4;
	numbers[2] = 5;
}
bool NumberList::Add(int x)
{
	numbers[count] = x;
	count++;
	return 1;
}
void NumberList::Sort()
{
	int i, j, aux;
	for (i = 0; i < count; i++)
		for (j = i + 1; j < count - 1; j++)
			if (numbers[i] > numbers[j]) {
			   	aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}
void NumberList::Print()
{
	for (int i = 0; i < count; i++) std::cout << numbers[i] << " ";
}