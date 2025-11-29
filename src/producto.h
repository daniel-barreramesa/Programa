/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file escribir.cc
 * @author Daniel Barrera Mesa alu0101742830@ull.edu.es
 * @date Nov 28 2025
 * @brief Declaro la clase proucto.
 * @bug There are no known bugs
 * @see 
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
