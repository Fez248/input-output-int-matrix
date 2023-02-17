# input-output-int-matrix
A module that contains functions to get input and output of integer matrixes in different ways.

How to use it:

To use it in your code, just download the files and "inoutmat.o" link it with your main program when compiling. You will need to put (#include "inoutmat.hh")
on your main program to use the functions. In my university we compile with g++ so it will be something like:

      1. g++ -c main.cc
      2. g++ -o final.exe main.cc inoutmat.o
      
Also, if you make changes to the original file (feel free to do it), inoutmat.cc you will need to do the following:

      g++ -c inoutmat.cc
      
With that, you will update the inoutmat.o file. I haven't tried it with other c++ compilers but it should work fine.

It contains 6 functions.

readm_int(matrix) --> This is a simple way to get the input of a matrix, the dimensions of the matrix would be taken once the function is called.
So they need to be in the standard input canal and after that it will simply read the matrix, and it will store it on the variable that you put between ().
This variable it has to be a vector of vectors of int, but it doesn't need to have any specific dimensions.

readm_int_def(matrix) --> The only difference with "read_int(matrix)" it's that here the dimensions of the matrix are already specified in the variable.

readm_int_mult(sec, num) --> This one reads a number num of matrixes and stores it at sec, which it is a vector of matrixes, the dimensions of the matrixes need to be
before each matrix, just as "read_int".

readm_int_def_mult(sec, num, n, m) --> The same as "readm_int_mult(sec, num)" but all the matrixes have the same dimensions and they are specified by n and m,
being n the number of rows and m the number of columns.

writem_int(matrix) --> Prints a matrix.

writen_int_mult(sec, ini, fin) --> Take a sec variable as seen before (vector of matrixes) and prints from the matrix at position ini to the matrix at position fin,
both included, also if you want to print all of them you can set ini = 0 and fin = 0.

Feel free to comment if you see something wrong or something that can be improved, I am just a beginner student who has made this for his projects but
thinks that maybe someone could benefit from it.

Last, sorry if I have mistakes on my writing English it's not my first language.
