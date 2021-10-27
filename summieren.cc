#include <iostream>
#include <fstream>

int main() {
 std::ifstream fin( "daten.txt" ); //  here i open file data.txt
 std::ofstream fout( "datensumme.txt" );//  here i open file datasumme.txt
 int i; // here I told to program that I need i with type of integer 
 int n;  // here I told to program that I need n with type of integer 
 int strinteger;  // here I told to program that I need stringinteger with type of integer 
 int sum;  // here I told to program that I need sum with type of integer 
 std:: string str;  // here I told to program that I need str with type of string (it is a text type) 
 n = 1; 
 i = 0;
 str = ""; // it is the same that str = 0
 sum = 0;
    while ( !fin.eof() ) //here I told that program will work until I recieve from file some of information. it will not work when there are nothing more
    { 
      if (i < 2) { 
        fin >> str; //here I told that number from file is going to str
          if (str=="") {
             return 0;
          } else {
             int strinteger = stoi(str); // here I told that strinteger is ( type int) and it is = str (type string)
             sum = strinteger + sum; //here I count summa of two numbers 
             //std:: cout << strinteger << " ";
             i = i + 1;  //this is counter for "if"
          }    
      } else {
        fout << sum << std::endl; //here I put summa in file datensumma.txt
        //std:: cout <<""<< std::endl;
        //std:: cout << sum << " "<<std:: endl;
        sum = 0;
        i = 0;
        n = n + 1; 
        str = "";
      }
    }
  fout.close();  //here i closed the files 
  fin.close();
return 0;
}
