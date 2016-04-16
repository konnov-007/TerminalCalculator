#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(double n)
{
	if(n<=1) printf("=1\n\n"); 
	else{
	double n1=n;
	for(double i=1; i<n1; i++)
	n*=i;
}
return n;
}



void calculator()
{
	double a, b, equals=0;
	char action;
	
	printf("Welcome to calculator. Supported operations: addition, subtraction, multiplication, division, exponentiation, factorial.\nInput number, action, another number:\n\n");
	
	while(true){
		scanf("%lf %c", &a, &action);
	
		if(action=='!')
		{
		equals = factorial(a);  
		goto answer;
		}
		
		scanf("%lf", &b);
		
		if(a>0&&action=='/'&&b==0) printf("+infinity\n\n");
		
		else if(a<0&&action=='/'&&b==0) printf("-infinity\n\n");
		
		else if(a==0&&action=='/'&&b==0) printf("Undefined\n\n");
		
		else{
	switch(action){
	case '+': {
		equals=a+b;
		break;
	}
	case '-': {
		equals=a-b;
		break;
	}
	case '*': {
		equals=a*b;
		break;
	}
	case '/': {
		equals=a/b;
		break;
	}
	case '^':{
		equals=powf(a,b);//do{a*=a; equals=a; b--;}while(b>1.1);
		break;	
	}
	default:break;
	}
	answer:;	printf("=%.3lf \n\n", equals);
}
}
}




main(){
	calculator();
	return 0;
	
} 
