#include <iostream>
#include <fstream>
#include<cmath>

int main () {
int sum;
double sumsum;
int sum1;
double sumsrednyakv;
double variance;
int i;
int n;
n=0;
i=0;
std::ifstream fin( "datensumme.txt" ); 
std::ofstream fout1( "mittelwerteteory.txt" );
std::ofstream fout2( "varianzenteory.txt" );
 while ( !fin.eof() )
  { 
    fin >> sum;
    sumsum = sum + sumsum;
    i = i + 1; 
    std:: cout << sum << " "<< i << " "<< sumsum << std::endl;

   
  }


double sredn = sumsum / i; 
//std:: cout << " Summ =  "<< sumsum << std::endl;
//std:: cout << " Number of elements. =  "<< i << std::endl;
std:: cout << sredn << std::endl;
fout1 << sredn << std::endl;
fin.close();

std::ifstream dog( "datensumme.txt" ); 
 while ( !dog.eof() )
  { 
    dog >> sum1;
    double srednyakv = (sum1 - sredn)*(sum1 - sredn);
    sumsrednyakv = sumsrednyakv + srednyakv;
    n = n + 1; 
    //std:: cout << sum1 << " "<< n << " "<< srednyakv <<" "<< sumsrednyakv << std::endl;

   
  }
double itog = (sumsrednyakv) / n;
//std:: cout << " sumsrednyakvadratichnoe  "<< sumsrednyakv << std::endl;
//std:: cout << " Number of elements =  "<< n << std::endl;
std:: cout itog << std::endl;
fout2 << itog << std::endl;
double koren = sqrt (itog);
std:: cout << koren << std::endl;
dog.close();
return 0;  
}