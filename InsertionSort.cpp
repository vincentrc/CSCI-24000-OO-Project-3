/*Honor Pledge: I pledge that I have neither given
nor received any help on this assignment*/

#include "InsertionSort.h"

InsertionSort::InsertionSort()
{

}

InsertionSort::~InsertionSort()
{

}

//Sorting algorithm for insertion sort
void InsertionSort::sort(int list[])
{
	int temp, temp2;
	int x, y, z;

	//Loop for insertion sort logic
	for(x=0;x<=49;x++)
	{
		//Saves the value of the element to be sorted
		temp = list[x];

		//Saves the element number before it
		y = x-1;

		//This loop will shift all of the elemtnts to the right until the number is placed in the correct position
		while(temp < list[y])
		{
			list[y+1]=list[y];
			y--;
		}

		//Puts the number in the correct position
		list[y+1]=temp;


	}
	
}