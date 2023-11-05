#include <iostream>
using namespace std;

int main() {
  string day;
  cin>>day;
  switch (day) {
  case "one":
    cout << "Monday";
    break;
  case "two":
    cout << "Tuesday";

  case 3:
    cout << "Wednesday";

  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  }
  return 0;
}
