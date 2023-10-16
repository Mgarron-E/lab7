#ifndef HANGMAN_H
#define HANGMAN_H

#include <string>
#include <vector>

class Hangman {
private:
  std::vector<std::string> words;
  std::string correctWord;
  std::string guessedWord;
  int maxAttempts;
  int remainingAttempts;
  

public:
  Hangman();
  bool isGameOver();
  void guess(char letter);
  std::string getGuessedWord();
  std::string getCorrectWord();
  int getRemainingAttempts(); 
};

#endif
