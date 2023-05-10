#include<stdio.h>
#include<conio.h>
int main(){
float units,total bill;
printf("enter the electricity units consumed");
scanf("%f",&units);
	if(units <=50){
	total bill= units *0.50;
	}else if(units <=150){
	total bill=25 + ((units -50)*0.75);
	}else if(units <=250){
	total bill=100 +((units -150)*1.20);
	}else {
	total bill=220 +((units -250)*1.50);
	}
	printf("total electricity bill=rs.%.2f\n",total bill);
}