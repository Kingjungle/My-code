#include <iostream>

int checkArray(std::string food[], int size, std::string foodchk){

    for(int i = 0; i < size; i++){
        if (food[i] == foodchk){
            return i;
        }
    }
    return -1;
}

int main(){

    std::string food[] = {"pizza", "ugali", "chapati", "rice", "chips", "chicken", "fish", "sand witch", "mashed potatoes", "sala"};
    int size = sizeof(food) / sizeof(std::string);
    std::string foodchk;

    std::cout << "What food would you like to check for?: ";
    std::getline(std::cin, foodchk);

    int index = checkArray(food, size, foodchk);

    if (index != -1){
        std::cout << "Yes, the food " << foodchk << " does exist in the array and is index number " << index ;
    }

    else{
        std::cout << "The food entered is not contained in the array ";
    }

    return 0;
}