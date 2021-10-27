#include <iostream>
#include <fstream>

int main() {
 std::ifstream fin( "daten.txt" ); 
 std::ofstream fout( "datensumme.txt" );
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
          if (str=="") {
             return 0;
          } else {
             int strinteger = stoi(str);
             sum = strinteger + sum;
             std:: cout << strinteger << " ";
             i = i + 1; 
          }    
      } else {
        fout << sum << std::endl; 
        //std:: cout <<""<< std::endl;
        //std:: cout << sum << " "<<std:: endl;
        sum = 0;
        i = 0;
        n = n + 1; 
        str = "";
      }
    }
  fout.close();  
  fin.close();
return 0;
}
