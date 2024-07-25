/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    std::cout<<"Int" << std::endl;
    // visualizando endereço de memória de um int:
    int array [4] = { 2, 4, 6, 8 };
    
    // visualizando o endereço de memória da variável array:
    std::cout<< array << std::endl;
    
    // visualizando o endereço de memória de cada elemento do array:
    std::cout<< &array[0] << std::endl;
    std::cout<< &array[1] << std::endl;
    std::cout<< &array[2] << std::endl;
    std::cout<< &array[3] << std::endl;

    std::cout<<"String/Char" << std::endl;
    // visualizando endereço de memória de uma string:
    char random[20] = { 'S', 'l', 'a', 'y', 'e', 'r' };
    
    // visualizando o endereço de memória da variável random:
    std::cout<< (void*)random << std::endl;
    
    // visualizando o endereço de memória de cada elemento do array random:
    std::cout<< random[0] << std::endl;
    std::cout<< (void*)&random[0] << std::endl;

    std::cout<< random[1] << std::endl;
    std::cout<< (void*)&random[1] << std::endl;
    
    std::cout<< random[2] << std::endl;
    std::cout<< (void*)&random[2] << std::endl;
    
    std::cout<< random[3] << std::endl;
    std::cout<< (void*)&random[3] << std::endl;
    
    std::cout<< random[4] << std::endl;
    std::cout<< (void*)&random[4] << std::endl;
    
    std::cout<< random[5] << std::endl;
    std::cout<< (void*)&random[5] << std::endl;

    
    std::cout<<"BOOLEAN" << std::endl;
    // visualizando endereço de memória de um boolean:
    bool data[3] = { true, false };
    
    // visualizando o endereço de memória da variável data:
    std::cout<< data << std::endl;
    
    // visualizando o endereço de memória de cada elemento do array data:
    std::cout<< &data[0] << std::endl;
    std::cout<< &data[1] << std::endl;
   
   
    std::cout<<"LONG INT" << std::endl;
    // visualizando endereço de memória de um long int:
    long number[40] = { 408945, 500000, 100000 };
    
    // visualizando o endereço de memória da variável number:
    std::cout<< number << std::endl;
    
    // visualizando o endereço de memória de cada elemento do array data:
    std::cout<< &number[0] << std::endl;
    std::cout<< &number[1] << std::endl;
    std::cout<< &number[2] << std::endl;

    return 0;
}