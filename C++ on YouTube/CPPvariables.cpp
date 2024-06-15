#include <iostream> //header file that contain functions for basic input and out put operations

// type in the main function
int main(){
    // variables
    // int x; // declaration integer
    // x = 5; // assignment
    int x = 5;
    int y = 6;
    int sum = x + y;
    
    // Print x, y, and sum
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5; //truncated 7.5 will be 7

    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n';

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 98.5;

    std::cout << price << '\n';
    std::cout << gpa << '\n';
    std::cout << temperature << '\n';

    // single character
    char grade = 'A';
    char initial = 'C'; //  can only store a single character
    char currency = '$';

    std::cout << grade << '\n';
    std::cout << initial << '\n';
    std::cout << currency << '\n';

    // Boolean (true or false)
    bool student = false; // false is 0
    bool power = true; // true is 1
    bool forSale= true;

    std::cout << student << '\n';
    std::cout << power << '\n';
    std::cout << forSale << '\n';

    // string (objects that represents a sequence of text)
    std::string name = "Prem";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "789 Joe St.";

    std::cout << name << '\n';
    std::cout << day << '\n';
    std::cout << food << '\n';
    std::cout << address << '\n';

    // string literal
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old\n";
 
    return 0; // return 0 mean that the in no problem in the function
}
