#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include <array>

void play_game();
void print_array(std::array<int, 251>, int count);

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
  std::array<int, 251> guesses; // number of guesses should have space for 250 elements
  int count = 0;

  std::cout << "Game is being played." << std::endl;
  int random = rand() % 251; // random number generator
  std::cout << "Guess a number between 0 and 250: " << std::endl;

  while (true) {
    int guess;
    std::cin >> guess;

    guesses[count++] = guess;

    if (guess == random) {
      std::cout << "You win!" << std::endl;
      break;
    } else if (guess < random) {
      std::cout << "Too low! Guess Again: " << std::endl;
    } else {
      std::cout << "Too high! Guess Again: " << std::endl;
    }
  }

  print_array(guesses, count);
}

void print_array(std::array<int, 251> array, int count) {
  for (int i = 0; i < count; i++) {
    std::cout << "Guess #" << i + 1 << ": " << array[i] << std::endl;
  }
}