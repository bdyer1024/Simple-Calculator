#include <iostream>
#include <cmath> //Same as math.h

#define PI 3.14159265//Because pi is not included in cmath library nor iostream

using namespace std;//All cout and cin calls this namespace. 

int main()
{
    char operation; //Defines operation as a character 
    double num1, num2, result; //Defines these as double values
    
cout<<"\n\t\t\tCalculator"<<endl;//Title kinda centered
cout<<"\nDon't type q or Q when asked for anything other than an operation b/c you will break the thing. Don't do it."<<endl;

do//Run until told to stop (see bottom for while)
{
    cout<<"\nEnter + for Addition\n      - for Subtraction\n      / for Division\n      * for Multiplication\n      r for Square Root\n      ^ to Raise a Number to a Power\n      e to Evaluate Exponential Function\n      l for Natural Log\n      s for Sine\n      c for Cosine\n      t for Tangent\n      a for Absolute Value\n      Q or q to Quit\n";
    //Couldn't split the above quote into two separate lines b/c then it wasn't recognized as a quote
    //It's the menu for operations.
    cout<<"\n\t\t\tEnter an operation: ";//Tells user what to do
    cin>>operation;//Identifies the user's input as the chracter operation (Operation was defined at top.).
    
    if(operation!='+'&&operation!='/'&&operation!='-'&&operation!='^'&&operation!='a'&&operation!='e'
    &&operation!='*'&&operation!='q'&&operation!='Q'&&operation!='r'&&operation!='l'&&operation!='s'&&operation!='c'&&operation!='t')
    {
        cout<<"\n\t\t\tType a valid operation.\n";
    }
    //If the opeartion isn't one of the available ones, tell the user to put a valid one.
    
    else if(operation!='e'&&operation!='q'&&operation!='Q'&&operation!='r'&&operation!='a'&&operation!='l'&&operation!='s'&&operation!='c'&&operation!='t')
    {
        cout<<"\n\t\t\tEnter first number: ";
        cin>>num1;
        cout<<"\n\t\t\tEnter second number: ";
        cin>>num2;
    }
    //If the user inputs a valid operation, and it isn't one of the above, then ask for two numbers.
    
    else if(operation=='e')
    {
        cout<<"\n\t\t\tEnter an x value: ";
        cin>>num1;
    }
    //If the user inputs a valid operation, and it is only e, ask for an x value.
    
    else if(operation=='s'||operation=='c'||operation=='t')
    {
        cout<<"\n\t\t\tEnter a number in degrees: ";
        cin>>num1;
    }
    //If the user inputs a valid operation, and t is either s, c, or t, ask for a value in degrees. 
    
    else if(operation!='+'&&operation!='/'&&operation!='-'&&operation!='^'
    &&operation!='*'&&operation!='q'&&operation!='Q')
    {
        cout<<"\n\t\t\tEnter a number: ";
        cin>>num1;
    }
    //If the user inputs a valid operation, and it isn't one of the above, ask for one number.
    
    //The following depict what the program tells the computer to behind the scenes and how to output the answer to user. 
    //Result is defined before defining cout instead of simply typing it in place of result in the output line in order to have
    //a uniform structure and make it easier to read and verify that the right function was set to do. 
    if(operation=='e')
    {
        result=exp(num1);
        cout<<"\n\t\t\te^"<<num1<<" = "<<result<<endl;
    }
    
    //Convert degrees to radians b/c inherent function in cmath evaluates in radians for all trig functions
    
    if(operation=='t')
    {
        result=tan(num1*PI/180);
        cout<<"\n\t\t\ttan("<<num1<<") = "<<result<<endl;
    }
    
    if(operation=='c')
    {
        result=cos(num1*PI/180);
        cout<<"\n\t\t\tcos("<<num1<<") = "<<result<<endl;
    }
    if(operation=='s')
    {
        result=sin(num1*PI/180);
        cout<<"\n\t\t\tsin("<<num1<<") = "<<result<<endl;
    }
    if(operation=='l')
    {
        if(num1<0)
        {
            cout<<"\n\t\t\tLog of a negative number does not exist."<<endl;
        }
        else
        {
            result=log(num1);
            cout<<"\n\t\t\tlog base e of "<<num1<<" = "<<result<<endl;
        }
    }
    if(operation=='a')
    {
        result=abs(num1);
        cout<<"\n\t\t\tabsolute value of "<<num1<<" = "<<result<<endl;
    }
    if(operation=='^')
    {
        result=pow(num1,num2);
        cout<<"\n\t\t\t"<<num1<<" ^ "<<num2<<" = "<<result<<endl;
    }
    
    if(operation=='+')
    {
        result=num1+num2;
        cout<<"\n\t\t\t"<<num1<<" + "<<num2<<" = "<<result<<endl;
    }
    
    if(operation=='-')
    {
        result=num1-num2;
        cout<<"\n\t\t\t"<<num1<<" - "<<num2<<" = "<<result<<endl;
    }
    
    if(operation=='/')
    {
        if(num2==0)
        {
            cout<<"\n\t\t\tDivide by zero (0) not allowed."<<endl;
        }
        //Outputs when user tries to divide by zero b/c that's a no-no, not actual error though. 
        else
        {
            result=num1/num2;
            cout<<"\n\t\t\t"<<num1<<" / "<<num2<<" = "<<result<<endl;//Otherwise, just do normal division.
        }
    }
    if(operation=='r')
    {
        if(num1<0)
        {
            cout<<"\n\t\t\tSquare root of negative doesn't exist."<<endl;
        }
        else
        {
            result=sqrt(num1);
            cout<<"\n\t\t\tsquare root of "<<num1<<" = "<<result<<endl;
        }
        //See divison "if" statement. 
        
    }
    if(operation=='*')
    {
        result=num1*num2;
        cout<<"\n\t\t\t"<<num1<<" X "<<num2<<" = "<<result<<endl;
    }
}while(operation!='q'&&operation!='Q');//tells do when to do(when operataion isn't q)

cout<<"\n\t\t\tYou successfully quit the program.\n\t\t\t"<<endl;
//Tells program to quit when do isn't done, ie when operation is q or Q b/c do only runs when operation isn't q or Q. 
}

//resources: C++ Calculator Code for Beginner
//           http://www.cprogramming.com/fod/sqrt.html
//           http://www.cplusplus.com/reference/cmath/
