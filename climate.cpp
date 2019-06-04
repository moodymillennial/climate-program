//////////////////////////////////////////////////////////////////////////////////////////////
// Author: Joshua Stromberg
// Class: CSCI140
// Assignment: Project 1, Climate Program
// Description: Program uses user input to record weather data from any number of days
// using a while loop to count how many times the user input command must be repeated
// based on how many days of data the user has. The program also uses formulas to average
// the daily max temperature and calculate the total rainfall.
//   Input: Number of days, max temp (repeats based on first input), total rainfall (based on
//   first input)
//   Output: Total rainfall for period user input, average temperature for the time period
///////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

// main program based on XCODE inputs
int main(int argc, const char * argv[]) {
    
    // print statement asking user for input
    std::cout << "How many days of weather data do you have?  ";
    int amountDays; //input storage of how many days user wants data on
    std::cin >> amountDays;
    
    int counter;  //counter for while loop to repeat
    counter = 0;  //start counter at zero
    int totalTemp;  //declare an area for all inputs of temperature to be stored
    float totalRain;  //declare an area for all inputs of rainfall to be stored
    
    while (counter < amountDays)  //while loop based on how many days user entered, triggered to end by the counter
    {
        counter++;  // add counter by integer of 1 everytime the while loop repeats
        std::cout << "What is the rainfall for day " << counter << "?  "; //ask user each day for amount of rainfall
        float amountRain; //store user rainfall input
        std::cin >> amountRain;
        
        std::cout << "What is the max temp for day " << counter << "?  "; //ask user each day for max temperature of each day
        int maxTemp; // store max temperature for each day
        std::cin >> maxTemp;
        
        totalRain += amountRain; //create a sum of all the rain amounts entered by the user
        
        totalTemp += maxTemp; //create a sum of all the temperatures entered by the user

    
    }
    
    std::cout << "The total rainfall for the period is " << totalRain << std::endl;
    //display the total rainfall based on the sum we created in the loop
    
    std::cout << "The average temperature is " << totalTemp / amountDays << std::endl;
    //display the average daily temperature based on sum of temperatures divided by the number of days input the user entered at the beginning of the program
    
    return 0;
}
