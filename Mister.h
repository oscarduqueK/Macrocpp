#pragma once
#include <iostream>

#define LIMIT 5 //me acabo de enterar que en estas mierdas no se pone el ';'

class ArraysRusticos {
public:
	void CreateStructure(char a, int b)  
	{	
		for (int i = 0; i < b; i++) 
		{
			for (int j = 0; j <= i; j++) 
			{
				std::cout << a;
			} 
			std::cout << "\n";
		}
	}
};

void StructureCreations()
{
	ArraysRusticos a;
	a.CreateStructure('N', LIMIT);
	 
}
