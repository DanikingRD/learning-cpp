
/**
 * @file main.cpp
 * @author DanikingRD (danikingrd@gmail.com)
 * @version 1.0
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * 
 * Simple contact list application written in C++.
 * You can do CRUD operations with it.
 * 
 * All the content is loaded in memory, after the program is closed
 * memory will be released and data will be lost.
 */
#include <iostream>
#include <list>

/*
 * Represents a contact 
 */
class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string email;
        std::string phoneNumber;
    public:
        std::string getFirstName() {
            return firstName;
        }
        std::string getLastName() {
            return lastName;
        }
        std::string getEmail() {
            return email;
        }
        std::string getPhoneNumber() {
            return phoneNumber;
        }  
};


/*
 * Prints the available options to the terminal
 */
void showAvailableOptions() {
    std::cout << "Available Options: \n";
    std::cout << "press: \n";
    std::cout << "0 - To Exit\n"
                 "1 - To show available options.\n"
                 "2 - To add a contact to the list.\n"
                 "3 - To remove a contact from the list.\n"
                 "4 - To update a contact from the list.\n"
                 "5 - To check whether a contact exists.\n"
                 "6 - To show a contact details.\n";
}
/**
 * Reads the input from the terminal to trigger an option
 * and writes it to the buffer variable 
 * @param buffer string receiver
 */
void readLine(std::string *buffer) {
    std::cout << "Your option: ";
    std::string line;
    std::cin >> line;
    *buffer = line;
}

void addContact(Contact c) {
   // contact.push_front(c);
}
void parseContact() {
    std::cout << "Enter contact details: \n";
    std::cout << "First Name: ";
    std::string firstName;
    std::cin >> firstName;
    std::cout << "Last Name: ";
    std::string lastName;
    std::cin >> lastName;
    std::cout << "Email Address: ";
    std::string emailAddress;
    std::cin >> emailAddress;

}
int main() {
    std::cout << "Starting..." << std::endl;
    bool quit = false;
    while (!quit) {
        showAvailableOptions();
        std::string selectedOption;
        readLine(&selectedOption);
        // Converts the selected option string into an integer
        // If it fails an exception may be thrown
        try {
            int option = std::stoi(selectedOption);
            switch (option) {
                case 0: {
                    quit = true;
                    break;
                }
                case 1: continue;
                case 2: {
                    parseContact();
                    break;
                }
            }
        } catch (std::invalid_argument e) {
            std::cout << "Please enter a valid number" << std::endl;
        }

    }
    return 0;
}