#include <stdio.h>

void get_name(char name[]){
    printf("Who would you like to welcome? ");
    scanf("%s", name);
}

void welcome(char name[]){
    printf("Hello %s!\n", name);
}

// say hello to whoever you want!
int main() {
    char name[20]; // allocate 20 characters to a character array
    get_name(name); // get user defined name
    welcome(name); // print "Hello name" to the standard output
    return 0;
}
