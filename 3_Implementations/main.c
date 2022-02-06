#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//functions to generate bills
void generateBillHeader(char name[50],char date[30]){
    printf("\n\n");
        printf("\t     ADV. Restaurant");
        printf("\n\t -----------------------------");
        printf("\nDate:%s",date);
        printf("\nInvoice To: %s",name);
        printf("\n");
        
}