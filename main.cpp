//LIBRERIAS
#include <iostream>
#include <string>

//ARCHIVOS
#include "herencia.h"


void FunctionSelector(int exampleused) 
{

	switch (exampleused)
	{
	case 1:
		Aula(); //funcion de herencia
		std::cout << std::endl;
		break;
	case 2:
		//funcion x
		break;
	}


	std::cout << "Example 0" << exampleused << " Finished" << std::endl;
	std::string text = "";
	getline(std::cin, text);
}

int main() 
{
	std::cout << "LO FUNCION \n" << std::endl;
	int exampleUsed = 1;
	FunctionSelector(exampleUsed); 
}