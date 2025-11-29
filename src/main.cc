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
 #include"crear_producto.cc"
 #include"producto.cc"

 int main(){
  char siono, s{s};
  std::cout << "¿Crear producto? [s/n]: ";
  std::cin >> siono;
  if(siono == s)
    crear_producto();
  else
    return 0;

  return 0;
 }
