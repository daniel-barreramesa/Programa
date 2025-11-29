

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"producto.cc"

void crear_producto(){
  std::string nombre, descripcion;
  int precio, referencia, stock;
  std::vector<int> fecha_creacion(3);
  //Declaro todas las variables que voy a necesitar para crear el producto
  std::cout << "Nombre del producto: ";
  std::getline(std::cin, nombre);
  std::cout << "Precio del producto: ";
  std::cin >> precio;
  std::cin.clear();//borrar la entrada residual que queda en el input stream
  std::cout << "Stock disponible: ";
  std::cin >> stock;
  std::cin.clear();//borrar la entrada residual que queda en el input stream
  std::cout << "Dia del mes actual: ";
  std::cin >> fecha_creacion[0];
  std::cin.clear();//borrar la entrada residual que queda en el input stream
  std::cout << "Número mes actual: ";
  std::cin >> fecha_creacion[1];
  std::cin.clear();//borrar la entrada residual que queda en el input stream
  std::cout << "Año actual: ";
  std::cin >> fecha_creacion[2];
  std::cin.clear();//borrar la entrada residual que queda en el input stream
  std::cout << "Descripción del producto: ";
  std::getline(std::cin, descripcion);
  std::cin.ignore();//borrar la entrada residual que queda en el input stream
  //El usuario rellena los campos necesarios para el constructor

}



/**
int main(){
  crear_producto();

  return 0;
}
*/
  