#include <iostream>

using namespace std;

int populacja=1; int godzin=0;


int main()
{
  cout<<"Ile minie godzin, zanim bakterie pomnoza sie do 1 mln"<<endl;
  do
   {
       godzin++;
       populacja = populacja*2;

       cout<<"Minelo godzin:  "<<godzin;
       cout<<"   liczba bakterii: "<< populacja<<endl;

   }
 while(populacja<=1000000000);

    return 0;
}
