#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Otw�rz plik tekstowy "dane.txt".
  ifstream plik("dane.txt");

  // Sprawd�, czy plik zosta� pomy�lnie otwarty.
  if (!plik.is_open()) {
    cerr << "Nie uda�o si� otworzy� pliku!" << endl;
    return 1;
  }

  // Wyprowad� dane z pliku tekstowego po jednej linii.
  string linia;
  while (getline(plik, linia)) {
    cout << linia << endl;
  }

  cout << "cos" << endl;
  // Zamykamy plik.
  plik.close();

  return 0;
}
