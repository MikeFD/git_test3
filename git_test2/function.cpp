#include "function.h"


ElemType add(ElemType a, ElemType b) {
    return a + b;
}



ElemType triple_minus(ElemType a, ElemType b, ElemType c)
{
	return a - b - c;

}

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


ElemType times(ElemType a, ElemType b)
{
	return a * b;
}

int jyk(int a, int b){
    return a * b;
}