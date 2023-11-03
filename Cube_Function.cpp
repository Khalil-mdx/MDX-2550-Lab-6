#include <iostream>

//Define the function

int cube (int x);

int main() {
    // Declare variables to store user input and calculated values

    int user_input ;

    std::cout << "Enter a number: " ;
    std::cin >> user_input;
    std::cout << cube(user_input) << "\n" ;
    return 0;
}

int cube (int x) 
{
    return x * x * x ;
}
