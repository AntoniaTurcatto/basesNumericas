#include <iostream>


int main(){
    int decimal =15; //inicialização assignment
    int octal = (017); // inicialização funcional
    int hexadecimal = {0x0f}; //inicialização uniforme
    int binario = {0b00001111};

    std::cout << "n1 = " << decimal << std::endl;
    std::cout << "n2 = " << octal << std::endl;
    std::cout << "n3 = " << hexadecimal << std::endl;
    std::cout << "n4 = " << binario << std::endl;
}