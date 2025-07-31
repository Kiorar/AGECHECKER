#include <iostream> //IMPORT FOR PRINT AND ALLAT
#include <string> //IMPORT FOR STRING


int main(){
    double age;

    std::cout << "What is your age? \n";
    std::cin >> age;

     if (age > 150) {
        std::cout << "You're a lich. Eternal welcome...\n";
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