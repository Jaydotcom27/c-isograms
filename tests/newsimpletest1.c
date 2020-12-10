
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool IsIsogram(char *str);

void TestIsogram(){
    char arg[] = "ambidestro";
    bool result = IsIsogram(arg);
    
    if (result != 1){
        printf("%%TEST_FAILED%% time=0 testname=IsIsogram (newsimpletest1) message=The word is not an isogram.\n", arg);
    }
}

void TestIsogram2(){
    char arg[] = "hola";
    bool result = IsIsogram(arg);
    
    if (result != 1){
        printf("%%TEST_FAILED%% time=0 testname=IsIsogram2 (newsimpletest1) message=The word is not an isogram.\n", arg);
    }
}

void TestIsogram3(){
    char arg[] = "AlohA";
    bool result = IsIsogram(arg);
    
    if (result != 1){
        printf("%%TEST_FAILED%% time=0 testname=IsIsogram3 (newsimpletest1) message=The word is an isogram.\n", arg);
    }
}

void TestIsogram4(){
    char arg[] = "Tendencias";
    bool result = IsIsogram(arg);
    
    if (result != 0){
        printf("%%TEST_FAILED%% time=0 testname=IsIsogram4 (newsimpletest1) message=The word is an isogram.\n", arg);
    }
}

void TestIsogram5(){
    char arg[] = "Ymerej";
    bool result = IsIsogram(arg);
    
    if (result != 0){
        printf("%%TEST_FAILED%% time=0 testname=IsIsogram5 (newsimpletest1) message=The word is an isogram.\n", arg);
    }
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest1\n");
    printf("%%SUITE_STARTED%%\n");
    
    printf("%%TEST_STARTED%% IsIsogram (newsimpletest1)\n");
    TestIsogram();
    printf("%%TEST_FINISHED%% time=0 IsIsogram (newsimpletest1) \n");
    
    printf("%%TEST_STARTED%% IsIsogram2 (newsimpletest1)\n");
    TestIsogram2();
    printf("%%TEST_FINISHED%% time=0 IsIsogram2 (newsimpletest1) \n");
    
    printf("%%TEST_STARTED%% IsIsogram3 (newsimpletest1)\n");
    TestIsogram3();
    printf("%%TEST_FINISHED%% time=0 IsIsogram3 (newsimpletest1) \n");
    
    printf("%%TEST_STARTED%% IsIsogram4 (newsimpletest1)\n");
    TestIsogram4();
    printf("%%TEST_FINISHED%% time=0 IsIsogram4 (newsimpletest1) \n");
    
    printf("%%TEST_STARTED%% IsIsogram5 (newsimpletest1)\n");
    TestIsogram5();
    printf("%%TEST_FINISHED%% time=0 IsIsogram5 (newsimpletest1) \n");
    
    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}

