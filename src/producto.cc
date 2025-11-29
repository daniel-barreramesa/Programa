/**
*@brief Inicializo los métodos.
*/

#include"producto.h"

//Constructor
Producto::Producto(std::string nombre_producto,int precio,int referencia,int stock,std::string descripcion_producto,std::vector<int> fecha_creacion){
  this->nombre_producto = nombre_producto;
  this->precio = precio;
  this->referencia = referencia;
  this->stock = stock;
  this->descripcion_producto = descripcion_producto;
  this->fecha_creacion = fecha_creacion;  
}//corrección en this
