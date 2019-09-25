#ifndef REVIEW_H
#define REVIEW_H

class Review
{


   public:
      Review();
      ~Review();
      void setRevname(string reviewerName);
      void setRestname(string resterName);
      void setDate(string visitDate);
      void setOverrating(int foodRate, int servRate, int valRate, int atmosRate);
      void setComment(string comment);
      void setRating(int foodRating, int servRating, int valRating, int atmosRating);
      string getRevname();
      string getRestname();
      string getDate();
      float getOverrating();
      string getComment();
      int getRating();
      void Print();


   private:
      string revName;
      string restName;
      string vDate;
      float overallRating;
      string revComment;
      int foodR;
      int serviceR;
      int valueR;
      int atmosR;

};


#endif
