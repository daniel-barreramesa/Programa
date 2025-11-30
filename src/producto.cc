/**
*@brief Inicializo los métodos.
*/
#include<fstream>
#include"producto.h"

//Constructor
Producto::Producto(std::string nombre_producto,double precio,int referencia,int stock,std::string descripcion_producto,std::vector<int> fecha_creacion){
  this->nombre_producto = nombre_producto;
  this->precio = precio;
  this->referencia = referencia;
  this->stock = stock;
  this->descripcion_producto = descripcion_producto;
  this->fecha_creacion = fecha_creacion;  
}//corrección en this

//Metodo crear
void crear_producto(){
  std::cin.ignore();
  std::string nombre, descripcion;
  double precio;
  int referencia{1234}, stock;
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
  std::cin.ignore();//borrar la entrada residual que queda en el input stream
  std::cout << "Descripción del producto: ";
  std::getline(std::cin, descripcion);
  //El usuario rellena los campos necesarios para el constructor
  Producto p1 = Producto(nombre, precio, referencia, stock, descripcion, fecha_creacion); //Creo el producto
  std::cout << "Listo \n";
  //AHORA CREO EL ARCHIVO DE TEXTO
  std::string archivo, txt = ".txt", directorio = "saves/";
  archivo = directorio +nombre + txt;
  std::ofstream outfile{archivo}; //Indico donde guardar el archivo
  outfile << nombre << std::endl;
  outfile << precio << std::endl;
  outfile << referencia << std::endl;
  outfile << stock << std::endl;
  outfile << descripcion << std::endl;
  outfile << fecha_creacion[0] << "/" << fecha_creacion[1] << "/" << fecha_creacion[2] << std::endl;
}