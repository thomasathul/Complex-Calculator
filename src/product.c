#include "calculator.h"

error_code product(complex_t *C1, complex_t *C2, complex_t *result)
{
    if (NULL == C1 || NULL == C2 || NULL == result)
        return NULL_PTR;

    result->real = (C1->real * C2->real) - (C1->img * C2->img);
    result->img = (C1->img * C2->real) + (C1->real * C2->img);

    return SUCCESS;
}