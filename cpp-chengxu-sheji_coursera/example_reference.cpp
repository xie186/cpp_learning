#include <iostream>

void swap(int & a, int & b){
    int tmp;
    tmp = a; a=b; b=tmp;
}

int main(){
    double a = 4, b = 5;
    double & r1 = a;
    double & r2 = r1;
   
    r2 = 10;
    std::cout << a << std::endl;
    
    r1 = b;
    std::cout<< a << std::endl;

    // values of n1 n2 will be swapped 
    int n1 = 100, n2 = 200;
    swap(n1, n2);
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
}

