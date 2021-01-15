#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
     //This expression statement introduces the player to the game
    std:: cout << "\n\n*********************************************************************\n";
    std:: cout << "* You are a bike thief, trying to crack the lock of your next bike. *\n";
    std:: cout << "* You need to enter the correct combination to unlock the bike...   *\n";
    std:: cout << "* If you fail to open the lock, you'll end up in jail...            *\n";
    std:: cout << "* The bike has a level " << Difficulty << " lock.                                      *\n";
    std:: cout << "*********************************************************************\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    //This is a declaration statement in which we declare variables
    int CodeA = rand() % Difficulty + Difficulty;
    int CodeB = rand() % Difficulty + Difficulty;
    int CodeC = rand() % Difficulty + Difficulty;

    int CodeSum = CodeA + CodeB + CodeB;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "\n+ The bike that you've chosen to steal is tied to a lamp-post.";
    std::cout << "\n+ The combination lock digits add up to: " << CodeSum;
    std::cout << "\n+ The product of the digits is: " << CodeProduct;

    int GuessA, GuessB, GuessC;

    //Asking the player for their input
    std::cout << "\n\nWhat do you think the first number is? ";
    std::cin >> GuessA;
    std::cout << "\n- You fumble around with the lock and enter the number " << GuessA << ". Two more to go. -";
    std::cout << "\n\nWhat do you think the second number is? ";
    std::cin >> GuessB;
    std::cout << "\n- With a twist of the second digit, you pick " << GuessB << ". One more to go. -\n";
    std::cout << "\nWhat do you think the last number is? ";
    std::cin >> GuessC;
    std::cout << "\n- This is it...almost there. You pick " << GuessC << " as the last number. -\n";

    int GuessSum = GuessA + GuessB + GuessB;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Checks that the players input is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << "\nYour hands yank on the lock and...it UNLOCKS!\n\n";
        std::cout << "*** HEY YOU! STOP! You grab the bike and ride away before you're caught. Whew! ***\n";
        return true;
    } else { //or incorrect
        std::cout << "\nYour hands yank on the lock and...it stays locked!\n\n";
        std::cout << "***               HEY YOU! STOP!                   ***\n\n";
        std::cout << "*** PUT YOUR HANDS UP! YOU'RE GOING TO JAIL, PUNK! ***\n";
        return false;
    }
}

int main() //Main function of the application
{
    srand(time(NULL)); //create a new random sequence based on the time of day
    
    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) //Loop until all level difficulties are played
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); //Discards the buffer

        if (bLevelComplete)
        {
            //Increase the difficulty
            ++LevelDifficulty;
        } else {
            return 0;
        }
    }
    std::cout << "CONGRATULATIONS! You're a successful thief! Your parents must be so proud.";
    return 0;
}