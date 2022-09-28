#pragma once

typedef struct account_t* Account;

typedef enum
{
    OK,
    OVER_MAX_CREDIT_LIMIT,
    ACCOUNT_NOT_INSTANTIATED
} AccountStatus;

Account Account_create(int accountNo, double creditLimit);
AccountStatus Account_withdraw(Account self, double amount);
AccountStatus Account_deposit(Account self, double amount);
double Account_getBalance(Account self);
double Account_getCreditLimit(Account self);
int Account_getAccountNo(Account self);
void Account_destroy(Account self);
