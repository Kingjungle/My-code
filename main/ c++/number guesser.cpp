#include <iostream> 


int main(){

    int guess, num;
    char answer;
    bool ok = true;

    while(ok){
        
        int tries = 0 ;
        srand(time(NULL));
        num =(rand() % 100) + 1;

        do{
            std::cout << "Enter a number" << '\n';
            std::cin >> guess;
            tries ++;

            if(guess < num){
                std::cout << "Too low" << '\n'; 
            }
            else if(guess > num){
                std::cout << "Too high" << '\n'; 
            }
            else{
                std::cout << "Guess you are right then, you got the answer in " << tries << " tries, lucky" << '\n';
            }
        }while(guess != num);

        std::cout << "Do you want to play again? (Y|N)" << '\n';
        std:: cin >> answer;

        if (answer == 'y' || answer == 'Y'){
            std::cout << "Great, lets try again" << '\n';        
        }
        else{
            ok = false;
        }
    }
    return 0;
}
    
