#include <stdio.h>
#include <string.h>

struct IDCard {
    char name[50];
    char contact[20];
    char enrollment_no[20];
    char college_name[50];
    char address[100];
};


void printIDCard(struct IDCard card) {
    printf("\n------------------------ ID Card ------------------------\n");
    printf("Name: %s\n", card.name);
    printf("Contact: %s\n", card.contact);
    printf("Enrollment Number: %s\n", card.enrollment_no);
    printf("College Name: %s\n", card.college_name);
    printf("Address: %s\n", card.address);
    printf("---------------------------------------------------------\n");
}

int main() {
    struct IDCard myCard;


    printf("Enter Name: ");
    fgets(myCard.name, sizeof(myCard.name), stdin);
    myCard.name[strcspn(myCard.name, "\n")] = '\0';  

    printf("Enter Contact : ");
    fgets(myCard.contact, sizeof(myCard.contact), stdin);
    myCard.contact[strcspn(myCard.contact, "\n")] = '\0';  

    printf("Enter Enrollment Number: ");
    fgets(myCard.enrollment_no, sizeof(myCard.enrollment_no), stdin);
    myCard.enrollment_no[strcspn(myCard.enrollment_no, "\n")] = '\0';  
    printf("Enter College Name: ");
    fgets(myCard.college_name, sizeof(myCard.college_name), stdin);
    myCard.college_name[strcspn(myCard.college_name, "\n")] = '\0'; 

    printf("Enter Address: ");
    fgets(myCard.address, sizeof(myCard.address), stdin);
    myCard.address[strcspn(myCard.address, "\n")] = '\0';  


    printIDCard(myCard);

    return 0;
}
