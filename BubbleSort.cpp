/*Honor Pledge: I pledge that I have neither given
nor received any help on this assignment*/

#include "BubbleSort.h"

BubbleSort::BubbleSort()
{

}

BubbleSort::~BubbleSort()
{

}

void BubbleSort::sort(int list[])
{
	int temp, check;
	int x;

	//Loop for sorting
	while(1)
	{
		//Sets to show that a swap has not yet occurred 
		check=0;

		for(x=0;x<=48;x++)
		{

			//This checks numbers in pairs iterating through the loop
			//If the numbers are out of order they are swapped
			if(list[x]>list[x+1])
			{
				temp = list[x+1];
				list[x+1] = list[x];
				list[x] = temp;
				

				//Sets to show that a swap has indeed occurred
				check = 1;
			}
		}

		//If no swap has occurred, then the list must be sorted
		if(check!=1)
		{
			break;
		}
	}
}
