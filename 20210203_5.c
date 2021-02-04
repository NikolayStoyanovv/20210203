/*Задача 5. Дефиниране и използване на указател
*/
#include <stdio.h>
int main() {
    int nValue = 13;
    int *pnValue = NULL;
    pnValue = &nValue;// address of nValue is assigned to pnValue
    printf("Value = %d, *pnValue = %d, pnValue (hex) = %0x\n",nValue, *pnValue, pnValue);
    // display value using ptr variable 
    return 0;
}
