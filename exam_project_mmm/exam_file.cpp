#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void printHeader() {
    cout << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "|                Rock, Scissors, Paper Game            |" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << endl;
}

void printRules() {
    cout << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "| 1. Rock (1)                                          |" << endl;
    cout << "| 2. Scissors (2)                                      |" << endl;
    cout << "| 3. Paper (3)                                         |" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << endl;
}

void displayMessage() {
    const char* messages[] = {
        " Be careful! A stone is falling on you!",
        " I can already taste my victory...)",
        " I think you're giving up, man!",
        " Just don't be a loser, bro...",
        " People surprise me a lot...",
        " Do you want to compete with the computer?",
        " Beware with scissors. Don't cut off your finger.",
        " Do you like paper?",
        " Beats me! Who will win?"
    };
    int random_index = rand() % 9;
    cout << messages[random_index] << endl;
}


void PrintPhraseDraw() 
{
    int phraseDraw = rand() % 5 + 1;
    switch (phraseDraw) {
    case 1: cout << " Why is this man equal to me?\n"; break;
    case 2: cout << " I like it better when you lose.\n"; break;
    case 3: cout << " You're smarter than I thought.\n"; break;
    case 4: cout << " Weak to beat me?\n"; break;
    case 5: cout << " Not bad.\n"; break;
    }
}

void PrintPhraseWin()
{
    int phraseWin = rand() % 5 + 1;
    switch (phraseWin) {
    case 1: cout << " I'll get the win back!\n"; break;
    case 2: cout << " You're lucky.\n"; break;
    case 3: cout << " That's not fair.\n"; break;
    case 4: cout << " You're being nice.\n"; break;
    case 5: cout << " Are you smart?\n"; break;
    }
}

void PrintPhraseLose()
{
    int phraseLose = rand() % 6 + 1;
    switch (phraseLose) {
    case 1: cout << " Ha-ha...\n"; break;
    case 2: cout << " As always!\n"; break;
    case 3: cout << " Machines win!\n"; break;
    case 4: cout << " I love beating you.\n"; break;
    case 5: cout << " Don't be upset.\n"; break;
    case 6: cout << " How do you feel?\n"; break;
    }
}

void printRandomErrorMessage() {
    int phraseError = rand() % 5 + 1;
    switch (phraseError) {
    case 1: std::cout << "Dummy man...\n"; break;
    case 2: std::cout << "What are you trying to achieve?\n"; break;
    case 3: std::cout << "Who are the rules for?\n"; break;
    case 4: std::cout << "You're not silly, are you?\n"; break;
    case 5: std::cout << "The mistake is behind you)\n"; break;
    }
}


int main() {
    srand(time(0));
    int playerChoice, compChoice, rounds;
    int wins = 0, losses = 0, draws = 0;

    printHeader();
    cout << "\033[36m Rules: Choose one of the objects and see what your opponent (the computer) has chosen\033[0m" << endl;
    cout << "\033[36m Remember, paper covers rock, rock breaks scissors, and scissors cut paper.\033[0m" << endl;

    cout << " Enter number of rounds: ";
    cin >> rounds;

    for (int round = 1; round <= rounds; round++) {
        cout << "\nRound " << round << " of " << rounds << endl;
        displayMessage();
        printRules();

       
        bool validInput = false;
        do {
            cout << "Enter your choice (1-3): ";
            cin >> playerChoice;

            if (playerChoice >= 1 && playerChoice <= 3) 
            {
                validInput = true;
            }
            else 
            {
                
                cout << "\033[31mError: Invalid choice!\033[0m ";
                printRandomErrorMessage();
                
                }
            }
        
        while (!validInput);

        compChoice = rand() % 3 + 1;

     
        cout << "-----------------------------------------------------------------------" << endl;
        cout << "       \033[33mYou: \033[0m";
        switch (playerChoice) {
        case 1: cout << "rock     "; break;
        case 2: cout << "scissors "; break;
        case 3: cout << "paper    "; break;
        }
        cout << "| \033[35mComputer: \033[0m";
        switch (compChoice) {
        case 1: cout << "rock\n"; break;
        case 2: cout << "scissors\n"; break;
        case 3: cout << "paper\n"; break;
        }

    
        if (playerChoice == compChoice) {
            cout << "\033[34m Draw!\033[0m" << endl;
            draws++;
        }
        else if ((playerChoice == 1 && compChoice == 2) ||
            (playerChoice == 2 && compChoice == 3) ||
            (playerChoice == 3 && compChoice == 1)) {
            cout << "\033[32m Victory!\033[0m" << endl;
            wins++;
        }
        else {
            cout << "\033[31m Defeat...\033[0m" << endl;
            losses++;
        }

        cout << "[Wins: " << wins << " | Losses: " << losses << " | Draws: " << draws << "]" << endl;


        if (playerChoice == compChoice) 
        {
            PrintPhraseDraw();
        }
        else if (playerChoice > compChoice || (playerChoice == 1 && compChoice == 3)) 
        {
            PrintPhraseWin();
        }
        else {
			PrintPhraseLose();
        }
    }
    cout << "\n\033[36m Game Over!\033[0m" << endl;
    cout << "\033[32m Wins: " << wins << "\033[0m | ";
    cout << "\033[31mLosses: " << losses << "\033[0m | ";
    cout << "\033[34mDraws: " << draws << "\033[0m" << endl;

    if (wins + losses + draws > 0) {
        cout << "\n\033[35m Thanks for playing! ^_^ \033[0m" << endl;
    }
    else {
        cout << "Did you even play?" << endl;
    }

    return 0;
}