#include <iostream>
using namespace std;

int main() {
  int marks;
  cout << "Enter score(0-100): ";
   cin >> marks;
   char grade;


   if(marks<0 || marks>100)
   {
     cout << "Invalid Marks" << endl;
     return 0;
   }


 switch(marks/10)
   {
     case 10:
     case 9:
       grade = 'A';
       break;
     case 8:
       grade = 'B';
       break;
     case 7:
       grade = 'C';
       break;
     case 6:
       grade = 'D';
       break;
     case 5:
       grade = 'E';
       break;
     default:
       grade = 'F';
   }
   cout << "Grade: " << grade << endl;
  return 0;
}

