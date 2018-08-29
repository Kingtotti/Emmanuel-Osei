#include <iostream>
using namespace std;
int main()
{
   int num;
  int i;
  int count=0;
  std:: cout <<"Enter a number to be check";
  std:: cin >> num;
   if (num==0)
   {
      std::cout <<"/n"<< num << "is not a prime number";
   }
      
   else {for(i=2;  i< num; i++)
           if (num % i==0){
             count++;
		}
   }
   if (count > 1)
        std::cout << "/n" << num << " is not a prime number";
   else

        std::cout << "/n" << num << " is a prime number";
   return 0;
}
