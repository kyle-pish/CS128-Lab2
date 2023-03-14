//Antonio Woods, Kyle Pish
#include <iostream>
#include <cmath>


void Lab2Part2_main(){

  //creating variables that will be used to store user input
  int num1;
  char operation;
  int num2;
  
  //prompting user for their input and storing the input in the previously created variables
  std::cout << "Enter your first number: " << std::endl;
  std::cin >> num1 ;
  
  std:: cout << "What operation would you like to use: "<<std::endl;
  std::cin >>  operation ;
  
  std::cout << "Enter your second number: " << std::endl;
  std::cin >> num2 ;
  
    
  //checking which operation was entered by the user to determine what to do with the numbers that were entered by the user
  if (operation =='+') {
      std::cout << (num1 + num2) <<std::endl;
  }
      
  else if (operation == '-') {
    std::cout << (num1 - num2) << std::endl;
  }

  else if (operation == '*') {
    std::cout << (num1 * num2)<< std::endl;
  }

  else if (operation == '/') {
    std::cout << (num1 / num2)<< std::endl;
  }

  else if (operation == '%') {
    std::cout << (num1 % num2) << std::endl;
  }
  
  else if (operation == '^') {
    std::cout << pow(num1, num2) << std::endl;
  }
}

