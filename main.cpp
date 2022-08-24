/*
  Archivo: main.cpp
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-03-05
  Fecha última modificación: 2021-03-06
  Licencia: GNU-GPL
*/

/**
  Historia: Tengo una empresa de mudanza con una flota de camiones, quiero saber cual es el total de peso transportado.
*/
#include "Camion.h"
#include <string>
#include <vector>
#include "EmpresaDeMudanza.h"

#include <iostream>
using namespace std;

/*Función principal*/

int main()
{
	
  EmpresaDeMudanza empresaDeMudanza("La cuidadosa", "800.548.623-7");

  Camion unCamion("ABC-001", 10000);
  Camion otroCamion("DEF-002", 6000);
  
  empresaDeMudanza.comprarCamion(unCamion);
  empresaDeMudanza.comprarCamion(otroCamion);


/*Vector con los pesos de cada objeto*/
  vector <int> objetos = 
  {
    1000, 3000, 5000, 2000, 500, 1800, 4000, 30 
  };
  
  empresaDeMudanza.transportarObjetos(objetos);
  cout<<"Transporto un peso total de: "<<empresaDeMudanza.pesoTransportado();


  return 0;
}
