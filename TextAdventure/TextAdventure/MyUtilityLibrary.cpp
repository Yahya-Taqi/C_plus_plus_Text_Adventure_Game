// THIS IS A LIBRARY WHERE ALL THE DEFINITIONS RESIDES, AS THE NAME SUGGESTS THE LIBRARY CONTAINS ALL THE DEFINITONS OF THE HEADER FILE INSTRUCTIONS.

/*
I CAN NAME THIS FILE ANYTHING I WANT, BUT FOR CLEANINESS WE TRY TO KEEP THE IMPLEMENTAION FILE NAME SAME AS THE HEADER FILE.
*/

#include "MyUtilityLibrary.h"

namespace utility 
{

    void typewriterEffect(const std::string& text, unsigned int milliseconds_per_char) 
    {
        for (char c : text)
        {
            std::cout << c << std::flush;  // Print one character without a newline
            std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds_per_char));
        }
        std::cout << std::endl;  // Move to the next line after the entire string is printed
    }

}
