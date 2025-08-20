#include <iostream>

void sort(int list[], int size){

    bool swap;

    do{
        swap = false;

        int j = 0;

        for(int i = 0 ; i < size -1 - j; i++){
            if(list [i] > list[i + 1]){
                int temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                swap = true;
                j++;
            }
        }
    }while(swap);
    
}

int main(){

    int list[] = {1, 10, 4, 3, 6, 5, 8, 2, 7, 5 };
    int size = sizeof(list) / sizeof(list[0]);

    sort(list, size);

    for(int element : list){
        std::cout << element << " ";
    }

    return 0;
}