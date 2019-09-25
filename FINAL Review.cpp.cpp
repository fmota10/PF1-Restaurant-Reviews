#include <iostream>
#include <string>
using namespace std;

#include "Review.h"



Review::Review()
{
   revName = " ";
   restName = " ";
   vDate = " ";
   foodR = 0;
   serviceR = 0;
   valueR = 0;
   atmosR = 0;
   overallRating = 0;
   revComment = " ";
   //cout << "constructor\n";
}

Review::~Review()
{
   //cout << "destructor\n";
}

void Review::setRevname(string reviewerName)
{
   revName = reviewerName;
}

void Review::setRestname(string resterName)
{
   restName = resterName;
}

void Review::setDate(string visitDate)
{
   vDate = visitDate;
}

void Review::setOverrating(int foodRate, int servRate, int valRate, int atmosRate)
{
   overallRating = (foodRate + servRate + valRate + atmosRate)/4.0;
}

void Review::setComment(string comment)
{
   revComment = comment;
}

void Review::setRating(int foodRating, int servRating, int valRating, int atmosRating)
{
   foodR = foodRating;
   serviceR = servRating;
   valueR = valRating;
   atmosR = atmosRating;
}
string Review::getRevname()
{
   return revName;
}

string Review::getRestname()
{
   return restName;
}

string Review::getDate()
{
   return vDate;
}

float Review::getOverrating()
{
   return overallRating;
}

string Review::getComment()
{
   return revComment;
}

int Review::getRating()
{
   return foodR;
   return serviceR;
   return valueR;
   return atmosR;
}
void Review::Print()
{
   cout << "Reviewer name: " << revName << endl;
   cout << "Resteraunt name: " << restName << endl;
   cout << "Visit date: " << vDate << endl;
   cout << "Food rating: " << foodR << endl;
   cout << "Service rating: " << serviceR << endl;
   cout << "Value rating: " << valueR << endl;
   cout << "Atmosphere rating: " << atmosR << endl;
   cout << "Overall rating: " << overallRating << endl;
   cout << "Comments: " << revComment << endl;
}

