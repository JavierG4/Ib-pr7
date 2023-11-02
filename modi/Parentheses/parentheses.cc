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
  * @see https://jutge.org/problems/P31111_en/statement
  */

#include<iostream>
#include <iostream>
using namespace std;

int main() {
  char caracter;
  int j = 0;
  bool igual = true;
  while (cin >> caracter && igual) {
    if (caracter == '(') {
      j++;
    } 
    else {
      j--;
    }
    if (j < 0) {
      igual = false;
    }
  }
  if (j == 0) {
    cout << "yes" << endl;
  } 
  else if (j != 0) {
    cout << "no" << endl;
  }
  return 0;
}