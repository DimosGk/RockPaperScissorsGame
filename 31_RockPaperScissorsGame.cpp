#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You chose: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer chose: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice()
{
    char player;
    std::cout << "Rock-Paper-Scissors Game" << '\n';
    
    do
    {
        std::cout << "Choose one of the following" << '\n';
        std::cout << "************************" << '\n';
        std::cout << "'R' for Rock" << '\n';
        std::cout << "'P' for Paper" << '\n';
        std::cout << "'S' for Scissors" << '\n';

        std::cin >> player;
    } while (player != 'R' && player != 'P' && player != 'S');
    
    return player;
}

char getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num)
    {
        case 1: return 'R'; // We do not need the break statement, because when we return a value, we also break that moment.
        case 2: return 'P';
        case 3: return 'S';
    }

    return 0;
}

void showChoice(char choice)
{
    switch(choice)
    {
        case 'R': std::cout << "Rock" << '\n';
                  break;
        case 'P': std::cout << "Paper" << '\n';
                  break;
        case 'S': std::cout << "Scissors" << '\n';
                  break;
    }
}

void chooseWinner(char player, char computer)
{
    switch(player)
    {
        case 'R': if (computer == 'R')
                  {
                     std::cout << "It is a tie!" << '\n';
                  }
                  else if (computer == 'P')
                  {
                     std::cout << "You lose!" << '\n';
                  }
                  else
                  {
                     std::cout << "You win!" << '\n';
                  }
                  break;
        case 'P': if (computer == 'R')
                  {
                     std::cout << "You win!" << '\n';
                  }
                  else if (computer == 'P')
                  {
                     std::cout << "It is a tie!" << '\n';
                  }
                  else
                  {
                     std::cout << "You lose!" << '\n';
                  }
                  break;
        case 'S': if (computer == 'R')
                  {
                     std::cout << "You lose!" << '\n';
                  }
                  else if (computer == 'P')
                  {
                     std::cout << "You win!" << '\n';
                  }
                  else
                  {
                     std::cout << "It is a tie!" << '\n';
                  }
                  break;
    }
}