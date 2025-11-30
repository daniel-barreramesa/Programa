# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica

# @author nombre
# @date Oct 21, 2025
# @brief A Makefile for the 2-P90615.cc file

 CXX = g++
 CXXFLAGS = -std=c++17 -Wall
 LDFLAGS =

all: Ejecutable

Ejecutable: ArchivoObjeto.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

	

ArchivoObjeto.o: main.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f *.o Ejecutable *~ a.out
