#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

void play_game();

int main() {
  srand(time(NULL)); // random number generator
  int choice;
  do {
    //  Menu
    std::cout << "1. Quit\n"
              << "2. Play\n";

    std::cin >> choice;

    switch (choice) {
    case 1:
      std::cout << "Sad, but ok." << std::endl;
      return 0;

    case 2:
      play_game();
      break;

    default:
      std::cout << "That's not a choice." << std::endl;
    }
  } while (choice != 0);

  return 0;
}

void play_game() {
  std::cout << "Game is being played." << std::endl;
  int random = rand() % 251; // random number generator
  std::cout << "Guess a number: " << std::endl;

  while (true) {
    int guess;
    std::cin >> guess;
    if (guess == random) {
      std::cout << "You win!" << std::endl;
      break;
    } else if (guess < random) {
      std::cout << "Too low! Guess Again: " << std::endl; 
    }
    else {
      std::cout << "Too high! Guess Again: " << std::endl;
    }
  }
}