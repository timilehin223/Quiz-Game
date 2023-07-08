#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define no_of_questions 20

struct options //Structure defining the multiple choice options
    {
        char A[200];
        char B[200];
        char C[200];
        char D[200];
    };

typedef struct Quest //Structure that holds the questions
{
    char question [200];
    struct options options;
    char answer;
};

void introduction (){ //Return Type of Function is void cos it doesn't return anything
    printf("Welcome to the Quiz Show!\n");
    printf("-------------------------\n");
    printf("INSTRUCTIONS\n");
    printf("- This quiz game will test your knowledge on various topics.\n");
    printf("- You will be presented with a series of multiple-choice questions.\n");
    printf("- Choose the correct answer by entering the corresponding option number.\n");
    printf("- After answering all the questions, your final score will be displayed.\n");
}

int score =0;
void userinput(int i, struct Quest block []){ //Code that asks for user's input and interacts with user. 
    char ans;
    printf("What is your answer?\n");
    scanf(" %c", &ans);
    if (ans==block[i].answer)
    {
        printf("That is correct!");
        score=score+1;
    }else{
        printf("WRONG!");
    }  
}

void scores (){ //Function that prints out scores. 
    printf("You scored %d out of %d", score, 3);
}

int i;
void cont (){ //Function containing questions and answers
    struct Quest quest1;
    strcpy (quest1.question, "Who is the author of the famous novel \"To Kill a Mockingbird\"?");
    strcpy (quest1.options.A, "A. Harper Lee");
    strcpy (quest1.options.B, "B. J.K Rowling");
    strcpy (quest1.options.C, "C. F Scott Fitzgerald");
    strcpy (quest1.options.D, "D. Charles Dickens");
    quest1.answer='A';
    struct Quest quest2;
    strcpy (quest2.question, "Which planet is known as the \"Red Planet\"?");
    strcpy (quest2.options.A, "A. Saturn");
    strcpy (quest2.options.B, "B. Jupiter");
    strcpy (quest2.options.C, "C. Mars");
    strcpy (quest2.options.D, "D. Venus");
    quest2.answer='C';
    struct Quest quest3;
    strcpy (quest3.question, "Who painted the famous artwork \"Mona Lisa\"?");
    strcpy (quest3.options.A, "A. Claude Monet");
    strcpy (quest3.options.B, "B. Leonardo da Vinci");
    strcpy (quest3.options.C, "C. Pablo Picasso");
    strcpy (quest3.options.D, "D. Vincent van Gogh");
    quest3.answer='B';

struct Quest block [3]={quest1,quest2,quest3};
for (i = 0; i < 3; i++)
    {
        printf("%s\n",block[i].question);
        printf("%s\n",block[i].options.A);
        printf("%s\n",block[i].options.B);
        printf("%s\n",block[i].options.C);
        printf("%s\n",block[i].options.D);
        userinput(i, block);
    }
}

void choice (int c){
    if (c)
    {
        cont ();
    }else{ //Exiting the programme. 
        printf("Bye!");
        exit (0);
    }
    
}



int main (){ //main function (flow of code)
    int c;
    introduction ();
    printf("Yes.Type 1/No. Type 0\n");
    scanf("%d", &c);
    choice (c);
    scores ();
    return 0;
}