#include <iostream>  

/*
hello
*/

#include <string>
#include <iomanip>
#include <cstdlib>   // Includes the C standard library, here for the system() function.
#include "MyUtilityLibrary.h"  // Include our custom utility library.

using namespace std;
using namespace utility;  // Use the namespace defined in the utility library.

// Global Attributes: They are wriiten outside of any scope
char choice;

void showMenu() 
{
    const int width = 30;  // Width of the menu box
    string border(width, '-');  // Creates a string of '-' characters

    cout << border <<  endl;
    cout << "|" <<  setw((width - 10) / 2) << "" << "MAIN MENU" << setw(((width - 10) / 2) - 1) << "" << "|" << endl;
    cout << border <<  endl;

    cout << "| 1. Start Game" <<  setw(width - 15) << "|" <<  endl;
    cout << "| 2. Load Game" <<  setw(width - 14) << "|" <<  endl;
    cout << "| 3. Instructions" <<  setw(width - 17) << "|" <<  endl;
    cout << "| 4. Quit" <<  setw(width - 9) << "|" <<  endl;

    cout << border <<  endl;
}

void clearConsole() 
{
    system("CLS");
}

void WaitForSeconds(unsigned int seconds)
{
    this_thread::sleep_for(chrono::seconds(seconds));
}

void StartGame()
{
    cout << "Loading..." << endl;
    WaitForSeconds(3);
    clearConsole();

    // Synopsis
    typewriterEffect("_An unknown virus has spread across the country. People turned into monsters and are eating each other.", 100);
    WaitForSeconds(1);
    typewriterEffect("While you and your colleagues were at your firm everything fell into chaos.", 100);
    WaitForSeconds(1);
    typewriterEffect("You have to run for your life and somehow manage to survive._\n", 100);

    // Introduction
    WaitForSeconds(1);
    typewriterEffect("Zara: Oh thank god Ben you are finally awake", 100);
    WaitForSeconds(1);
    typewriterEffect("Ben: Ugh, what happened? How long was I out for?", 100);
    WaitForSeconds(1);
    typewriterEffect("Zara: Just a couple of minutes, Jack and laura are dead! we need to get to the rooftop for help", 100);

    cout << endl << "1. Look out from the door.\n" << "2. Look for something to defend.\n";
    cin >> choice;
    
    switch (choice)
    {
    case '1':
        typewriterEffect("Ben: I can see there are two rooms both at the ends of this floor.", 100);
        WaitForSeconds(1);
        typewriterEffect("Ben: The infected are close to room 2 and room 1 seems to be clear.", 100);
        WaitForSeconds(1);
        typewriterEffect("Zara: We have no idea if there are some in the room 1.", 100);
        WaitForSeconds(1);
        typewriterEffect("Zara: We need to buy some time for the elevator so we can go up. We can also use the emergency stairs but I wont be betting for it.", 100);
        
        cout << endl << "1. Go with the Zara's plan.\n" << "2. Vote for the emergency stairs.\n";
        cin >> choice;

        switch (choice)
        {
        case '1':
            typewriterEffect("Ben: Alright, I'll calmly get out and press the elevator's button and when it arrives we will rush into it.", 100);
            WaitForSeconds(1);
        default:
            break;
        }

        break;

    default:
        break;

    }
}

void Instructions()
{
    cout << endl << "Engage with the game by entering the provided specific commands and embark on an exciting adventure. Have fun! :)" << endl;
}

void QuitGame()
{
    cout << endl << "Quitting...";
    this_thread::sleep_for(chrono::seconds(3));
}

int main() 
{
    showMenu();
    
    string command;
    bool canExitMenu = false;

    do
    {
        cout << ">";
        getline(cin, command);

        if (command == "Start Game")
        {
            StartGame();
            canExitMenu = true;
        }
        else if (command == "Load Game")
        {
            // Load Saved Game
            cout << endl << "Loading a Saved Game..." << endl;
            canExitMenu = true;
        }
        else if (command == "Instructions")
        {
            Instructions();
        }
        else if (command == "Quit")
        {
            QuitGame();
            canExitMenu = true;
        }
        else
        {
            cout << endl << "Enter a Valid Command" << endl;
        }
    } while (!canExitMenu);

    return 0;
}
