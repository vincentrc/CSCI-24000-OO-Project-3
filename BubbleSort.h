/*Honor Pledge: I pledge that I have neither given
nor received any help on this assignment*/

#include "Sort.h"

#ifndef BubbleSort_H
#define BubbleSort_H

class BubbleSort : public Sort
{
	public:

		BubbleSort();   //Constructor
		~BubbleSort();  //Destructor 

		virtual void sort(int list[50]);
		

		

};

#endif