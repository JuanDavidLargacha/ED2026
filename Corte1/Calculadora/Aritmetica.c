#include "aritmetica.h" // Incluimos nuestro propio header
int sumar(int a, int b) {
 return a + b;
}
int restar(int a, int b) {
 return a - b;
}
int multiplicar(int a, int b) {
 return a * b;
}
int dividir(int a, int b) {
 if (b == 0) {
  return 0; // O manejar el error de división por cero según sea necesario
 }
 return a / b;
}