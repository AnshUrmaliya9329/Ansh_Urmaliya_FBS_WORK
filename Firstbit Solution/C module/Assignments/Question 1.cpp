#include<stdio.h>
int main(){
	int num1,num2;
	char op;
	printf("Enter First Number :");
	scanf("%d",&num1);
	printf("Enter Second Number :");
	scanf("%d",&num2);
	printf("Enter Opertator(+,-,*,/,%%):");
	scanf(" %c",&op);
	if(op=='+'){
		printf("Result=%d",num1+num2);
	}
	else{
		if(op=='-'){
			printf("Result=%d",num1-num2);
		}
		else{
			if(op=='*'){
				printf("result=%d",num1*num2);
			}
			else{
				if(op=='/'){
					if(num2 !=0)
					printf("result =%d,num1/num2");
					else
					printf("Division by zero is not allowed");
				}
				else{
					if(op=='%')
					{
					if(num2 !=0)
					printf("result =%d",num1%num2);
					else
					printf("Module by 0 is not allowed");	
				}
				else{
					printf("Invalid operator");
				}
			}
		}
	}
	
}
return 0;
}