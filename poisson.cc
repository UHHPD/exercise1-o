#include <vector>
#include <iostream>
#include <fstream>
#include<cmath>
using namespace std;
int sum;
double poissonter;
double stepen;
double exponent;
double faktorial;

double poisson(double mu, int l) {
  exponent = exp((-1)*mu);
  std:: cout << "_________" << std::endl;
  std:: cout << "Number  " << l << std::endl;
  std:: cout << exponent << std::endl;
  stepen = pow(mu, l);
  std:: cout << stepen << std::endl;
  faktorial =  tgamma(l+1);
  std:: cout << faktorial << std::endl;
  poissonter = (exponent) * (stepen) / faktorial;
  std:: cout << "Probability " << l << std::endl;
  std:: cout << poissonter << std::endl;
  return poissonter;
}

int main () {
  vector<int> zaehler(11);
  std::ifstream fin( "datensumme.txt" );
  std::ofstream fout( "hist.txt" );
  std::ofstream fout1( "histpoi.txt" );
   while ( !fin.eof() ) {
     fin >> sum;
     //std:: cout << sum << std::endl;
     zaehler[sum] += 1;
     for(unsigned int k = 0 ; k < zaehler.size() ; ++k) { 
       //fout1 <<  k << " " << zaehler[k] << " " << 10 * poisson (3.11538, k)  << std::endl;  

       //std::cout << k << ":" << zaehler[k] << std::endl;
     }
   }
  for(unsigned int k = 0 ; k < zaehler.size() ; ++k) { 
       fout1 <<  k << " " << zaehler[k] << " " << 234* poisson (3.11538, k)  << std::endl;
  }
  for(unsigned int k = 0 ; k < zaehler.size() ; ++k) { 
       fout <<  k << " " << zaehler[k] << std::endl;   
  }
  


//poisson (3.11538, 11);
//std:: cout << poissonter << std :: endl;

return 0;
 





}