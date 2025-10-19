#pragma once
#include <iostream>
#include <fstream>
#include <string>

class WorkInFile
{
public:
	virtual void WorkFile() = 0;

	int CheckFileOpened(std::ios& file) 
	{
		if (!file) {
			std::cout << "Error al abrir el archivo" << std::endl;
			return 1;
		}
	}
};

class WriteFile : public WorkInFile 
{
public:
	void WorkFile() override {
		std::ofstream file("D:/DOCUMENTOS ------/Enti/2o/Macrocpp/files/lofile.txt", std::ios::trunc); 

		CheckFileOpened(file);

		file << "Hola, nigga" << std::endl;
		file << "creo que poniendo texto en diferentes filas del cpp, hace que se ponga en diferentes lineas del archivo" << std::endl;
		
		std::cout << "Se ha escrito en el archivo con exito" << std::endl;

		file.close();
	}
};

class ReadFile : public WorkInFile 
{
public:
	//Esta variante de la funcion sera para leer lo que ya hayamos escrito
	//asi que como tal no funciona independientemente
	void WorkFile() override 
	{
		std::ifstream file("D:/DOCUMENTOS ------/Enti/2o/Macrocpp/files/lofile.txt");
		
		CheckFileOpened(file);

		std::string line;
		while (getline(file, line)) {
			std::cout << line << std::endl;
		}

		file.close();
	}
};

class WriteAndReadFile : public WorkInFile {
public:
	//Esta variante es para hacer las dos a la vez porque me sale a mi de la polla como lo ves
	void WorkFile() override {
		std::fstream file ("D:/DOCUMENTOS ------/Enti/2o/Macrocpp/files/lofile.txt");

		CheckFileOpened(file);
		
		file << "Nigga" << std::endl;

		file.seekg(0);
		std::string line;
		while (getline(file, line)) {
			std::cout << line << std::endl;
		}

		file.close(); 
	}
};



void CheckFile() 
{
	WriteFile wf;
	ReadFile rf;
	WriteAndReadFile warf;

	/*wf.WorkFile();
	rf.WorkFile();
	warf.WorkFile();*/

	WorkInFile* files[] = { &wf, &rf, &warf };
	for (WorkInFile* number : files) {
		number->WorkFile();
	}

}