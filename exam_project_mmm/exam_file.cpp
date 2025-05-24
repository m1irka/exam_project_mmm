#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int playChoice, compChoice, rounds, phrases, phraseWin, phraseLose, phraseDraw, phraseError;
    int wins = 0, losses = 0, draws = 0, indexWin = 0, indexWinComp = 0;

    cout << " Game: Rock, Scissors, Paper!" << endl
        << "\033[36m Rules: Choose one of the objects and see what your opponent (the computer) has chosen\033[0m" << endl
        << "\033[36m Remember, paper covers rock, rock breaks scissors, and scissors cut paper.\033[0m" << endl;

    cout << " Enter number of rounds: ";
    cin >> rounds;

    for (int i = 0; i < rounds; i++)
    {
        cout << endl;
        phrases = rand() % 9 + 1;
        if (phrases == 1)
        {
            cout << " Be careful! A stone is falling on you!";
        }
        else if (phrases == 2)
        {
            cout << " I can already taste my victory...)";
        }
        else if (phrases == 3)
        {
            cout << " I think you're giving up, man!";
        }
        else if (phrases == 4)
        {
            cout << " Just don't be a loser, bro...";
        }
        else if (phrases == 5)
        {
            cout << " People surprise me a lot...";
        }
        else if (phrases == 6)
        {
            cout << " Do you want to complete with the computer?";
        }
        else if (phrases == 7)
        {
            cout << " Beware with scissors. Don't cut off your finger.";
        }
        else if (phrases == 8)
        {
            cout << " Do you like paper?";
        }
        else if (phrases == 9)
        {
            cout << " Beats me! Who will win?";
        }

        cout << endl << " \033[33mRound " << i + 1 << ": Choose rock (1), scissors (2), paper (3): \033[0m";
        cin >> playChoice;

        compChoice = rand() % 3 + 1;

        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "       \033[33mYou: \033[0m";
        if (playChoice == 1)
        {
            cout << "rock     ";
        }
        else if (playChoice == 2)
        {
            cout << "scissors ";
        }
        else if (playChoice == 3)
        {
            cout << "paper    ";
        }
        else
        {
            cout << "\033[31mError: Invalid choice!\033[0m" << endl;
            i--;
            phraseError = rand() % 5 + 1;
            if (phraseError == 1)
            {
                cout << " Dummy man..." << endl;
            }
            else if (phraseError == 2)
            {
                cout << " What are you trying to achieve?" << endl;
            }
            else if (phraseError == 3)
            {
                cout << " Who are the rules for?" << endl;
            }
            else if (phraseError == 4)
            {
                cout << " You're not silly, are you?" << endl;
            }
            else if (phraseError == 5)
            {
                cout << " The mistake is behind you)" << endl;
            }
            continue;
        }

        cout << "               |               \033[35mThe computer: \033[0m";
        if (compChoice == 1)
        {
            cout << "rock    " << endl;
        }
        else if (compChoice == 2)
        {
            cout << "scissors" << endl;
        }
        else
        {
            cout << "paper   " << endl;
        }


        if (playChoice == compChoice)
        {
            cout << "\033[34m Draw!\033[0m" << endl;
            draws++;
            cout << "            You: " << ++indexWin << "                  |" << "               The computer:" << ++indexWinComp << endl << endl;
            phraseDraw = rand() % 5 + 1;
            if (phraseDraw == 1)
            {
                cout << " Why is this man is equal to me?" << endl;
            }
            else if (phraseDraw == 2)
            {
                cout << " I like it better when you lose." << endl;
            }
            else if (phraseDraw == 3)
            {
                cout << " You're a little smarter than I thought." << endl;
            }
            else if (phraseDraw == 4)
            {
                cout << " Weak to beat me?" << endl;
            }
            else if (phraseDraw == 5)
            {
                cout << " Not bad." << endl;
            }
        }
        else if ((playChoice == 1 && compChoice == 2) || (playChoice == 2 && compChoice == 3) || (playChoice == 3 && compChoice == 1))
        {
            cout << "\033[32m Victory!\033[0m" << endl;
            wins++;
            cout << "            You: " << ++indexWin << "                  |" << "               The computer:" << indexWinComp << endl << endl;
            phraseWin = rand() % 5 + 1;
            if (phraseWin == 1)
            {
                cout << " I'll get the win back!" << endl;
            }
            else if (phraseWin == 2)
            {
                cout << " You're lucky." << endl;
            }
            else if (phraseWin == 3)
            {
                cout << " That's not fair." << endl;
            }
            else if (phraseWin == 4)
            {
                cout << " You're being nice." << endl;
            }
            else if (phraseWin == 5)
            {
                cout << " Are you really smart?" << endl;
            }
        }
        else
        {
            cout << "\033[31m Defeat...\033[0m" << endl;
            losses++;
            cout << "            You: " << indexWin << "                  |" << "               The computer:" << ++indexWinComp << endl << endl;
            phraseLose = rand() % 6 + 1;
            if (phraseLose == 1)
            {
                cout << " Ha-ha..." << endl;
            }
            else if (phraseLose == 2)
            {
                cout << " As always!" << endl;
            }
            else if (phraseLose == 3)
            {
                cout << " The victory of the machines))" << endl;
            }
            else if (phraseLose == 4)
            {
                cout << " I love to beat you." << endl;
            }
            else if (phraseLose == 5)
            {
                cout << " Don't be upset, darling." << endl;
            }
            else if (phraseLose == 6)
            {
                cout << " And what do you feel?" << endl;
            }
        }

    }
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\n\033[36m Game Over!\033[0m" << endl;
    cout << "\033[32m Wins: " << wins << "\033[0m | "
        << "\033[31mLosses: " << losses << "\033[0m | "
        << "\033[34mDraws: " << draws << "\033[0m" << endl;

    if (wins >= 1 || losses >= 1 || draws >= 1)
    {
        cout << "\n\033[35m Okay. You were a worthy opponent. Thanks for playing!\033[0m" << endl;
    }
    else
    {
        cout << "What have you done?";
    }
    return 0;

}