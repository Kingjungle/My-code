#include <iostream>

int main(){

    char play;

    do{

        std::string questions[] = {"What is programming?\n\nA:Making a computer do stuff\nB:The act of making arrangments according to a plan or schedule\nC:The action or process of scheduling something.\nD:The process or activity of writing computer programs",
                                "Who created c++?\n\nA:Guido van Rossum\nB:Mark Zuckerberg\nC:Bjarne Stroustrup\nD:James Gosling", 
                                "When was c++ first released?\n\nA:1991\nB:2024\nC:200 AD\nD:1989",   
                                "What type of programing language is c++?\n\nA:Imperative\nB:Object-oriented\nC:logical\nD:Functional",
                                "What level language is c++?\n\nA:A high-level language\nB:A low-level language\nC:A middle-Level language\nD:A machine language",
                                "What is c++ used for mainly?\n\nA:Network programming\nB:Developing browsers\nC:In-game programming\nD:Developing websites and software and data analysis"};

        int num = sizeof(questions) / sizeof(questions[0]);
        char ans;
        int corr = 0;

        std::cout << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        std::cout << "               QUIZ GAME               " << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        std::cout << std::endl;


        for(int i = 0; i < num; i++){

            std::cout << questions[i] << '\n';
            std::cin >> ans;
            std::cout << "---------------------------------------" << std::endl;
            std::cout << std::endl;
            
            ans = toupper(ans);

            char correctAnswers[] = {'D', 'C', 'B', 'B', 'C', 'C'};

            if (ans == correctAnswers[i]){
                std::cout << "YOU ARE CORRECT" << '\n'; 
                corr++;

            } 
            else{
                std::cout << "YOU ARE WRONG" << '\n';
            }

            std::cout << std::endl;
            std::cout << "---------------------------------------" << std::endl;
            }
        
        int score = (corr/(double)num) * 100;
        
        std::cout << std::endl;
        std::cout << "You got " << score << " %" << std::endl;
        std::cout << std::endl;

        std::cout << "Would you like to try again?(Y|N)";
        std::cin >> play;

        play = toupper(play);

    }while(play == 'Y');

    return 0;
}