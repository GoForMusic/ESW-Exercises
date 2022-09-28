#include "Account.h"

#include <setjmp.h>
#include <stdlib.h>

typedef struct account_t
{
    int accountNo;
    double creditLimit;
    double balance;
};

Account Account_create(int accountNo, double creditLimit)
{
    //construct memory
    Account _newAccount = calloc(sizeof(Account), 1);

    if (NULL == _newAccount)
    {
        return NULL;
    }
    //--->

    _newAccount->accountNo = accountNo;
    _newAccount->creditLimit = creditLimit;
    _newAccount->balance = 0;

    return _newAccount;
}

void Account_destroy(Account self)
{
    if (NULL == self)
    {
        free(self);
    }
}

AccountStatus Account_withdraw(Account self, double amount)
{
    if (NULL == self) return ACCOUNT_NOT_INSTANTIATED;
    self->balance -= amount;
    return OK;
}

AccountStatus Account_deposit(Account self, double amount)
{
    if (NULL == self) return ACCOUNT_NOT_INSTANTIATED;
    double check = amount + self->balance;
    if (check > self->creditLimit) return OVER_MAX_CREDIT_LIMIT;
    self->balance += amount;
    return OK;
}

double Account_getBalance(Account self)
{
    return self->balance;
}

double Account_getCreditLimit(Account self)
{
    return self->creditLimit;
}

int Account_getAccountNo(Account self)
{
    return self->accountNo;
}
