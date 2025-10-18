//LIBRERIAS
#include <iostream>
#include <string>

//ARCHIVOS
#include "herencia.h"
#include "Mister.h"


void FunctionSelector(int exampleused) 
{

	switch (exampleused)
	{
	case 1:
		Aula(); //funcion de herencia
		//Archivo  de "herencia.h"
		std::cout << std::endl;
		break;
	case 2:
		StructureCreations(); //funcion de estructura
		//Archivo de "Mister.h"
		std::cout << std::endl;
		break;

	default:
		std::cout << "No hay un indice de función válido seleccionado" << std::endl;
		return;
	}
	
	std::cout << "Example " << exampleused << " Finished" << std::endl;
	std::string text = "";
	getline(std::cin, text);
}

int main() 
{
	std::cout << "LO FUNCION \n" << std::endl;
	int exampleUsed = 2;
	FunctionSelector(exampleUsed); 
}