#ifndef inoutmat
#define inoutmat

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;
typedef vector<Matriz> Seq;

/*Made by Ferran Beneitez Borrut @ferran__4 on instagram and Fez248 in github https://github.com/Fez248 */

/*Reads a n*m matrix, the values of n and m must be ready at the standar input canal*/
void readm_int(Matriz& mat);

/*Reads a n*m matrix, the matrix is already defined with the right m*n dimensions*/
void readm_int_def(Matriz& mat);

/*Reads multiple n*m matrixs, the values of n and m must be ready before each matrix at the standar input canal*/
void readm_int_mult(Seq& sec, int num);

/*Reads multiples n*m matrixs of the same dimensions*/
void readm_int_def_mult(Seq& sec, int num, int n, int m);

/*Writes a matrix*/
void writem_int(const Matriz& mat);

/*Writes a specified amount of matrixs stored in sec, if the parameters are ini = 0 and fin = 0 it writes the hole sec*/
void writem_int_mult(const Seq& secm, int ini, int fin);

#endif