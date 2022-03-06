#include <iostream>
#include <math.h> 
#include <iomanip>
using namespace std;


void roundingNumber (float x)
{

int num = x*100 - (trunc(x)*100);     //multiply x by 100 & minus the integer value of x that has been multiplied by 100

 if(num % 10 == 3 || num % 10 == 4 || num % 10 == 6 || num % 10 == 7)   //determine the end digit of the decimal
 
  {
      cout<<"\nSuccessfuly rounded "<<x;    // output some text
      
      x= (round(x* 2.0*10) / 2.0)/10;     // round the number to the nearest 0.5 sen (half)
      
      cout<<" ----> "<<x<<endl;     // output some text
  }
  
else if(num % 10 == 1 || num % 10 == 2 || num % 10 == 8 || num % 10 == 9)

  {
      cout<<"\nSuccessfuly rounded "<<x;     // output some text
      
      x= (round(x*10))/10;    // round the number to the nearest 0.5 sen (bottom)
      
      cout<<" ----> "<<x<<endl;     // output some text
  }
  
else

  {
     cout<<"\nNothing to be rounded for "<<x<<endl;     // output some text
  }
 

}


int main ()
  {

    float amount;   // declare the amount of the bill

    cout << "Welcome to Jimat & SENang kira" << endl;   // output some text

    cout << "\n\nPlease enter the total amount of the bill: ";  // output some text

    cin >> amount; //enter amount of the total bill
    
    amount =(float)((int)(amount*100))/100; //remove any other digit after the 2 digit after the decimal
    
    roundingNumber(amount); // function call for the RoundingNumber function
    
    return 0;

  }
