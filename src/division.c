#include "calculator.h"

error_code division(complex_t *C1, complex_t *C2, complex_t *result)
{
    if (NULL == C1 || NULL == C2 || NULL == result)
        return NULL_PTR;

    if (C1->real == 0 || C1->img == 0 || C2->real == 0 || C2->img == 0)
        return DIV_BY_ZERO;

    result->real = (C1->real * C2->real) + (C1->img * C2->img) / ((C2->real * C2->real) + (C2->img * C2->img));
    result->img = (C1->img * C2->real) - (C1->real * C2->img) / ((C2->real * C2->real) + (C2->img * C2->img));

    return SUCCESS;
}