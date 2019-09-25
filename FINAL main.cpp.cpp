#include <iostream>
#include <string>
using namespace std;

#include "Review.h"



int main()
{
   Review Rev[100];

   string command;
   string userName;
   string placeName;
   string date;
   string userComments;
   string restLookup;
   int foodRating, serviceRating, valueRating, atmosphereRating;
   int count;

   cout << "Welcome to Fernando's Review Database\n\n";
   cout << "Enter a command (insert, print, quit):";
   getline(cin, command);

   while(command != "quit")
   {

      if(command[0] == 'i')
      {

               cout << "enter your name (first name): ";
               getline(cin,userName);
               Rev[count].setRevname(userName);

               cout << "enter resteraunt name: ";
               getline(cin, placeName);
               Rev[count].setRestname(placeName);

               cout << "Date you visited (january 2019): ";
               getline(cin, date);
               Rev[count].setDate(date);

               cout << "ratings 1)not good  5)very good\n";
               cout << "enter food rating [1..5]: ";
               cin >> foodRating;
               while((foodRating < 1)||(foodRating > 5))
               {
                  cout << "sorry that is not in the range [1..5] try again: ";
                  cin >> foodRating;
               }


               cout << "enter service rating [1..5]: ";
               cin >> serviceRating;
               while((serviceRating < 1)||(serviceRating > 5))
               {
                  cout << "sorry that is not in the range [1..5] try again: ";
                  cin >> serviceRating;
               }


               cout << "enter value rating [1..5]: ";
               cin >> valueRating;
               while((valueRating < 1)||(valueRating > 5))
               {
                  cout << "sorry that is not in the range [1..5] try again: ";
                  cin >> valueRating;
               }


               cout << "enter atmosphere rating [1..5]: ";
               cin >> atmosphereRating;
               while((atmosphereRating < 1)||(atmosphereRating > 5))
               {
                  cout << "sorry that is not in the range [1..5] try again: ";
                  cin >> atmosphereRating;
               }


               Rev[count].setRating(foodRating, serviceRating, valueRating, atmosphereRating);

               Rev[count].setOverrating(foodRating, serviceRating, valueRating, atmosphereRating);

               cout << "enter comments: ";
               getline(cin, userComments);
               getline(cin, userComments);
               Rev[count].setComment(userComments);
               count++;
    }
      if(command == "print")
      {
         cout << "what resteraunt's review would like to see?: ";
         getline(cin,restLookup);

         for(int i = 0; i < 100; i++)
         {
            if(restLookup == Rev[i].getRestname())
            {
               Rev[i].Print();
            }
         }
      }
      cout << "Enter a command (insert, print, quit):";
      getline(cin, command);
   }

   return 0;
}
