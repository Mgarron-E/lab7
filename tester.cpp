#include "hangman.h"
#include <iostream>

int main() {
  Hangman hangmanGame;
  std::cout << "Welcome to Hangman!" << std::endl;
  
  while (!hangmanGame.isGameOver()) {
    std::cout << "Guessed Word: " << hangmanGame.getGuessedWord() << std::endl;
    std::cout << "Remaining Attempts: " << hangmanGame.getRemainingAttempts() << std::endl;
    
    char guess;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    
    hangmanGame.guess(guess);
    std::cout << std::endl;
  }
  
  if (hangmanGame.getGuessedWord() == hangmanGame.getCorrectWord()) {
    std::cout << "Correct: " << hangmanGame.getGuessedWord() << std::endl;
  } else {
    
    std::cout << "Game over, word was: " << hangmanGame.getCorrectWord() << std::endl;
  }
  
  return 0;
}
