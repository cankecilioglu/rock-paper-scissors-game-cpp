#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>

void printHeader() {
    std::cout << "\n╔════════════════════════════════════╗\n";
    std::cout << "║   ROCK  PAPER  SCISSORS  GAME      ║\n";
    std::cout << "╚════════════════════════════════════╝\n\n";
}

void printMenu() {
    std::cout << "┌────────────────────────────────────┐\n";
    std::cout << "│  1. 🪨  Rock                        │\n";
    std::cout << "│  2. 📄  Paper                      │\n";
    std::cout << "│  3. ✂️   Scissors                   │\n";
    std::cout << "│  4. 🚪  Exit                       │\n";
    std::cout << "└────────────────────────────────────┘\n";
}

std::string getChoiceName(int choice) {
    switch (choice) {
        case 1: return "Rock 🪨";
        case 2: return "Paper 📄";
        case 3: return "Scissors ✂️";
        default: return "Invalid";
    }
}

void printResult(int player, int computer, int& playerScore, int& computerScore) {
    std::cout << "\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
    std::cout << "You chose: " << getChoiceName(player) << "\n";
    std::cout << "Computer chose: " << getChoiceName(computer) << "\n";
    std::cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";

    if (player == computer) {
        std::cout << "🤝 It's a TIE!\n";
    } else if ((player == 1 && computer == 3) ||
               (player == 2 && computer == 1) ||
               (player == 3 && computer == 2)) {
        std::cout << "🎉 YOU WIN!\n";
        playerScore++;
    } else {
        std::cout << "💻 COMPUTER WINS!\n";
        computerScore++;
    }

    std::cout << "\n📊 Score - You: " << playerScore << " | Computer: " << computerScore << "\n\n";
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;

    printHeader();

    while (true) {
        printMenu();
        std::cout << "Enter your choice (1-4): ";
        std::cin >> playerChoice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "❌ Invalid input! Please enter a number (1-4).\n\n";
            continue;
        }

        if (playerChoice == 4) {
            std::cout << "\n👋 Thanks for playing! Final Score - You: " << playerScore
                      << " | Computer: " << computerScore << "\n\n";
            break;
        }

        if (playerChoice < 1 || playerChoice > 3) {
            std::cout << "❌ Invalid choice! Please choose 1, 2, or 3.\n\n";
            continue;
        }

        computerChoice = (std::rand() % 3) + 1;
        printResult(playerChoice, computerChoice, playerScore, computerScore);
    }

    return 0;
}