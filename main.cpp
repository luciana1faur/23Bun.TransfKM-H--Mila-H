#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Convert kilometers per hour to miles per hour :" << endl;
  cout << "---------------------------------------------------" << endl;

  float kmPerH;
  float milePerH;

  cout << "Introduce KM: ";
  cin >> kmPerH;

  milePerH = kmPerH / 1.609344 ;

  cout << kmPerH << " km/h sunt " << milePerH << " mile/h " << endl;

  return 0;
}