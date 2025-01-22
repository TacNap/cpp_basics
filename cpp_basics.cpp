#include <iostream>
#include <string>
#include "bar_object.h" // Only need to include the header file

// Functions
    // Must be defined before being used
void strings() {
    std::cout << "Strings!" << std::endl;
    std::string newString = "I Love"; // Needs an 'endline'
    std::string otherString = " Concatenation";

    // Concatenation
    std::cout << newString + otherString << std::endl;
    std::cout << newString + " Tanja" << std::endl;

    // Built-in String Functions
    std::cout << "String Length: " << newString.length() << std::endl;

    // Mutating Strings
    newString.append (" Tanja");
}

void references() {
    std::cout << "References!" << std::endl;
    std::string actualString = "FooBar";
    std::string& refString = actualString; // Assigns a reference to actualString
    refString += ", Hello!"; // Mutates 'actualString' through the reference
    std::cout << refString << std::endl << actualString << std::endl;
    std::cout << "refString value, which is actualString's address: "<< &refString << std::endl;
}

void printing() {
    std::cout << "Printing!" << std::endl;
    printf("Printf is more performant in some unique cases, but generally less safe");
    std::cout << std::endl << "Printing with `cout` is preferred in most cases" << std::endl;

}

void parameters(int x = 5, int y = 4) {
    std::cout << "Parameters!" << std::endl;
    std::cout << "Defaults for parameters must be defined after parameters with no defaults" << std::endl;
    std::cout << x + y;
}

void types() {
    std::cout << "Data Types!" << std::endl;
    std::cout << "C++ contains many MANY different data types" << std::endl;

}

void classes() {
    std::cout << "Classes!" << std::endl;
    // Class Declaration
    class Person {
    private:
        // Member Variables
        std::string name;
        int age;

    public:
        // Constructor
        Person(std::string n, int a) {
            name = n;
            age = a;
        }

        // Member Functions
        void introduce() {
            std::cout << "I'm alive! and my name is " << name << std::endl;
        }

        // Getter Methods
        std::string getName() {
            return name;
        }

        // Setter Methods
        void setName(std::string n) {
            name = n;
        }

        int getAge() {
            return age;
        }
    };

    // Object Instatiation
    Person joe("Joe", 32);

    joe.introduce();
    std::string personName = joe.getName();
    std::cout << personName << std::endl;
    joe.setName("NoLongerJoe");
    std::cout << joe.getName() << std::endl;
}

void imported_classes() {
    // Constructor Implementation
    std::cout << "Imported Classes!" << std::endl;
    Bar barOne(256, 250, 260, 240);
    std::cout << "Range: " << barOne.range() << std::endl;
    std::cout << "Get Open: " << barOne.getOpen() << std::endl;
    std::cout << "Get Close: " << barOne.getClose() << std::endl;


}
int main() { // Entry point of every program
    strings();
    std::cout << std::endl;
    references();
    std::cout << std::endl;
    printing();
    std::cout << std::endl;
    parameters(5, 10);
    std::cout << std::endl;
    types();
    std::cout << std::endl;
    classes();
    std::cout << std::endl;
    imported_classes();
    std::cout << std::endl;

    return 0;
}

