// THIS IS A HEADER FILE, AS THE NAME SUGGESTS IT ONLY CONTAINS THE HEADERS (DECLARATIONS) OF THE INSTRUCTIONS

#pragma once
#include <string>
#include <chrono>
#include <thread>
#include <iostream>


/*
Definition: A namespace is essentially a declarative region that provides a scope to the identifiers (the names of types, functions,
variables, etc.) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur
especially when your code base includes multiple libraries.

Syntax: You define a namespace using the namespace keyword, followed by the namespace name and a block of code:
namespace myNamespace 
{
    // Code declarations
}
*/


namespace utility
{
    void typewriterEffect(const std::string& text, unsigned int milliseconds_per_char);
}