/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file escribir.cc
 * @author Daniel Barrera Mesa alu0101742830@ull.edu.es
 * @date Nov 28 2025
 * @brief Escribe un archivo de texto según la entrada del usuario
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P48107
 */
#include<iostream>
#include<string>
#include<vector>

class Producto{
  private: //atributos
    std::string nombre_producto;
    int precio;
    int referencia;
    int stock;
    std::string descripcion_producto;
    std::vector<int> fecha_creacion; //corrección

  public: //métodos
    Producto(std::string nombre_producto, int precio, int referencia, int stock, std::string descripcion_producto, std::vector<int> fecha_creacion);// constructor
  };//corrección

//Constructor
Producto::Producto(std::string nombre_producto,int precio,int referencia,int stock,std::string descripcion_producto,std::vector<int> fecha_creacion){
  this->nombre_producto = nombre_producto;
  this->precio = precio;
  this->referencia = referencia;
  this->stock = stock;
  this->descripcion_producto = descripcion_producto;
  this->fecha_creacion = fecha_creacion;  
}//corrección en this
