#include <iostream>


// simple function declaration
void batata(){
  std::cout << "cenoura";
}


// main function, always used as entry point in c++ programs
int main()
{
  /*  

    * std is the standard c++ library, all the standard elements are defined within what is called 
      namespace, in this case std

    * std::cout stands for standard character output device
    
    * << - insertion operator, what follows is inserted into std::cout
    
  */
  std::cout << "Hello world";
  batata();
}