//Antonio Woods, Kyle Pish
#include<iostream>




void Lab2Part1Helper(int x, int y){
  //output varuable and address
  std::cout << x << &x << std::endl;
  std::cout << y << &y << std::endl;
  }

//create new function
void Lab2Part1_main(){
  //declare and initialize variables
  int a, b, c;
  a = 1;
  b = 2;
  c = 3;
  
  //ooutput thise variables and their addresses
  std::cout << a << std::endl;
  std::cout << b <<std::endl;
  std::cout << c << std::endl;
  
  std::cout << &a << std::endl;
  std::cout << &b <<std::endl;
  std::cout << &c << std:: endl;
  
  //call helper function
  Lab2Part1Helper(a, b);

  //new variables
  int d, e, f;
  d = 5;
  e = 6; 
  f = 7;

  //output those new varibales and their locations
  std::cout << d << std::endl;
  std::cout << e <<std::endl;
  std::cout << f << std:: endl;
  
  std::cout << &d << std::endl;
  std::cout << &e <<std::endl;
  std::cout << &f << std:: endl;

  //call helper function with variables from before
  Lab2Part1Helper(a, c);
  }
  
