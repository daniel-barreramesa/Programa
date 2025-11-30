/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file escribir.cc
 * @author Daniel Barrera Mesa alu0101742830@ull.edu.es
 * @date Nov 26 2025
 * @brief Escribe un archivo de texto según la entrada del usuario
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P48107
 */

 #include<iostream>
 #include"producto.cc"

 int main(){
  char siono, s{'s'};
  int opcion;

  std::cout << "\nMENU \n";
  std::cout << "--------------------------------------------------------------- \n";
  std::cout << "1. Realizar venta \n";
  std::cout << "2. Realizar devolución \n";
  std::cout << "3. Crear producto \n";
  std::cout << ": ";
  std::cin >> opcion;

  if (opcion == 3){
  std::cout << "¿Crear producto? [s/n]: ";
  std::cin >> siono;
  if(siono == s)
    crear_producto();
  else
    return 0;
  }

  return 0;
 }
