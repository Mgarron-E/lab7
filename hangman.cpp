#include "hangman.h"
#include <ctime>
#include <cstdlib>

Hangman::Hangman() {
  words = {"hangman", "computer"};
  srand(time(0));
  correctWord = words[rand() % words.size()];
  guessedWord = std::string(correctWord.length(), '_');
  maxAttempts = 6;
  remainingAttempts = maxAttempts;
}
bool Hangman::isGameOver() {
  return remainingAttempts <= 0 || guessedWord == correctWord;
}

void Hangman::guess(char letter) {
  bool correctGuess = false;
  for (size_t i = 0; i < correctWord.length(); ++i) {
    if (correctWord[i] == letter) {
      guessedWord[i] = letter;
      correctGuess = true;
    }
  }
  
  if (!correctGuess) {
    --remainingAttempts;
  }
}

std::string Hangman::getGuessedWord() {
  return guessedWord;
}
std::string Hangman::getCorrectWord(){
  return correctWord;
}
int Hangman::getRemainingAttempts() {
  return remainingAttempts;
}
