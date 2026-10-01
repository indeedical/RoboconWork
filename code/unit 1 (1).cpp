#include <iostream>
using namespace std;
int main (void)
{
   int choice;
cout << "Enter your choice: \n Press 1 for addition, \n 2 for subtraction, \n 3 for multiplication,\n 4 for division: ";
cin >> choice;
float num1, num2, result;
cout <<"Enter first number: ";
cin >> num1;
cout <<"Enter second number: ";
cin >> num2;
switch(choice) {
    case 1:
        result = num1 + num2;
        cout <<"Result: " << result;
        break;
    case 2:
        result= num1-num2;
        cout<<"Result:"<<result;
        break;
    case 3:
        result=num1*num2;
        cout<<"Result:"<<result;
        break;
    case 4:
        result=num1/num2;
        cout<<"Result:"<<result;
        break;
    default: 
        cout<<"Invalid choice";
        break;
} return 0;
}
