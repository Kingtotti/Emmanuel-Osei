#include <iostream>
using namespace std;
int main()
{
int score =0;
cout <<"Enter your score....";
cin >>score;

switch (score){

    
    case 80 ... 100:
    cout <<"grade score is A";
    break;
        
    case 75 ... 79:
    cout <<"grade score is B+";
    break;
    
    case 70 ... 74:
	
        cout <<"grade score is B";
        break;
        
    case 65 ... 69:
    
        cout <<"grade score is C+";
        break;
        
    case 60 ... 64:

        cout <<"grade score is C";
        break;
        
    case 55 ... 59: 
    
        cout <<"grade score is D+";
        break;
        
	case 50 ... 54:
    
        cout <<"grade score is D";
        break;
        
    case 45 ... 49:
    
        cout <<"grade score is E";
        break;
        
    case 0 ... 44:
	    
        cout <<"grade score is F";
       break;
   }
    return 0;
}                              