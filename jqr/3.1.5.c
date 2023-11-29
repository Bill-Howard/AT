#include <stdint.h>
//#include "../include/operators.h"

/*
    Demonstrate the ability to perform basic arithmetic operations 
    using appropriate C operators while ensuring proper order of
    operations (PEMDAS)
*/

//Complete the function below to add
//the arguments and return the sum
uint32_t question_a(uint32_t arg_1, uint32_t arg_2) {
    //Student's code here
    uint32_t result = 0;
    result = arg_1 + arg_2;
    return result;
}

//Complete the function below to subtract
//the arguments and returnt the result
//"first minus second"
uint32_t question_b(uint32_t arg_1, uint32_t arg_2) {
    //Student's code here
    return arg_1 - arg_2;
}

//Complete the function below to multiply
//the arguments and return the product
uint32_t question_c(uint32_t arg_1, uint32_t arg_2) {
    //Student's code here
    return arg_1 * arg_2;
}

//Complete the function below to divide
//the arguments and return the result
//"first divided by second"
uint32_t question_d(uint32_t arg_1, uint32_t arg_2) {
    //Student's code here
    uint32_t result = 0;
    if (arg_2 != 0) {
        result = arg_1 / arg_2;
    }
    return result;
}

//Complete the function below to modulo
//the arguments and return the result
//"first modulo second"
uint32_t question_e(uint32_t arg_1, uint32_t arg_2) {
    //Student's code here
    return  arg_1 % arg_2;
}

//Complete the function below to increment
//the argument and return the result
uint32_t question_f(uint32_t arg_1) {
    //Student's code here
    return ++arg_1;
}

//Complete the function below to decrement
//the argument and return the result
uint32_t question_g(uint32_t arg_1) {
    //Student's code here
    return --arg_1;
}