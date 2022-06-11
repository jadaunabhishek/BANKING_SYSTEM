#include <stdio.h>

struct cust_detail{
    int acc_num;
    int bal;
    char cust_name[30];
}s[20];
void customer_detail(int numofcust){
    struct cust_detail;
    for(int i=0;i<numofcust;i++){
        printf("Enter %d customer name\n",i+1);
        scanf("%s",s[i].cust_name);
        printf("Enter account number of customer\n");
        scanf("%d",&s[i].acc_num);
        printf("Enter available balance of customer\n");
        scanf("%d",&s[i].bal);}
}
int main(){
    int i,numofcust,choice,account1,account2,account3,depamount,currentamount1,currentamount2,withdrawamount;
     printf("Enter number of customer\n");
     scanf("%d",&numofcust);
    customer_detail(numofcust);
    printf("Enter 1 to deposit money\nEnter 2 to withdraw money\nEnter 3 to search particular customer details\nEnter 4 show all data\n ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter amount to deposit\n");
        scanf("%d",&depamount);
        printf("Enter account number\n");
        scanf("%d",&account1);
        for(i=0;i<numofcust;i++){
            if(s[i].acc_num==account1){
                printf("Customer name is %s\n",s[i].cust_name);
                printf("Customer account number is %d\n",s[i].acc_num);
                currentamount1=s[i].bal+depamount;
                printf("Amount credited is %d\nCustomer available balance is %d\n",depamount,currentamount1);}
            else {
                break;
            }
            }
            break;
        case 2:
        printf("Enter amount to withdraw\n");
        scanf("%d",&withdrawamount);
        printf("Enter account number\n");
        scanf("%d",&account2);
        for(i=0;i<numofcust;i++){
            if(account2==s[i].acc_num){
                if(s[i].bal<withdrawamount){
                    printf("Insufficient Balance");
                }
                else{
                printf("Customer name is %s\n",s[i].cust_name);
                printf("Customer account number is %d\n",s[i].acc_num);
                currentamount2=s[i].bal-withdrawamount;
                printf("Amount withdrawn is %d\nCustomer available balance is %d\n",withdrawamount,currentamount2);}}
                else{
                    break;
                }
            }
            break;
        case 3:
        printf("Enter account number\n");
        scanf("%d",&account3);
        for(i=0;i<numofcust;i++){
            if(account3==s[i].acc_num){
                printf("Customer name is %s\n",s[i].cust_name);
                printf("Customer account number is %d\n",s[i].acc_num);
                printf("Customer available balance is %d\n",s[i].bal);}
            else {
                    break;
                }
        }
        break;
        case 4:
        for(i=0;i<numofcust;i++){
            printf("Customer name is %s\n",s[i].cust_name);
            printf("Customer account number is %d\n",s[i].acc_num);
            printf("Customer available balance is %d\n",s[i].bal);
                }
        break;
    }
    
    return 0;
}
