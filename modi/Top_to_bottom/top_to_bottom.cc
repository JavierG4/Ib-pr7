/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file  Sum of squares
  * @author Javier Gonzalez Brito alu0101548197@ull.edu.es
  * @date nov 2 2023
  * @brief that reads a natural number n, and prints the result of the following sum:
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P36668_en
  */
#include<iostream>

int main() {
  int numerox, numeroy;
  std::cin >> numerox >> numeroy;
  if (numerox == numeroy) {
    std::cout << numerox << std::endl;
  }
  if (numerox > numeroy) {
    for (int i = numerox; i >= numeroy; i--) {
      std::cout << i << std::endl;
    }
  }
  if (numeroy > numerox) {
    for( int i = numeroy; i >= numerox; i--) {
      std::cout << i << std::endl;
    }
  }
}