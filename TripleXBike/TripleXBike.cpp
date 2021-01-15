#include <iostream>

int main() //Main function of the application
{
    
    //This expression statement introduces the player to the game
    std:: cout << "*********************************************************************" << std::endl;
    std:: cout << "* You are a bike thief, trying to crack the lock of your next bike. *" << std::endl;
    std:: cout << "* You need to enter the correct combination to unlock the bike...   *" << std::endl;
    std:: cout << "* If you fail to open the lock, you'll end up in jail...            *" << std::endl;
    std:: cout << "*********************************************************************" << std::endl;

    //This is a declaration statement in which we declare variables
    int CodeA = 7;
    int CodeB = 2;
    int CodeC = 5;

    int CodeSum = CodeA + CodeB + CodeB;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ The bike that you've chosen to steal is tied to a lamp-post." << std::endl;
    std::cout << "+ The combination lock digits add up to: " << CodeSum << std::endl;
    std::cout << "+ The product of the digits is: " << CodeProduct << std::endl;

    int PlayerGuess;
    
    return 0;
}