#pragma once

#include <iostream>

class aula {
public:
	//con el virtual delante permite redefinir la funcion dependiendo del hijo
	virtual void Estar() 
	{
		std::cout << "En la clase hay personas" << std::endl;
	}

	void DecirlaCosa() 
	{
		std::cout << "Paquito grita: ¡LA COSAAA!" << std::endl;
	}
};

class xokas : public aula {
public:
	void Estar() override {
		std::cout << "el xokas solar toma el sol" << std::endl;
	}
};

class casco : public aula {
public:
	void Estar() override {
		std::cout << "El casquito esta protegido mientras se rie como un subnormal" << std::endl;
	}
};

void Aula() {
	aula loAula;
	xokas xokasSolar;
	casco casquito;

	//Esto son llamadas normales
	std::cout << "===Llamadas normales sabiendo todos los integrantes" << std::endl;
	loAula.Estar();
	xokasSolar.Estar();
	casquito.Estar();
	std::cout << "\n\n";

	//en caso de llamarlas de forma que no sabemos, como en mi juego de ludi
	aula* lista[] = { &loAula, &xokasSolar, &casquito };
	std::cout << "===Llamadas sin saber nada\n";
	for (aula* numero : lista)
	{
		numero->Estar();
	}

	std::cout << "\n\n===Método no virtual" << std::endl;
	for (aula* numero : lista) {
		numero->DecirlaCosa();
	}

}
