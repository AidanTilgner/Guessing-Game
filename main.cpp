#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void play_game();

int main() {

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

void play_game() 
{
    std::cout << "Game is being played." << std::endl;
}