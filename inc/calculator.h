/**
 * @file calculator.h
 * @author Athul Thomas (thomasathul@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__
#include "stdlib.h"
#include "stdio.h"

typedef struct complex_t
{
    /* data */
    int real;
    int img;
} complex_t;

typedef enum error_code
{
    NULL_PTR,
    DIV_BY_ZERO,
    SUCCESS
} error_code;

/**
 * @brief Division function 
 * 
 * @param C1 Complex number 1
 * @param C2 Complex number 2
 * @param result Result variable
 * @return error_code Error code based on the status 
 */
error_code division(complex_t *, complex_t *, complex_t *);

/**
 * @brief Sum Function
 * 
 * @param C1 Complex number 1
 * @param C2 Complex number 2
 * @param result Result variable
 * @return error_code Error code based on the status 
 */
error_code sum(complex_t *, complex_t *, complex_t *);

/**
 * @brief Product Function
 * 
 * @param C1 Complex number 1
 * @param C2 Complex number 2
 * @param result Result variable
 * @return error_code Error code based on the status 
 */
error_code product(complex_t *C1, complex_t *C2, complex_t *result);

/**
 * @brief Difference Function
 * 
 * @param C1 Complex number 1
 * @param C2 Complex number 2
 * @param result Result variable
 * @return error_code Error code based on the status 
 */
error_code difference(complex_t *C1, complex_t *C2, complex_t *result);

#endif