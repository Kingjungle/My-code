#include <iostream>

int split(int number){

    return number % 10 + (number / 10 % 10);

}

int multiplyAdd(std::string creditnumber){

    int score = 0;

    for(int i = creditnumber.size() - 2; i >= 0; i -= 2){
        score += split((creditnumber[i] - '0') * 2);
    }

    return score;
}

int addRest(std::string creditnumber){

    int score = 0;

    for(int i = creditnumber.size() - 1; i >= 0; i -= 2){
        score += (creditnumber[i] - '0');
    }

    return score;
}

int main(){

    std::string creditnumber;

    std::cout << "Please enter a credit card number: ";
    std::cin >> creditnumber;

    int calc = multiplyAdd(creditnumber) + addRest(creditnumber);

    if(calc % 10 == 0){
        std::cout << "This is a valid number";
    }
    else {
        std::cout << "This is a invalid credit card number";
    }
    return 0; 

}