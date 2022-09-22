#include <stdio.h>

#include "Account.h"


int main()
{
    Account accounts[10];

    for(int i=0;i<10;i++)
    {
        accounts[i] = Account_create(i+1,i*100);
        printf("AccountNO: %d | CreditLIMIT: %0.2f | Balance: %0.2f \n",Account_getAccountNo(accounts[i]),Account_getCreditLimit(accounts[i]),Account_getBalance(accounts[i]));
        printf("--------------------->\n");
    }

    Account_destroy(accounts);
    return 0;
}