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

    int GuessA, GuessB, GuessC;

    std::cout << std::endl;
    std::cout << "What do you think the first number is? ";
    std::cin >> GuessA;
    std::cout << std::endl;
    std::cout << "- You fumble around with the lock and enter the number " << GuessA << ". Two more to go. -" << std::endl;
    std::cout << std::endl;
    std::cout << "What do you think the second number is? ";
    std::cin >> GuessB;
    std::cout << std::endl;
    std::cout << "- With a twist of the second digit, you pick " << GuessB << ". One more to go. -" << std::endl;
    std::cout << std::endl;
    std::cout << "What do you think the last number is? ";
    std::cin >> GuessC;
    std::cout << std::endl;
    std::cout << "- This is it...almost there. You pick " << GuessC << " as the last number. -" << std::endl;

    int GuessSum = GuessA + GuessB + GuessB;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << std::endl;
        std::cout << "Your hands yank on the lock and...it UNLOCKS!" << std::endl << std::endl;
        std::cout << "*** HEY YOU! STOP! You grab the bike and ride away before you're caught. Whew! ***" << std::endl;
    } else {
        std::cout << std::endl;
        std::cout << "Your hands yank on the lock and...it stays locked!" << std::endl << std::endl;
        std::cout << "***               HEY YOU! STOP!                   ***" << std::endl << std::endl;
        std::cout << "*** PUT YOUR HANDS UP! YOU'RE GOING TO JAIL, PUNK! ***" << std::endl;
    }

    return 0;
}