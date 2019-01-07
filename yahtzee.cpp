
#include <iostream>
#include <time.h>
#include <stdlib.h>

int main(){
        int R1, R2, R3, R4, R5;  //creates 5 variabless representing dice
        int attempts = 0;        //counter for number of rolls
        srand (time(NULL));



        do {
                R1 = (rand() % 6 + 1);  //generates a random number between 1 and 6 stored in r1 - r5
                std::cout << R1 << " ";

                R2 = (rand() % 6 + 1);
                std::cout << R2 << " ";

                R3 = (rand() % 6 + 1);
                std::cout << R3 << " ";

                R4 = (rand() % 6 + 1);
                std::cout << R4 << " ";

                R5 = (rand() % 6 + 1);
                std::cout << R5 << " " << std::endl;


                if ((R1 == R2) && (R1 == R3) && (R1 == R4) && (R1 == R5)){   //checks if all dice are equal
                        std::cout << "Yahtzee!!!! after " << attempts << " rolls";
                        break;
                }

                else {
                        attempts++;;
                }
        }
        while ((R1 != R2) || (R1 != R3) || (R1 != R4) || (R1 != R5));  //loops if dice are not all equal
}










