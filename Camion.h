/*
  Archivo: Camion.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-03-05
  Fecha última modificación: 2021-03-06
  Licencia: GNU-GPL
*/

/*
  CLASE: Camion
	
  INTENCIÓN: quiero guardar la placa, la capacidad maxima del camion y el peso total de carga. Luego se definen unas funciones que evaluaran lo siguiente:

  - Si se pudo cargar un objeto
  - Cuanta carga se transporto
  - Retornar la placa del camions

  RELACIONES: ninguna
*/

#ifndef CAMION_H
#define CAMION_H

#include<string>
using namespace std;

class Camion
{
  private:
  string laPlaca;
  int laCapacidadMaxima;
  int pesoTotalDelCamion;
    
  public:
  /**valores de Camion*/
  Camion(string laPlaca, int laCapacidadMaxima);
  /**true = se pudo hacer; false = no se pudo*/
  bool cargarUnObjeto(int pesoDelObjeto); 
  /*Retorna la carga que transportó */
  int hacerMudanza(); 
  /**Retorna la placa*/ 
  string cualEsLaPlaca(); 
  /**Entrega la información privada en forma de string */
  string descripcionCompleta();
  /**Entrega el peso total de cada camión*/
  
};



#else
class Camion; /* Declaración adelantada*/
#endif 