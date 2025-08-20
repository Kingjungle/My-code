#include <iostream>
#include <ctime>
#include <cctype>

void drawGrid(char spaces[], char player, char computer);
void Player(char spaces[], char player, char computer);
void Computer(char spaces[], char computer, char player);
bool checkTie(char spaces[], char computer, char player);
bool checkWin(char spaces[], char player, char computer);

int main(){

    char player = 'X';
    char computer = 'O';
    char spaces [] = {'1','2','3','4','5','6','7','8','9'};


    while(true){

        drawGrid(spaces, player , computer);

        Player(spaces, player, computer);
        drawGrid(spaces, player , computer);

        if (checkTie(spaces, player , computer)){
            std::cout << "IT'S A TIE" << '\n';
            break;
        }
        else if (checkWin(spaces , player , computer)){
            break;
        }

        Computer(spaces, computer, player);
        drawGrid(spaces, player , computer);

        if (checkTie(spaces, player , computer)){
            std::cout << "IT'S A TIE" << '\n';
            break;
        }
        else if (checkWin(spaces , player , computer)){
            break;
        }
    }

    return 0;
}


void drawGrid(char spaces[], char player, char computer){

    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] <<  "  |" << "  " << spaces[1] <<  "  |" <<  "  " << spaces[2] <<  "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "_____|_____|______" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] <<  "  |" << "  " << spaces[4] <<  "  |" <<  "  " << spaces[5] <<  "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "_____|_____|______" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] <<  "  |" << "  " << spaces[7] <<  "  |" <<  "  " << spaces[8] <<  "  " << '\n';
    std::cout << "     |     |     " << '\n';
    
}
void Player(char spaces[], char player, char computer){

    int num;

    while(true){

        do{

        std::cout << "Pick a position to make your move: ";
        std::cin >>  num;
        num--;

        }while(!(num > -1 && num < 9));

        if(!((spaces[num]== player) || (spaces[num] == computer))){
            spaces[num] = 'X';
            break;
        }
    }
        
}

void Computer(char spaces[], char computer, char player){
        
    int comp;
    srand(time(NULL));

    while(true){

        comp = (rand() % 9);

        if(!(spaces[comp] == player || spaces[comp] == computer)){
            spaces[comp] = computer;
            break;
        }
    }
}

bool checkTie(char spaces[] ,char computer, char player ){
    for(int i = 0 ; i < 9; i ++){
        if(isdigit(spaces[i])){
            return false;
        } 
    }
    return true;
}

bool checkWin(char spaces[], char player, char computer){

    if(spaces[0] == spaces[1] && spaces[0] == spaces[2]){
        spaces[0] == player ? std::cout << "YOU WIN!" << '\n' : std::cout << "COMPUTER WINS!" << '\n';
    }
    else if(spaces[3] == spaces[4] && spaces[3] == spaces[5]){
        spaces[3] == player ? std::cout << "YOU WIN!" << '\n' : std::cout << "COMPUTER WINS!" << '\n';
    }
    else if(spaces[6] == spaces[7] && spaces[6] == spaces[8]){
        spaces[6] == player ? std::cout << "YOU WIN!" << '\n' : std::cout << "COMPUTER WINS!" << '\n';
    }
    else if(spaces[0] == spaces[3] && spaces[0] == spaces[6]){
        spaces[0] == player ? std::cout << "YOU WIN!" << '\n' : std::cout << "COMPUTER WINS!" << '\n';
    }
    else if(spaces[1] == spaces[4] && spaces[1] == spaces[7]){
        spaces[1] == player ? std::cout << "YOU WIN!" << '\n' : std::cout << "COMPUTER WINS!" << '\n';
    }
    else if(spaces[2] == spaces[5] && spaces[2] == spaces[8]){
        spaces[2] == player ? std::cout << "YOU WIN!" << '\n' : std::cout << "COMPUTER WINS!" << '\n';
    }
    else if(spaces[0] == spaces[4] && spaces[0] == spaces[8]){
        spaces[0] == player ? std::cout << "YOU WIN!" << '\n' : std::cout << "COMPUTER WINS!" << '\n';
    }
    else if(spaces[2] == spaces[4] && spaces[2] == spaces[6]){
        spaces[2] == player ? std::cout << "YOU WIN!" << '\n' : std::cout << "COMPUTER WINS!" << '\n';
    }
    else{
        return false;
    }

    return true;

}