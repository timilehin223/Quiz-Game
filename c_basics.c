#include <stdio.h>

void introduction (){ //Return Type of Function is void cos it doesn't return anything
    printf("Welcome to the Quiz Show!\n");
    printf("-------------------------\n");
    printf("INSTRUCTIONS\n");
    printf("- This quiz game will test your knowledge on various topics.\n");
    printf("- You will be presented with a series of multiple-choice questions.\n");
    printf("- Choose the correct answer by entering the corresponding option number.\n");
    printf("- After answering all the questions, your final score will be displayed.\n");
}

int main (){
    introduction ();
    return 0;
}