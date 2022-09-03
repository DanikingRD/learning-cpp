#include <iostream>

/**
 * Converts Fahrenheit temperature to Celsius
 * @param f Fahrenheit value
 * @return Celsius value
 */
float convertFtoC(float f) {
    return (f - 32) * 5/9;
}
/**
 * Converts Celsius temperature to Fahrenheit
 * @param c Celsius value
 * @return Fahrenheit value
 */
float convertCtoF(float c) {
    return (c * 5/9) + 32;
}

int main() {
    std::cout << "Temperature Calculator" << std::endl;
    std::cout << "Enter" << std::endl;
    std::cout << "1 - To convert fahrenheit to celsius." << std::endl;
    std::cout << "2 - To convert celsius to fahrenheit." << std::endl;
    // Stores the selected number.
    int input = 0;
    std::cin >> input;
    // Convert fahrenheit to celsius
    if (input == 1) {
        std::cout << "Enter the temperature in fahrenheit" << std::endl;
        float fahrenheit = 0;
        std::cin >> fahrenheit;
        float output = convertFtoC(fahrenheit);
        std::cout << fahrenheit << "F " << "is " << output << "C" << std::endl;
    }
    // Convert celsius to fahrenheit
    if (input == 2) {
        std::cout << "Enter the temperature in celsius" << std::endl;
        float celsius = 0;
        std::cin >> celsius;
        float output = convertCtoF(celsius);
        std::cout << celsius << "C " << "is " << output << "F" << std::endl;
    }
    return 0;
}