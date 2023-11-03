#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Program name: '" << argv[0] << "'" << std::endl; //Name of the program is stored as the first arguement
    std::cout << "called with " << argc - 1 << " arguments: ";
    
    for (int i = 1; i < argc; ++i) { //As long as i is less than the array size, the loop continues
        std::cout << "'" << argv[i] << "' "; //Prints the arguement 
    }
    
    std::cout << std::endl;
    return 0;
}