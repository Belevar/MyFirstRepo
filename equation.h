#include "add.h"
#include "multiply.h"
#include "pow.h"

double equation()
{
	return pow(add(multiply(2,2), 4) , 3); 
}
