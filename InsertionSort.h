/*Honor Pledge: I pledge that I have neither given
nor received any help on this assignment*/

#include "Sort.h"

#ifndef InsertionSort_H
#define InsertionSort_H

class InsertionSort : public Sort
{
	public:

		InsertionSort();
		~InsertionSort();

		virtual void sort(int list[50]);
};

#endif