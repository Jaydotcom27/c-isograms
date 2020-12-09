
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


bool IsIsogram(char *str);


void TestIsIsogram(){
    char arg[] = "ambidextrously";
    bool result = IsIsogram(arg); 
    if (result != 1 ){
        printf("%%TEST_FAILED%% time=0 testname=TestIsIsogram (newsimpletest1) message=Is not isogram.\n", arg);
    }
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest1\n");
    printf("%%SUITE_STARTED%%\n");
    
    printf("%%TEST_STARTED%% TestIsIsogram (newsimpletest1)\n");
    TestIsIsogram();
    printf("%%TEST_FINISHED%% time=0 TestIsIsogram (newsimpletest1) \n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}

