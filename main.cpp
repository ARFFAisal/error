#include <iostream>


int main(){
    //compile time error
    /*

    std::cout << "Hello world!" << std::endl;
    return 0;
    */

    //Run time error
    int value = 7/0;
    std::cout << "value : " << value << std::endl;
    return 0;

} 