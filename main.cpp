#include <iostream>
#include <string>
#include "bar_object.h"
using namespace std;

void strings() {
    std::cout << "Strings!" << std::endl;
    std::string newString = "I Love";
    std::string otherString = " Concatenation";

    std::cout << newString + otherString << std::endl;
    std::cout << newString + " Tanja" << std::endl;

    std::cout << "String Length: " << newString.length() << std::endl;

    newString.append (" Tanja");
}

void references() {
    std::cout << "References!" << std::endl;
    std::string actualString = "FooBar";
    std::string& refString = actualString;
    refString += ", Hello!";
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

void variables() {
    std::cout << endl << "Variables!" << std::endl;

    int a, b;
    a = 10;
    cout << b << endl;

    int Aa, Bb = 3;
    Aa = 2 + (a = 5);

    a = b = Aa = 5;

    a = 10%2;
    a += 1;
    cout << a++ << endl;
    cout << ++a << endl;

    cout << (1 == 2) << endl;
    cout << (1 != 2) << endl;
    cout << ((1 == 2) && (1 == 1)) << endl;
    
    bool x_condition = true;
    int y = x_condition ? 1 : 0; 
    cout << y << endl;
}

void classes() {
    std::cout << "Classes!" << std::endl;
    class Person {
    private:
        std::string name;
        int age;

    public:
        Person(std::string n, int a) {
            name = n;
            age = a;
        }

        void introduce() {
            std::cout << "I'm alive! and my name is " << name << std::endl;
        }

        std::string getName() {
            return name;
        }

        void setName(std::string n) {
            name = n;
        }

        int getAge() {
            return age;
        }
    };

    Person joe("Joe", 32);

    joe.introduce();
    std::string personName = joe.getName();
    std::cout << personName << std::endl;
    joe.setName("NoLongerJoe");
    std::cout << joe.getName() << std::endl;
}

void imported_classes() {
    std::cout << "Imported Classes!" << std::endl;
    Bar barOne(256, 250, 260, 240);
    std::cout << "Range: " << barOne.range() << std::endl;
    std::cout << "Get Open: " << barOne.getOpen() << std::endl;
    std::cout << "Get Close: " << barOne.getClose() << std::endl;
}

void character_sequences() {
    std::cout << "Character Sequences!" << std::endl;
    
    char word[10] = { 'h', 'e', 'l' ,'l','o','\0'};
    char wordLiteral[] = "Hello";

    cout << wordLiteral << endl;
    cout << wordLiteral[1] << endl;
    wordLiteral[1] = 'R';
    cout << wordLiteral << endl;
}

void loops() {
    std::cout << "Loops!" << std::endl;
    
    int v[] = {11, 22, 33, 44};

    for (auto i : v) {
        i += 10;
    }

    for (auto& i : v) {
        i += 10;		
    }
    
    cout << "Array after modification: ";
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void pointers() {
    std::cout << "Pointers!" << std::endl;
    
    int x = 3;
    cout << "x: " << x << endl;

    int* y = &x;
    cout << "Address of x: " << y << endl;

    int& z = x;
    cout << "Reference z: " << z << endl;

    z++;
    cout << "After z++, z: " << z << endl;
    cout << "After z++, x: " << x << endl;
}

int main() {
    cout << "=== C++ Learning Demonstrations ===" << endl << endl;
    
    strings();
    cout << endl;
    
    references();
    cout << endl;
    
    printing();
    cout << endl;
    
    parameters(5, 10);
    cout << endl;
    
    variables();
    cout << endl;
    
    classes();
    cout << endl;
    
    imported_classes();
    cout << endl;
    
    character_sequences();
    cout << endl;
    
    loops();
    cout << endl;
    
    pointers();
    cout << endl;

    return 0;
}