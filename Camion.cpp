/*
  Archivo: Camion.cpp
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-03-05
  Fecha última modificación: 2021-03-06
  Licencia: GNU-GPL
*/

#include"Camion.h"

Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  this->laPlaca=laPlaca;
  this->laCapacidadMaxima=laCapacidadMaxima;
  this->pesoTotalDelCamion=0;
}

/*Función auxiliar para cargar el camión.*/

bool Camion::cargarUnObjeto(int pesoDelObjeto) 

{
  if(pesoTotalDelCamion + pesoDelObjeto <=laCapacidadMaxima)  
  {
    pesoTotalDelCamion = pesoTotalDelCamion + pesoDelObjeto;
    return true;
  }
  else 
    return false;
}


int Camion::hacerMudanza() 
{ 
  return pesoTotalDelCamion; 
}

string Camion::cualEsLaPlaca() 
{  
  return laPlaca; 
}

/*Convierte los datos privados de la clase*/
string Camion:: descripcionCompleta()
{
  string resultado = "La placa es " + laPlaca + ", la carga máxima que puede llevar es " + to_string(laCapacidadMaxima) + " y el peso que lleva actualmente cargado es " + to_string(pesoTotalDelCamion);
  return resultado;
}