#include <stdio.h>

//Function for print out arguments
//You can use this function to extract arguments and process it one after the other

void print_arguments(int argc, char *argv[]){
    int i = 1;

    for(i; i < argc; i++){
        printf("Arguments: %s\n", argv[i]);
    }
}

int main(int argc, char *argv[]){
    print_arguments(argc, argv);

    return 0;
}
