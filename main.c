#include <stdio.h>
int main(){
int aadhar_card=246919494333;
int pan_no=1234;
int aapar=1345;
int passport_no=20098;
printf("MENU \n1.aadhar card \n2.pan card \n3.Aapar number \n3. passport number\n");
printf("Select your unique document(only in integer): ");
int ch;
scanf("%d",&ch);
printf("Enter you unique code (integer): ");
int user;
scanf("%d",&user);

switch (ch){
 case 1:
     if(aadhar_card==user){
        printf("Verified: AADHAR Number matches our KYC record");
    }
    else{
        printf("NOT Verified: AADHAR Number does not matches our KYC record");
    }
    break;



 case 2:
     if(pan_no==user){
        printf("Verified: PAN Number matches our KYC record");
     }
     else{
        printf("NOT Verified: PAN Number not matches our KYC record");
     }
     break;


 case 3:
     if(aapar==user){
        printf("Verified: AAPAR Number matches our KYC record");
     }
     else{
        printf("NOT Verified: AAPAR Number not matches our KYC record");
     }
     break;


 case 4:
     if(passport_no==user){
        printf("Verified: PASSPORT Number matches our KYC record");
     }
     else{
        printf("NOT Verified: PASSPORT Number not matches our KYC record");
     }
     break;
}
}
