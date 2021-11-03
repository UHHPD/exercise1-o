#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
int sum;


int main () {
  vector<int> zaehler(11);
  std::ifstream fin( "datensumme.txt" );
  std::ofstream fout( "hist.txt" );
   while ( !fin.eof() ) {
     fin >> sum;
     std:: cout << sum << std::endl;
     zaehler[sum] += 1;
     for(unsigned int k = 0 ; k < zaehler.size() ; ++k) { 
       std::cout << k << ":" << zaehler[k] << std::endl;
     }
   }
  for(unsigned int k = 0 ; k < zaehler.size() ; ++k) { 
       fout <<  k << " " << zaehler[k] << std::endl;   
  }
return 0;
}