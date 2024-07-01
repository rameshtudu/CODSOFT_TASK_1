#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); // Seed the random number generator
    int secretNumber = std::rand() % 100 + 1; // Random number between 1 and 100
    int guess = 0;
    int numberOfTries = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have chosen a number between 1 and 100. Can you guess what it is?\n";

    while (guess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        numberOfTries++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << numberOfTries << " tries.\n";
        }
    }

    return 0;
}
