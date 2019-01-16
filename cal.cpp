#include <iostream>
using namespace std;
int main()
{ float num1,num2;
	char op;
	cout<<"enter operator + or - or * or /:";
	cin >> op;
	cout <<"enter two numbers:";
	cin >> num1 >> num2;
	switch(op)
         { case '+':
		 cout<< num1+num2;
		 break;


           case '-':
		 cout<< num1-num2;
		 break;
	    case '*':
		 cout<<num1*num2;
		 break;
            case '/':
		 cout<<num1/num2;
		 break;
	    default:
              cout<<"error operator is not correct";
	      break;
	 }
	return 0;
}


