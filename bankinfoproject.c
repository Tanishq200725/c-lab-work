//write a program to display the banking service with the following options
//1 enquiry
//2 open account
//3 closed acoount
//4deposit money
//5 withdraw money
//6 display balance
//7 display transactions
//8 identify defaulters
//use file handaling concept to store the data
#include<stdio.h>
#include<string.h>
char choice;
int phoneNo[10];
printf("enter choice if the services are enough:");
scanf(" %c",&choice);
if (choice=='y'|| choice=='Y') {
    printf("account created successfully\n");
struct Account {
    int accountNumber;
    char name[50];
    float balance;
};
void openAccount() {
    struct Account acc;
    FILE *fp = fopen("bankinfo.txt", "a");
    if (fp==NULL) {
        printf("file not found\n");
    }
    else{
    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNumber);
    printf("Enter Name: ");
    scanf("%s", acc.name);
    printf("Enter Initial Deposit: ");
    scanf("%f", &acc.balance);

    fprintf(&acc, sizeof(struct Account), 1, fp);
    fclose(fp);
    printf("Account created successfully.\n");
    }
}   
void disptransaction() {
    struct Account acc;
    FILE *fp = fopen("bankdata.txt", "r");
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Account Details ---\n");
    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        printf("Account No: %d\n",acc.accountNumber);
        printf("account holder:%s\n",acc.name);
        printf("balance:%.2f\n",acc.balance);
        printf("-----------------------\n");
    }
    fclose(fp);
}
void depositMoney() {
    int accNo;
    float amount;
    struct Account acc;
    FILE *fp = fopen("bankinfo.txt", "r+");
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);

    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        if (acc.accountNumber==accNo) {
            acc.balance =acc.balance+ amount;
            fseek(fp, sizeof(struct Account), SEEK_SET);
            fprintf(&acc, sizeof(struct Account), 1, fp);
            printf("Money deposited successfully.\n");
            fclose(fp);
            return;
        }
    }

    printf("Account not found.\n");
    fclose(fp);
}
void withdrawMoney() {
    int accNo;
    float amount;
    struct Account acc;
    FILE *fp = fopen("bankinfo.txt", "r+");
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);

    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        if (acc.accountNumber == accNo) {
            if (acc.balance< amount) {
                printf("Insufficient balance.\n");
                fclose(fp);
                return;
            }
            acc.balance =acc.balance-amount;
            fseek(fp, sizeof(struct Account), SEEK_SET);
            fprintf(&acc, sizeof(struct Account), 1, fp);
            printf("Money withdrawn successfully.\n");
            fclose(fp);
            return;
        }
    }

    printf("Account not found.\n");
    fclose(fp);
}
void displayBalance() {
    int accNo;
    struct Account acc;
    FILE *fp = fopen("bankinfo.txt", "r");
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        if (acc.accountNumber == accNo) {
            printf("Current Balance: %.2f\n", acc.balance);
            fclose(fp);
            return;
        }
    }

    printf("Account not found.\n");
    fclose(fp);
}

void depositMoney() {
    int accNo;
    float amount;
    struct Account acc;
    FILE *fp = fopen("bankdata.txt", "r+");
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);

    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        if (acc.accountNumber==accNo) {
            acc.balance=acc.balance+amount;
            fseek(fp,-sizeof(struct Account), SEEK_SET);
            fwrite(&acc, sizeof(struct Account), 1, fp);
            printf("Money deposited successfully.\n");
            fclose(fp);
            return;
        }
    }

    printf("Account not found.\n");
    fclose(fp);
}
void defaulters() {
    struct Account acc;
    FILE *fp = fopen("bankdata.txt", "r");
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Defaulters List ---\n");
    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        if (acc.balance < 100.0) { 
            printf("Account No: %d ", acc.accountNumber);
            printf("account holder:%s\n",acc.name);
            printf("balance:%.2f\n",acc.balance);
            printf("-----------------------\n");
        }
    }
    fclose(fp);
}
int main() {
    int choice;

    while (1) {
        printf("\n--- Banking Service Menu ---\n");
        printf("1. Open Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Identify Defaulters\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: openAccount();
             break;
            case 2:depositMoney();
             break;
            case 3:withdrawMoney();
             break;
            case 4: displayBalance();
             break;
            case 5:disptransaction();
             break;
            case 6: defaulters();
             break;
            default: printf("Invalid choice. Please try again.\n");
            break;
        }
    }
}
    else{
    printf("thank you\n");
    FILE *fp=fopen("bankinfo.txt","w");
    printf("enter mobile number for future reference:");
    scanf("%s",phoneNo);
    fprintf(fp,"%s",phoneNo);
    fclose(fp);
}


    return 0;
}