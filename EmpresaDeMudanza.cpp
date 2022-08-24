/*
  Archivo: EmpresaDeMudanza.cpp
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-03-05
  Fecha última modificación: 2021-03-06
  Licencia: GNU-GPL
*/

#include "EmpresaDeMudanza.h"


EmpresaDeMudanza::EmpresaDeMudanza(string nombre, string nit) 
{
  this->nombre = nombre;
  this->nit = nit;
}

void EmpresaDeMudanza::comprarCamion(Camion unCamion)
{
  flota.push_back(unCamion);
}

int EmpresaDeMudanza::pesoTransportado()
{
  int pesoTransportado = 0;  
  for(int cualCamion =0; cualCamion < flota.size(); cualCamion++)
  {
    pesoTransportado = pesoTransportado + flota[cualCamion].hacerMudanza();
  }
  return pesoTransportado;
}  
 
void EmpresaDeMudanza::transportarObjetos(vector<int> objetos)
{
  for (int cualObjeto = 0; cualObjeto < objetos.size(); cualObjeto++)
  {
	  for (int cualCamion = 0; cualCamion < flota.size();cualCamion++) 
    { 
			if (flota[cualCamion].cargarUnObjeto(objetos[cualObjeto])) 
      {
				break;
			}
		}
	}
}
