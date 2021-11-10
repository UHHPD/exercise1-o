#include <vector>
#include <iostream>
#include <fstream>
#include<cmath>


double zahl;
double itog; 

double exponent; 
double stepen; 
double faktorial; 

double mu1; 
double poissonter;

double prob(std::vector<int> daten, double mu, int j) {
    exponent = exp((-1)*mu);
  //std:: cout << "_________" << std::endl;
  //std:: cout << "Number  " << daten[j] << std::endl;
  //std:: cout << exponent << std::endl;
  stepen = pow(mu, daten[j]);
 // std:: cout << stepen << std::endl;
  faktorial =  tgamma(daten[j]+1);
  //std:: cout << faktorial << std::endl;
  poissonter = (exponent) * (stepen) / faktorial;
  //std:: cout << "Probability " << daten[j] << std::endl;
  //std:: cout << poissonter << std::endl;
  return poissonter;
}

int main () {
itog = 1;
double itog2;
double itog1;
double itog3;
itog3=1;
double itog4;
std::vector<int> daten;
std::ifstream fin( "datensumme.txt" );
std::ofstream fout( "likelihood.txt" );
std::ofstream fout1( "nll.txt" );
std::ofstream fout2( "deltanll.txt" );
  while ( !fin.eof() ) {
       fin >> zahl;
       daten.push_back(zahl); 
  }
 for(unsigned int k = 0 ; k < (daten.size()-1) ; ++k) { 
      itog3 = itog3 * prob (daten, 3.11538, k);

   
      //std::cout << k << "   mu  = "<< mu << << itog << std::endl;
 }
mu1 = 0.1;   
  while (mu1 < 6) { 
    for(unsigned int k = 0 ; k < (daten.size()-1) ; ++k) { 
      itog = itog * prob (daten, mu1, k);

   
      //std::cout << k << "   mu  = "<< mu << << itog << std::endl;
    }
   std::cout << mu1 << "    " << itog << std::endl;
   fout <<  mu1 << " " << itog << std::endl;
   itog1 = log (itog); 
   itog2 = -2*itog1;
    

   itog4 = itog2 - (-2*(log (itog3)));
   fout1 <<  mu1 << " " << itog2 << std::endl;
   fout2 << mu1 << " " << itog4 << std::endl;
   itog = 1;
   mu1=mu1+0.1;
  } 
  
 std::cout << itog3 << std::endl;
}