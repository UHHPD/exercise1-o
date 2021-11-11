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

double prob(std::vector<int> daten, double mu, int j) { //function of likelihoodfunc
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
double prob1(std::vector<int> daten, int t) { 
    exponent = exp((-1)*daten[t]);
  //std:: cout << "_________" << std::endl;
  //std:: cout << "Number  " << daten[j] << std::endl;
  //std:: cout << exponent << std::endl;
  stepen = pow(daten[t], daten[t]);
 // std:: cout << stepen << std::endl;
  faktorial =  tgamma(daten[t]+1);
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
double itog5;
double itog6;
double lambda;
double lambdalog;
double zet;
double ndof;
ndof=233;
std::vector<int> daten;
std::ifstream fin( "datensumme.txt" );
std::ofstream fout( "likelihood.txt" ); //aufgabe b
std::ofstream fout1( "nll.txt" );  //aufgabe c
std::ofstream fout2( "deltanll.txt" );  //aufgabe d
std::ofstream fout3( "abs.txt" );  // aufgabe d
  while ( !fin.eof() ) {
       fin >> zahl;
       daten.push_back(zahl); 
  }
 for(unsigned int k = 0 ; k < (daten.size()-1) ; ++k) { 
      itog3 = itog3 * prob (daten, 3.11538, k);   //likelihoodfunc

   
      //std::cout << k << "   mu  = "<< mu << << itog << std::endl;
 }
mu1 = 0.1;   
  while (mu1 < 6) { 
    for(unsigned int k = 0 ; k < (daten.size()-1) ; ++k) { 
      itog = itog * prob (daten, mu1, k);
      itog6 = itog6 * prob1 (daten, k);
   
      //std::cout << k << "   mu  = "<< mu << << itog << std::endl;
    }
   //std::cout << mu1 << "    " << itog << std::endl;
   fout <<  mu1 << " " << itog << std::endl;
   itog1 = log (itog); 
   itog2 = -2*itog1;
   
    

   itog4 = itog2 - (-2*(log (itog3)));
   fout1 <<  mu1 << " " << itog2 << std::endl;
   fout2 << mu1 << " " << itog4 << std::endl;
   itog5 = (-2) * log (itog/itog3); 
   fout3 << mu1 << " " << itog5 << std::endl;
   
   lambda = itog6/itog;
   lambdalog= (-2)* log(lambda);
   zet = (lambdalog - ndof)/sqrt(ndof);
   //std::cout << mu1 << "    " << itog6 << "  " << itog << "  " << lambdalog << "  " << zet <<std::endl;
   std::cout << mu1 << "  " << zet <<std::endl;
   itog = 1;
   itog5=1;
   itog6=1;
   mu1=mu1+0.1;
  } 
 std::cout << " uncertainty on the sample mean =    " << 1.65365/sqrt(234) << std::endl;
 //std::cout << itog3 << std::endl;
 
}