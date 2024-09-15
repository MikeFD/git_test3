#include "function.h"

ElemType triple_add(ElemType a, ElemType b, ElemType c)
{
	return a + b + c;
}

ElemType divide(ElemType a, ElemType b)
{
	if (b != 0)
		return a / b;
	else return 0 ;
}

