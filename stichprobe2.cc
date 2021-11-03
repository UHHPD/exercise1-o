#include <iostream>
#include <fstream>
#include<cmath>

int main () {
int sum;
int sum1;
double sumsum;
int sumint;
int sumint1;
double sumsrednyakv;
double variance;
int i;
double sredn;
int n;
n=0;
int h;
h=0;
int k;
k=0;
int p;
p=0;
std::ifstream fin( "datensumme.txt" ); 
std::ifstream dog( "datensumme.txt" );
std::ofstream fout1( "mittelwerte.txt" );
std::ofstream fout2( "varianzen.txt" );
 while ( !fin.eof() )
  { 
    if (p < 9) {
        fin >> sum;
        int sumint = sum;
        sumsum = sumint + sumsum;
        i = i + 1; 
        p = p + 1;
      //  std:: cout << p << " "<< i << " "<< sum <<" "<< sumsum << std::endl;
        sum = 0;
      
    } else {
        k = k+1; 
       // std:: cout << " Nabor nomer "<< k << std::endl;
        sredn = sumsum / p; 
       // std:: cout << " Summ =  "<< sumsum << std::endl;
       // std:: cout << " Number of elements. =  "<< p << std::endl;
       // std:: cout << " Srednya =  "<< sredn << std::endl;
        fout1 << sredn << std::endl;
        //std:: cout << " ____Rascheт среднего квадрата____   "<< std::endl;
           while (h<9) {  
             dog >> sum1;
             int sumint1 = sum1;
             double srednyakv = (sumint1 - sredn)*(sumint1 - sredn);
             h=h+1;
             //std:: cout << h << " " << sumint1 << " " << srednyakv<< std::endl;
             sumsrednyakv = sumsrednyakv + srednyakv;
             sum1=0;

           }    
  
    
         double itog = (sumsrednyakv) / h;
         fout2 << itog << std::endl;
         double koren = sqrt (itog);
         //std:: cout << "________________________________" << std::endl;
         //std:: cout << "Cумма среднеквадратичных =   " << sumsrednyakv << std::endl;
         //std:: cout << "________________________________" << std::endl;
        // std:: cout << "Variance  =   " << itog << std::endl;
         //std:: cout << "________________________________" << std::endl;
         //std:: cout << " Sigma  =   " << koren << std::endl;
         //std:: cout << "____________________________________________" << std::endl;
         sumsum = 0;
         sredn=0;
         sumsrednyakv = 0;
        p = 0;
        h=0;
    }
  } 
fin.close();
dog.close();
fout1.close();
fout2.close();

// Расчет отклонения Бессель
double mteory;
double vteory;
std:: string m;
std:: string v;
double bessm;
double bessv;
double sumbessm;
double sumbessv;
int r;
r=0;
int f;
int mint;

std::ifstream fin1( "mittelwerte.txt" ); 
std::ifstream fin2( "varianzen.txt" );
std::ifstream fin3( "mittelwerteteory.txt" ); 
std::ifstream fin4( "varianzenteory.txt" );
fin2 >> mteory;
 while ( !fin1.eof() ) {
   fin1 >> m;
   mint = stoi(m);
   sumbessm = mint + sumbessm;
   //std:: cout << r <<" " << mint << "  "<< sumbessm << std::endl;
   r = r + 1;
 }
 double itog1 = (sumbessm - mint)  / (r);

std:: cout << itog1 << std::endl;

 r = 0;

fin3 >> vteory;
 while ( !fin2.eof() ) {
   fin2 >> v;
   int vint = stoi(v);
   sumbessv = vint + sumbessv;
   f = f + 1;
   //std:: cout <<f<<" "<< vint << "  "<< sumbessv << std::endl;
 }
 double itog2 = sumbessv / (f);
 std:: cout << itog2 << std::endl;

 f = 0;
 //std:: cout << itog2 << std::endl;









//std::ifstream dog( "datensumme.txt" ); 
// while ( !dog.eof() )
//  { 
//    dog >> sum1;
//    double srednyakv = (sum1 - sredn)*(sum1 - sredn);
  //  sumsrednyakv = sumsrednyakv + srednyakv;
    //n = n + 1; 
    //std:: cout << sum1 << " "<< n << " "<< srednyakv <<" "<< sumsrednyakv << std::endl;

   
  //}
//double itog = (sumsrednyakv) / n;
//std:: cout << " sumsrednyakvadratichnoe  "<< sumsrednyakv << std::endl;
//std:: cout << " Number of elements =  "<< n << std::endl;
//std:: cout << " itog =  "<< itog << std::endl;
//double koren = sqrt (itog);
//std:: cout << " sigma =  "<< koren << std::endl;
//dog.close();
//return 0;  
}