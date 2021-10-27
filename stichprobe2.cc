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
double sredn;
int n;
n=0;
i=0;
int k;
k=0;
int p;
p=0;
std::ifstream fin( "datensumme.txt" ); 
 while ( !fin.eof() )
  { 
    
    if (p < 9) {
      fin >> sum;
      sumsum = sum + sumsum;
      i = i + 1; 
      p = p + 1;
      std:: cout << p << " "<< i << " "<< sum <<" "<< sumsum << std::endl;
    

    } else {
     k = k+1; 
     std:: cout << " Nabor nomer "<< k << std::endl;
     sredn = sumsum / p; 
     std:: cout << " Summ =  "<< sumsum << std::endl;
     std:: cout << " Number of elements. =  "<< p << std::endl;
     std:: cout << " Srednya =  "<< sredn << std::endl;
     sumsum = 0;
     sredn=0;
     p = 0;
    }
  }




fin.close();

std::ifstream dog( "datensumme.txt" ); 
 while ( !dog.eof() )
  { 
    dog >> sum1;
    double srednyakv = (sum1 - sredn)*(sum1 - sredn);
    sumsrednyakv = sumsrednyakv + srednyakv;
    n = n + 1; 
    std:: cout << sum1 << " "<< n << " "<< srednyakv <<" "<< sumsrednyakv << std::endl;

   
  }
double itog = (sumsrednyakv) / n;
std:: cout << " sumsrednyakvadratichnoe  "<< sumsrednyakv << std::endl;
std:: cout << " Number of elements =  "<< n << std::endl;
std:: cout << " itog =  "<< itog << std::endl;
double koren = sqrt (itog);
std:: cout << " sigma =  "<< koren << std::endl;
dog.close();
return 0;  
}