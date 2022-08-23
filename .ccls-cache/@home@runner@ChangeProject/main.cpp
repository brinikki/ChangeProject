#include <iostream>
using namespace std;

int main()
{
  double cost;
  double change;
  double tax;
  int fifties = 0;
  int twenties = 0;
  int tens = 0;
  int fives = 0;
  int singles = 0;
  int quarters = 0;
  int dimes = 0;
  int nickels = 0;
  int pennies = 0;

  cout << fixed;
  cout.precision(2);
 
  cout << endl;
  cout << "You are purchasing an item that is under $100." << endl;
  cout << "What is the cost of the item? $";
  cin >> cost;

  tax = cost * .08125;
  cost = cost + tax;

  cout << endl;
  cout << "With tax, the total cost is $" << cost << "." << endl;
  cout << "How much money will you give to pay for the item and get change? $";
  cin >> change;

  change = change - cost;
 
  cout << endl;
  cout << "Your change is a total of $" << change << "." << endl;
 
  if (change > 49.9901)  
  {  
    fifties = fifties + 1;
    change = change - 50;  
  }  
 
  if (change > 39.9901)  
  {
    twenties = twenties + 2;
    change = change - 40;  
  }

  if (change > 19.9901)
  {
    twenties = twenties + 1;
    change = change - 20;
  }

  if (change > 9.9901)
  {
    tens = tens + 1;
    change = change - 10;
  }

  if (change > 4.9901)
  {
    fives = fives + 1;
    change = change - 5;
  }

  if (change > 3.9901)
  {
    singles = singles + 4;
    change = change - 4;
  }
 
  if (change > 2.9901)
  {
    singles = singles + 3;
    change = change - 3;
  }
 
  if (change > 1.9901)
  {
    singles = singles + 2;
    change = change - 2;
  }
 
  if (change > .9901)
  {
    singles = singles + 1;
    change = change - 1;
  }

  if (change > .7501)
  {
    quarters = quarters + 3;
    change = change - .75;
  }

  if (change > .5001)
  {
    quarters = quarters + 2;
    change = change - .50;
  }
 
  if (change > .2501)
  {
    quarters = quarters + 1;
    change = change - .25;
  }

  if (change > .2001)
  {
    dimes = dimes + 2;
    change = change - .2;
  }
 
  if (change > .1001)
  {
    dimes = dimes + 1;
    change = change - .10;
  }

  if (change > .0501)
  {
    nickels = nickels + 1;
    change = change - .05;
  }

  if (change > .0401)
  {
    pennies = pennies + 4;
    change = change - .04;
  }
 
  if (change > .0301)
  {
    pennies = pennies + 3;
    change = change - .03;
  }
 
  if (change > .0101)  
  {
    pennies = pennies + 2;
    change = change - .02;
  }  
 
  if (change > .005)  
  {
    pennies = pennies + 1;
    change = change - .01;
  }

  cout << endl;
  cout << "Here is your change: " << endl;
  cout << endl;
 
  if (fifties != 0)
  {
    cout << fifties << " fifty dollar bill." << endl;
  }

  if (twenties != 0)
  {
    if (twenties > 1)
    {
     cout << twenties << " twenty dollar bills." << endl;
    }

    if (twenties == 1)
    {
      cout << twenties << " twenty dollar bill." << endl;
    }
  }

  if (tens != 0)
  {
    cout << tens << " ten dollar bill." << endl;
  }

  if (fives != 0)
  {
    cout << fives << " five dollar bill." << endl;
  }

  if (singles != 0)
  {
    if (singles > 1)
    {
      cout << singles << " singles." << endl;  
    }

    if (singles == 1)
    {
      cout << singles << " single." << endl;
    }
  }

  if (quarters != 0)
  {
    if (quarters > 1)
    {
      cout << quarters << " quarters." << endl;      
    }

    if (quarters == 1)
    {
      cout << quarters << " quarter." << endl;
    }
  }

  if (dimes != 0)
  {
    if (dimes > 1)
    {
      cout << dimes << " dimes." << endl;      
    }

    if (dimes == 1)
    {
      cout << dimes << " dime." << endl;
    }
  }

  if (nickels != 0)
  {
    cout << nickels << " nickel." << endl;  
  }

  if (pennies != 0)
  {
    if (pennies > 1)
    {
      cout << pennies << " pennies." << endl;
    }

    if (pennies == 1)
    {
      cout << pennies << " penny." << endl;
    }
  }

  return 0;
}