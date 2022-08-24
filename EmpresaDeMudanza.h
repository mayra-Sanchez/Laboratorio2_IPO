/*
  Archivo: EmpresaDeMudanza.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-03-05
  Fecha última modificación: 2021-03-06
  Licencia: GNU-GPL
*/

/*
  CLASE: EmpresaDeMudanza
  INTENCIÓN: quiero obtener los datos de la empresa y retonar comprar camion, también transportar objetos y retornar el peso transportado
  - nombre
  - nit
  - vector flota
  - Comprar Camion
  - Peso transportado
  - transportar Objetos
   RELACIONES: contiene Camiones
*/

#ifndef EMPRESADEMUDANZA_H
#define EMPRESADEMUDANZA_H

#include<string>
#include<vector>
using namespace std;
#include"Camion.h"

class EmpresaDeMudanza
{
  
  private:
  string nombre;
  string nit; /*Nit es número de identificación*/
  vector <Camion> flota;
    
  public:
  /**datos de la empresa*/
  EmpresaDeMudanza(string nombre, string nit);
  /**True=comprar otro camion, False= no se compra,no retorna nada*/
  virtual void comprarCamion(Camion unCamion);
  /** Retorna la carga que transportó */
  virtual int pesoTransportado();
  /**vector de Camiones, donde primero se lleva cada objeto al primer camión, y si no cabe se intenta con el segundo, y si no cabe, se intenta con el tercero,etc, no retorna nada*/
  virtual void transportarObjetos(vector <int> objetos);

};

#else
class EmpresaDeMudanza; /* Declaración adelantada*/
#endif 

