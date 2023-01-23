#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>


using namespace std;

#define MAX_NAME_LENGTH 60

int main() {
    string name;

    printf("Please enter your anime name: \n");
    getline(cin, name);

    printf("Hello, %s!\n", name.c_str());
    return 0;
}
