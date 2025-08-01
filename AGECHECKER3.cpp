#include <iostream> //IMPORT FOR PRINT AND ALLAT
#include <string> //IMPORT FOR STRING
#include <limits>//IMPORT FOR LIMITS OR SOME

double getValidAge() {
    double age;
    while (true) {
        std::cout << "What is your age? ";
        std::cin >> age;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//IMPORT LIMITS FOR THIS OTHERWISE IF AGE=LETTER OR PHRASE EVERYTHING FREAKS OUT
            std::cout << "Invalid input. Enter a number.\n";
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return age;    
        }
    }
}



int main(){

    char choice;

    while (true) {
        std::cout << "\n=== Main Menu ===\n";
        std::cout << "1. Check Age\n";
        std::cout << "2. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;
    
        if (choice=='1'){

            double age = getValidAge();

            if (age > 150) {
                std::cout << "Eternal welcome...\n";
            }

        

            else if (age >= 18){
                std::cout << "Welcome...\n";
        }   

            else if (age<18){
        
            if(age>0){
                std::cout << "Access denied...\n";
        }   
            else if (0>=age){
                std::cout << "You aren't even born yet, phantom.\n";

             }
                }

 
        }


        else if (choice=='2'){
            break;
        }
        else{
            std::cout << "ERROR";
        } 
   }

}
