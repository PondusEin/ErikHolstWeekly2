#include <iostream>
#include <string>
#include <limits>

int long ID;
std::string Fullname = "";
int long Salary; 
int main()
{
    std::cout << "Please enter your full name!\n";
    std::cout << "Full Name: ";
    std::getline(std::cin, Fullname);

    std::cout << Fullname << ", what is your ID?\n";
    std::cout << "ID: ";
    std::cin >> ID;

    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Invalid ID, please try again.\n\n";
        std::cout << Fullname << ", what is your ID?\n";
        std::cout << "ID: ";
        std::cin >> ID;
    } 
}

