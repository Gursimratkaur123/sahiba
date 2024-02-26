#include <stdio.h>
void main()
{char op;
double first,second;
printf("\n Enter an operator (+,-,*,/):);
scanf("\n %c",&op);
printf("\n Enter Two operands :");
scanf("\n %lf%lf",&first,&second);
switch(op)
{ case '+':
	printf("%.1lf + %.1lf = %.1lf",first,second,first+second);
	break;
  case '-':
	printf("\n %.1lf - %.1lf =%.1lf",first,second,first-second);
	break;
  case '*':
	printf("\n %lf * %.1lf=%.1lf",first,second,first*second);
	break;
  case '/':
	printf("\n %.lf / %.lf=%.1lf",first,second,first/second);
	break;
  default:
	printf("\n invalid ");
}}
