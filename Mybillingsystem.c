#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* TAX INVOICE */
int main() {
	int i,n,sum=0,count=0;
	char a[50];
	char b;
	for(i=1;;i++){	
	printf("\n AVAILABLE ITEM NUMBERS");
	printf("\n 1-->Lays");
	printf("\n 2-->Maaza Mango(1.2L)");
	printf("\n 3-->Nescafe Classic Coffee(100g)");
	printf("\n 4-->Tata Salt");
	printf("\n 5-->Aashirvaad Atta(5kg)");
	printf("\n 6-->Maggi");
	printf("\n 7-->Kellogg's Corn Flakes(1.2kg)");
	printf("\n 8-->Cadbury Dairy Milk(55g)");
	printf("\n 9-->MrBakewell Brown Bread(400g)");
	printf("\n 10-->Nutella Spread(350g)");
	printf("\n\n press ENTER to start printing the bill");
	printf("\n press 0 to stop");
	fflush(stdin);
	scanf("%c",&b);
	printf("\n\t\t    MY_MART");
	printf("\n\t -------------------------------");
	printf("\n\t      INDIAN SUPERMARTS LTD");
	printf("\n\t --------------------------------");
	printf("\n\t    CIN:-L51800MH2000PLC136473");
	printf("\n\t      GSTIN:-36AACCA7423H1ZR");
	printf("\n\t      FSSAI NO:13615006000221");
	printf("\n\t --------------------------------");
	printf("\n\t       MY MART HANAMAKONDA");
	printf("\n\t   Premises no. 3-6-733,Adalath");
	printf("\n\t Circle,Subedari area,Hanamakonda");
	printf("\n\t       City,Warangal-506001");
	printf("\n\t __Phone:7716423896__");
	printf("\n--------------------------------------------------");
	printf("\n\t\t   TAX INVOICE");
	printf("\n Bill No.:%d",i);
	time_t tm;
	time(&tm);
	printf("\t Bill Dt:%s",ctime(&tm));
	printf("\n Counter No.:%d",1);
	printf("\t Cashier:");
	gets(a);
	printf("--------------------------------------------------");
	printf("\nItem No.    Particulars            Qty.    Price\n");
	for(;;){
	scanf("%d",&n);
	if(n==1){
	    printf("\t    Lays\t\t    1       5.00\n");
	    count+=1;
	    sum+=5;
	}
	else if(n==2){
		printf("\t    Maaza Mango\t\t    1.2L    70.00\n");
		count+=1;
		sum+=70;
	}
	else if(n==3){
		printf("\t Nescafe Classic Coffee\t    100g    300.00\n");
		count+=1;
		sum+=300;
	}
	else if(n==4){
		printf("\t    Tata Salt\t\t    1       22.00\n");
		count+=1;
		sum+=22;
	}
	else if(n==5){
		printf("\t    Aashirvaad Atta\t    5kg     259.00\n");
		count+=1;
		sum+=259;
	}
	else if(n==6){
		printf("\t    Maggi\t\t    1       13.00\n");
		count+=1;
		sum+=13;
	}
	else if(n==7){
		printf("\t Kellogg's Corn Flakes\t    1.2kg   350.00\n");
		count+=1;
		sum+=350;
	}
	else if(n==8){
		printf("\t Cadbury Dairy Milk\t    55g     45.00\n");
		count+=1;
		sum+=45;
	}
	else if(n==9){
		printf("\t MrBakewell Brown Bread\t    400g    34.00\n");
		count+=1;
		sum+=34;
	}
	else if(n==10){
		printf("\t    Nutella Spread\t    350g    380.00\n");
		count+=1;
		sum+=380;
	}
	else if(n==0){
		break;
	}
	}
		printf("\n-------------------------------------------------- ");
        printf("\nITEMS:%d",count);
        printf("\t\t\tTotal:%d",sum);
        printf("\n\t\t\tGST:2.5%");
        printf("\n\t\tGRAND TOTAL:%f",sum+(0.025*sum));
        printf("\n-------------------------------------------------- ");
        printf("\n----------Amount Received From Customer----------- ");
        printf("\nThis is computer generated invoice");
        printf("\nFor Feedback/Complaints,Please Write");
        printf("\nTo Us At suggestion@mymartindia.com");
        printf("\n--------------------------------------------------\n ");
	}
	return 0;
}
