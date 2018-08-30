#include <iostream>
using namespace std;
int main()
{
    float score =0;
    cout <<"Enter your score";
    if (score >=80 && score <=100)
    {
        cout <<"grade score is A";
    }
    else if (score >=75 && score <=79)
    {
        cout <<"grade score is B+";
    }    
    else if (score >=70 && score <=74)
    {
        cout <<"grade score is B";
    }    
    else if (score >=65 && score <=69)
    {
        cout <<"grade score is C+";
    }
    else if (score >=60 && score <=64)
    {
        cout <<"grade score is C";
    }
    else if (score >=55 && score<=59) 
    {
        cout <<"grade score is D+";
    }
    else if (score >=50 && score <=54)
    {
        cout <<"grade score is D";
    }
    else if (score >=45 && score <=49)
    {
        cout <<"grade score is E";
    }
    else if (score >=0 && score <=44)
    {
        cout <<"grade score is F";
    }
    return 0;
}                              