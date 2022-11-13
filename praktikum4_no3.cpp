#include <iostream>

using namespace std;

int main()
{
  cout << "Program C++ cek tahun kabisat atau bukan" << endl;
  cout << endl;

  int year;

  cout << "tahun: ";
  cin >> year;

   if (year % 400 == 0) {
     cout << year << " adalah tahun kabisat";
   }
   else if (year % 100 == 0) {
     cout << year << " bukan tahun kabisat";
   }
   else if (year % 4 == 0) {
     cout << year << " adalah tahun kabisat";
   }
   else {
     cout << year << " bukan tahun kabisat";
   }

  cout << endl;

  return 0;

}
