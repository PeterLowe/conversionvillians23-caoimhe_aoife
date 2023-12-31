// Leader: Caoimhe O'Brien 
// Second in Command: Aoife Leahy

#include <iostream>

char printMenu(); // function prototype. 
float degreesToRadians(float userInput); // Leader first conversion prototype
float fahrenheitToCelsius(float userInput); // written by second in command
float stoneandpoundsToKilograms(float userInput); // written by second in command
float centimetersToFeetAndInches(float userInput); // Leader conversion prototype
float litrestoGallons(float userInput); // Leader conversion prototype

int main()
{
    char menuOption = ' '; 
    menuOption = printMenu();// holds user option from the menu function 
    float userInput = 0.0f; // holds what the user wants to convert
    float answer = 0.0f; // holds the output for any of the conversions 
    if (menuOption == 'A')
    {
        std::cout << "\nYou would like to convert: from degrees to radians. \n \n" << std::endl; 
        std::cout << "Please enter your measurement in degrees: "; 
        std::cin >> userInput;
        answer = degreesToRadians(userInput);
        std::cout << "Your measurement is now: " << answer << std::endl;
    }
    else if (menuOption == 'B')
    {
        std::cout << "\nYou would like to convert: from centimeters to feet & inches. \n \n" << std::endl;
        std::cout << "Please enter your measurenment in centimeters: ";
        std::cin >> userInput;
        answer = centimetersToFeetAndInches(userInput);
        std::cout << "Your measurement is now: " << answer << std::endl;
    }
    else if (menuOption == 'C')
    {
        std::cout << "\nYou would like to convert: from litres to imperial gallons. \n \n" << std::endl;
        std::cout << "Please enter your measurenment in litres: ";
        std::cin >> userInput;
        answer = litrestoGallons(userInput);
        std::cout << "Your measurement is now: " << answer << std::endl;
    }
    else if (menuOption == 'f')
    {
        std::cout << "You would like to convert: fahrenheit to celsius. \n \n" << std::endl;
        std::cout << "Please enter your measurement in fahrenheit: ";
        std::cin >> userInput;
        answer = fahrenheitToCelsius(userInput);
        std::cout << "Your measurement is now: " << answer << std::endl;
    }
	return 1;
}

char printMenu() // written by leader
{
    char choice = ' ';// user input  choice
    std::cout << "Please enter a upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
    std::cout << "[A] Degrees---<--->---Radians        [a]" << std::endl;
    std::cout << "[B] Centimeters-<--->--Feet & Inches  [b]" << std::endl;
    std::cout << "[C] Litres---<--->---Gallons        [c]" << std::endl;
    std::cout << "[D] Mpg---------<--->---L/100km        [d]" << std::endl;
    std::cout << "[E] Kilograms---<--->---Stone   & Pounds [e]" << std::endl;
    std::cout << "[F] Celsius---<--->---Fahrenheit     [f]" << std::endl;
    std::cout << "[Q] Exit------[---]----Exit           [q]" << std::endl;
    std::cout << "Enter your Choice : ";
    std::cin >> choice;
    return choice;
}

float degreesToRadians(float t_userInput)// done by leader
{
    float answer = 0.0f; 
    const float CONVERSION_RATE = 57.2957795; 
    answer = t_userInput / CONVERSION_RATE; // conversion formula from google 

    return answer;
}

float centimetersToFeetAndInches(float t_userInput) // done by leader
{
    float answer = 0.0f;
    const float CONVERSION_RATE = 2.54;
    answer = t_userInput / CONVERSION_RATE; // conversion rate formula from google 
    return answer;
}

float litrestoGallons(float t_userInput)
{
    float answer = 0.0f;
    const float CONVERSION_RATE = 4.546092; 
    answer = t_userInput / CONVERSION_RATE;
    return answer; 
}

float fahrenheitToCelsius(float t_userInput)
{
    float answer = 0.0f;
    answer = (t_userInput - 32 / 1.8); // conversion formula from google
    return answer;

}

float stoneandpoundsToKilograms(float t_userInput)
{
    float answer = 0.0f;
    const float CONVERSION_RATE = 6.35;
    answer = t_userInput / CONVERSION_RATE; // conversion formula from google

    answer = (t_userInput - 32 / 1.8);
    return answer;

}