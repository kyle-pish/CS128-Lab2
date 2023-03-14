//Antonio Woods, Kyle Pish
#include <iostream>
#include <random>

//setting up the function that will be used to tell the user whether or not thier guess was correct
void CheckGuess(int secret, int guess){

  // if statements to determine hoe close the guess was to the secret number
  if (secret - 25 > guess){
    std:: cout << "You're too far low"<< std::endl;
  }
  else if (secret + 25 < guess){
    std:: cout << "You're too far high"<< std::endl;
  }
  else if (secret > guess){
    std:: cout << "You're too low"<< std::endl;
  }
  else if (secret < guess){
    std:: cout << "You're too high"<< std::endl;
  }
  else if  (secret == guess){
    std::cout << "You have guessed the correct number. Congraulations"<< std::endl;
  }


}

//function that starts the guessing game
void GuessingGame(){
  std::mt19937 generator(std::random_device{}());

  
  std::uniform_int_distribution<int> distribution(0, 100);
  //random number is assigned to the "secret" variable that the user will be trying to guess
  int secret = distribution(generator); 
  int guess;
  //While loop tat will continue to gather user input and run the CheckGuess function until the guess is correct
  while (guess != secret){
    std::cout << "What is your guess"<< std::endl;
    std :: cin >> guess;
    //Call the function everytime taking in the set secret number and the new user input as arguments
    CheckGuess(secret, guess);
  }
}


void Lab2Part3_main() {
  GuessingGame();
}


