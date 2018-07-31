
#include <iostream>
#include <time.h>
#include <stdlib.h>

int main(){
        int R1, R2, R3, R4, R5;
        int attempts = 0;
        srand (time(NULL));



        do {
                R1 = (rand() % 6 + 1);
                std::cout << R1 << " ";

                R2 = (rand() % 6 + 1);
                std::cout << R2 << " ";

                R3 = (rand() % 6 + 1);
                std::cout << R3 << " ";

                R4 = (rand() % 6 + 1);
                std::cout << R4 << " ";

                R5 = (rand() % 6 + 1);
                std::cout << R5 << " " << std::endl;


                if ((R1 == R2) && (R1 == R3) && (R1 == R4) && (R1 == R5)){
                        std::cout << "Yahtzee!!!! after " << attempts << " rolls";
                        break;
                }

                else {
                        attempts++;;
                }
        }
        while ((R1 != R2) || (R1 != R3) || (R1 != R4) || (R1 != R5));
}










