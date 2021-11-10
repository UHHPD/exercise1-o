#include <vector>
#include <iostream>
#include <fstream>
#include<cmath>


double zahl;
double itog; 
itog=1;
double exponent; 
double stepen; 
double faktorial; 
double poissonter; 

double prob(std::vector<int> daten, double mu) {
    exponent = exp((-1)*mu);
  std:: cout << "_________" << std::endl;
  std:: cout << "Number  " << daten[k] << std::endl;
  std:: cout << exponent << std::endl;
  stepen = pow(mu, daten[k]);
  std:: cout << stepen << std::endl;
  faktorial =  tgamma(daten[k]+1);
  std:: cout << faktorial << std::endl;
  poissonter = (exponent) * (stepen) / faktorial;
  std:: cout << "Probability " << daten[k] << std::endl;
  std:: cout << poissonter << std::endl;
  itog = poissonter * itog;
  return poissonter;
}

int main () {
std::vector<int> daten;
std::ifstream fin( "datensumme.txt" );
 while ( !fin.eof() ) {
       fin >> zahl;
       daten.push_back(zahl); 
 }
     
 
 for(unsigned int k = 0 ; k < (daten.size()-1) ; ++k) { 
    std::cout << k << ":" << daten[k] << std::endl;
 }

}