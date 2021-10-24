#include <iostream>
#include <fstream>

int main() {
 std::ifstream fin( "daten.txt" );
 std::ofstream fout( "datensumme.txt" );
  if (!fin.is_open()) 
  {
    std:: cout << "File is not open" << std::endl;
  }
  else {
    std:: cout << "File is open" << std::endl;
    int i;
    int n;
    int strinteger;
    int sum;
    std:: string str;
    n = 1;
    i = 0;
    str = "";
    sum = 0;
    while ( !fin.eof() )
    { 
      if (i < 2) {
        fin >> str;
        int strinteger = stoi(str);
        sum = strinteger + sum;
        std:: cout << str << " ";
        i = i + 1;     
      } else {
        fout << sum << std::endl; 
        std:: cout <<" "<< std::endl;
        std:: cout << "Number of pair   " << n << std::endl;
        std:: cout << "Summa of this pair  " << sum << std::endl;
        std:: cout << "___________________" << std::endl;
        sum = 0;
        i = 0;
        n = n + 1; 
        str = "";
      }
    }
  fout.close();  
  fin.close();
  }
  
  return 0;
}
