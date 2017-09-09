/*Honor Pledge: I pledge that I have neither given
nor received any help on this assignment*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Sort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"


int main()
{
	std::string choice1, choice2;
	std::stringstream ss, conv;
	std::string line, snum;
	int numarray[50], x, y;

	//Declaring the sort classes
	Sort *IS, *BS;

	//Resets the screen to look neater
	std::cout << "\033[H\033[2J";

	//Loop for first menu
	while(1)
	{
		std::cout << "1. Load Integers\n2. Exit Program\n\n";
		std::cin >> choice1;

		if(choice1 == "1")
		{
			//Opens a file stream to the text file
			std::ifstream in("data.txt");

			//Only runs if the file is open
			if(in.is_open()==1)
			{

				//Makes sure x starts at 0
				x=0;

				//Logic for taking in the file and putting in the array
				while(getline(in,line))
				{
					//Clears the StringStream and set to empty
					ss.clear();
					ss.str("");

					ss.str(line);

					//Parses the string using the comma as a delimiter, and iterates 
					while(getline(ss,snum,','))
					{
						//Clears the StringStream and set to empty
						conv.clear();
						conv.str("");

						//Uses stringstream to convert from string to int, and assigns to array
						conv << snum;
						conv >> numarray[x];

						x++;
					}
				}

				in.close();
			}

			//Prints if the file isn't open
			else
			{
				//Resets the screen to look neater
				std::cout << "\033[H\033[2J";

				std::cout << "\nUnable to open file.\n\n";
			}


			//Loop for the second menu
			while(1)
			{
				//Resets the screen to look neater
				std::cout << "\033[H\033[2J";

				//Prints unsorted array
				std::cout << "Unsorted Array: ";
				for(y=0;y<=49;y++)
				{
					std::cout << numarray[y] << ", ";
				}

				//Gets rid of last comma
					std::cout << "\b\b ";

				std::cout << "\n\n";


				//Display
				std::cout << "1. Insertion  Sort\n2. Bubble Sort\n3. Exit Program\n\n";

				std::cin >> choice2;


				//Logic for choice 1
				if(choice2=="1")
				{
					//Resets the screen to look neater
					std::cout << "\033[H\033[2J";

					//Creates a new instance of Insertion Sort
					IS = new InsertionSort();

					//Sort method call passing number array
					IS->sort(numarray);


					//Prints sorted array
					std::cout << "Insertion Sort: ";
					for(y=0;y<=49;y++)
					{
						std::cout << numarray[y] << ", ";
					}

					//Gets rid of last comma
					std::cout << "\b\b ";

					std::cout << "\n\n";

					//Deletes instance 
					delete IS;

					//Returns to menu 1
					break;
				}

				//Logic for choice 2
				else if(choice2=="2")
				{
					//Resets the screen to look neater
					std::cout << "\033[H\033[2J";

					//Creates a new instance of Bubble Sort
					BS = new BubbleSort();

					//Sort method call passing number array
					BS->sort(numarray);


					//Prints sorted array
					std::cout << "Bubble Sort: ";
					for(y=0;y<=49;y++)
					{
						std::cout << numarray[y] << ", ";
					}

					//Gets rid of last comma
					std::cout << "\b\b ";

					std::cout << "\n\n";

					//Deletes instance 
					delete BS;

					//Returns to menu 1
					break;
				}

				//Logic for choice 3
				else if (choice2=="3")
				{
					//Resets the screen to look neater
					std::cout << "\033[H\033[2J";

					std::cout << "\n\nGoodbye!\n\n";
					return 0;
				}

				//Logic for invalid entry
				else
				{
					//Resets the screen to look neater
					std::cout << "\033[H\033[2J";

					std::cout << "Invalid entry, please try again: \n\n";
					continue;
				}
			}

		}

		//Logic for choice 2
		else if(choice1 == "2")
		{
			//Resets the screen to look neater
			std::cout << "\033[H\033[2J";

			std::cout << "\n\nGoodbye!\n\n";
			return 0;
		}

		//Logic for invalid entry
		else
		{
			//Resets the screen to look neater
			std::cout << "\033[H\033[2J";

			std::cout << "Invalid entry, please try again: \n\n";
			continue;
		}

	}
}
