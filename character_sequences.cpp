#include <iostream>
#include <string>
using namespace std;

// ################################
// CHARACTER SEQUENCES
// Strings *can* be initialised using character sequences,
// which is just an array of char
// Note `char`s must be wrapped with single quotes
char word[10] = { 'h', 'e', 'l' ,'l','o','\0'};

// But you can also declare arrays of character elements with
// STRING LITERALS - C STRINGS
// Sequences of characters enclosed in (") are literal constants
// Their type is, in fact, a null-terminated array of characters.
// This means they automatically end with "\0"

char wordLiteral[] = "Hello";

// These methods of defining strings are C-STRINGS which are separate
// to the library strings included in <string>
// They are interchangeable, so I guess use whatever you want.




