#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
   char inputChar;
   string inputString;
   int count = 0;
   cin >> inputChar;
   
   getline (cin, inputString);
   
   
   for(int i = 0; i < inputString.length(); i++){
      char c = inputString[i];
      
      if(c == inputChar){
         ++count;
      }
   }
  
  cout << count << " " << inputChar;
   
 if (count != 1) {
   cout << "'s";
 }
   cout << endl;
   
 return 0;
}
