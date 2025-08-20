#include <iostream>
#include <cmath>
#include <ctime>


/*
// funtion template 

template<typename T, typename U>

auto max(T x , U y){
    return (x > y) ? x : y;
}



void happyBirthday(){
      std::cout << "Happy birthday to you \n";
}



struct student{
    std::string name;
    double gpa;
    bool enrolled;
};


class Student{ // only difference between a struct and a class is classes support functions 
    public:
        std::string name;
        double gpa;
        bool enrolled;
};

*/
int main() {
/*

    double a = 3;
    double b = 4;
    double z;
    double x = 3.4049;

    /* MATH

    z = std::min(a,b);
    z = std::max(a,b); // the maximun number
    std::cout << z << '\n';
    z = round(a);
    z = pow(2, 4);
    z = abs(-3);
    z = sqrt(9);
    z = ceil(x); // rounds up
    z = floor(x)
    */

    //TYPE CONVERSION
/*
    int correct = 8;
    int question = 10;
    double score = correct/(double)question * 100;
    std::cout << score << "%" << '\n';

    int students = 20;
    int remainder = students % 3; // finds remainder
    std::cout << remainder << '\n';

    // COMMENTS 

    /* This 
        is 
        a 
        multi-line 
        comment 
    */

    // VARIABLES AND DECLARATION 

   // intagers(whole numbers variable)
 /*  
   int h; //declaration 
   x = 5; //assignment

   int y = 4; // quick way to declare
   int sum = h + y;

   // double(number incuding decimals)

   double year =  365.25;

   //char (single character) 

   char grade = 'A';

   // boolean (true or fals)

   bool coder = true;

   // string(obejects that represent a sequence of text)

   std::string game = "Fifa";

   // CONSTANTS

   const double PI = 3.141592653; /* const tells the compiler to prevent anything from modifying this variable
                                     it is comman naming convention to name consants with capital letters */
/*
   double radius = 10;
   double circumference = 2 * PI * radius;

   std::cout << circumference << "cm" << '\n';

   // PRINT STATMENTS 

   std::cout << "Hello, world!" << '\n';

   std::cout << x << '\n';
   std::cout << y << '\n';
   std::cout << sum << '\n';

   // CHARACTER INPUT

   std::string name;
   int age;

   std::cout << "What is your full name?: " ;
   std::getline(std::cin >> std::ws, name); /* store imput into variable 
                                               This is used when user input has spaces */
/*
   std::cout << "What is your age: ";
   std::cin >> age;

   std::cout << "Hello " << name << '\n';
   std::cout << "You are " << age;


*/

/*
    // IF STATMENTS 

    int age;

    std::cout << "Enter your age:";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Your soooo old";
    }

    else if (age < 0) {
        std::cout << " you still in your dad's balls";

    }
    else{
        std::cout << "you are a baby";
    }

    int month;
    std::cout << "Enter the month(1-12):";
    std::cin >> month;


    // SWITCHES 

    /*

    switch(month){
        
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;

        case 3:
            std::cout << "It is March";
            break;

        case 4:
            std::cout << "It is April";
            break;
        
        default:
            std::cout << "please enter a number stated in the range";

    }



    // TERNARY OPERATOR

    int grade = 75;

    grade >= 60 ? std::cout << "YOU PASSED"  : std::cout << "YOU FAILED";

    // && = check if two conditions are true
    // || = check if at least one of the conditions is treu
    // || = reverses the logical stateofits operand


    std::string name;

    while(name.empty()){
        std::cout << "enter your name";
        std::getline(std::cin,name);
    }

    int number;

    do{
        std::cout << "Enter a positive number:";
        std::cin >> number;
    }while(number < 0);


    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue;
        }
        std::cout << i << std::endl;

    }
    

    int rows, columns;
    char character;

    std::cout << "Enter number of rows" << std::endl;
    std::cin >> rows;

    std::cout <<"Enter number of columns" << std::endl;
    std::cin >> columns;

    std::cout << "What type of character would you like to use" << std::endl;
    std::cin >> character;

    for (int i = 1; i <= rows; i ++ ){
            for (int j = 1; j <= columns; j ++ ){
                std::cout << character;
            }
            std::cout << "\n";
    }

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';



// FUNCTIONS 

    happyBirthday();



// ARRAYS

    std::string car[] ={"car", "bus", "train"};

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';
    
// FOREACH LOOP

    std::string students[] = {"chris", "paul", "john"};

    for(std::string student : students){
        std::cout << student << '\n';
   }



// Fill 

// fill(begin, end, value)

    std::string foods[99];

    fill(foods, foods + (99/3), "pizza");
    fill(foods + (99/3),  foods + (99/3)*2, "hamburher");
    fill(foods + (99/3)*2, foods + 99, "hotdogs");


    for(std::string food : foods){
        std::cout << food << '\n';
    }


//POINTERS 



    std::string name = "bro";

    std::string *pName = &name;

    std::cout << *pName;

    int *ptr = nullptr;
    int x = 123;
 
    ptr = &x;

    

//DYNAMIC MEMORY

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum;

    

// STRUCT

    student student1;
    student1.name = "Chrsitian";
    student1.gpa = 4.0;
    student1.enrolled = true;

    */

// enums

    enum Day{ monday, tuesday, friday, sunday};

    Day today = sunday;

    switch(today){

        case monday: std::cout << "ohhh noooo its monday" << '\n';
                      break;
        case tuesday: std::cout << "we getting on" << '\n';
                      break;
        case friday: std::cout << "yay firday" << '\n';
                      break;
        case sunday: std::cout << "we start again" << '\n';
                      break;
    }



    return 0;




}
