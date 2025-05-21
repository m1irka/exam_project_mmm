#include <iostream>
using namespace std;

int main()
{
    int playChoice, compChoice, rounds;
    int wins = 0, losses = 0, draws = 0;

    cout << " Game: Rock, Scissors, Paper!" << endl
        << "\033[36m Rules: Choose one of the objects and see what your opponent (the computer) has chosen\033[0m" << endl
        << "\033[36m Remember, paper covers rock, rock breaks scissors, and scissors cut paper.\033[0m" << endl;

    cout << "Enter number of rounds: ";
    cin >> rounds;

    for (int i = 0; i < rounds; i++)
    {
        cout << endl << "\033[33mRound " << i + 1 << ": Choose rock (1), scissors (2), paper (3): \033[0m";
        cin >> playChoice;

        compChoice = rand() % 3 + 1;

        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\033[33mYou: \033[0m";
        if (playChoice == 1)
        {
            cout << "rock" << endl;
        }
        else if (playChoice == 2)
        {
            cout << "scissors" << endl;
        }
        else if (playChoice == 3)
        {
            cout << "paper" << endl;
        }
        else 
        {
            cout << "\033[31mError: Invalid choice!\033[0m" << endl;
            i--; 
            continue;
        }

        cout << "\033[35mThe computer: \033[0m";
        if (compChoice == 1)
        {
            cout << "rock" << endl;
        }
        else if (compChoice == 2)
        {
            cout << "scissors" << endl;
        }
        else
        {
            cout << "paper" << endl;
        }

       
        if (playChoice == compChoice) 
        {
            cout << "\033[34mDraw\033[0m" << endl;
            draws++;
        }
        else if ((playChoice == 1 && compChoice == 2) ||(playChoice == 2 && compChoice == 3) ||(playChoice == 3 && compChoice == 1)) 
        {
            cout << "\033[32mVictory!\033[0m" << endl;
            wins++;
        }
        else 
        {
            cout << "\033[31mDefeat...\033[0m" << endl;
            losses++;
        }

        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    }

  
    cout << "\n\033[36mGame Over!\033[0m" << endl;
    cout << "\033[32mWins: " << wins << "\033[0m | "
        << "\033[31mLosses: " << losses << "\033[0m | "
        << "\033[34mDraws: " << draws << "\033[0m" << endl;

    cout << "\n\033[35mThanks for playing!\033[0m" << endl;
    return 0;
}