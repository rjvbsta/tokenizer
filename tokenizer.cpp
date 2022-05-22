//Rajeev Basanta CISC 3160

#include <iostream>
#include <string>
#include <conio.h> 
#include <stdlib.h>
using namespace std;

int main ()
{
   string str;
   int i = 0;
   cout << "Please Enter Your Expression: ";
   getline(cin, str);
   int strSize = str.size();

   int firstChar = str[0];

   if (!firstChar)
   {
       cout << "\nSyntax Error!";
       exit;
   }

   else
   {
       while (i<strSize)
       {
       
            if (str[i] == '-' || str[i] == '+' || str[i] == '*' || str[i] == '/' || str[i] == '&' || str[i] == '%' || str[i] == '/' ||
                    str[i] == '"' || str[i] == '#' || str[i] == '!' || str[i] == '^' || str[i] == ';' || str[i] == '>' || str[i] == '<' || str[i] == '(' || str[i] == ')' ||
                    str[i] == '?') {

                   cout << "\nSyntax Error!";
                   exit;                   
               }

               else if (str[i] == '=')
               {
                   goto rightOpp;
               }

               else
               {
                   cout << "\nWrong Assignment Expression!";
                   exit;                   
               }
               
               i++;
           }
       }

rightOpp:
   i++;
   int index = str[i];
   if (!index) {
       cout << "Syntax Error!";
       exit;
   }
   i++;
   if (str[i] == '+')
   {
       i++;
       int bb = str[i];
       if (!bb) {

           cout << "Syntax Error!";
           exit;
       }

       cout << "Result: " << index + bb;
   }

   else if (str[i] == '-')
   {
       i++;
       int bb = str[i];
       if (!bb)
           cout << "Syntax Error!";
           exit;
       cout << "Result: " << index - bb;
   }
   else if (str[i] == '*')
   {
       i++;
       int bb = str[i];
       if (!bb)
           cout << "Syntax Error!";
           exit;
       cout << "Result: " << index * bb;
   }

   else if (str[i] == '%')
   {
       i++;
       int bb = str[i];
       if (!bb)
           cout << "Syntax Error!";
           exit;
       cout << "Result: " << index % bb;
   }
   else if (str[i] == '/')
   {
       i++;
       int bb = str[i];
       if (!bb)
           cout << "Syntax Error!";
           exit;
       cout << "Result: " << index / bb;
   }
   else
   {
       cout << "\nWrong Inputs!";
       exit;
   }
   _getche();   
}
