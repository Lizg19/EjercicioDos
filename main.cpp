#include <iostream>

using namespace std;
int main() {

 int inicio=0, fin, s=0;
  
  cout << "Ingrese el punto de inicio: ";
  cin >> inicio;
  cout << "Ingrese el punto fin: ";
  cin >> fin;

  while (inicio > fin){
   cout << "Error el rando incial debe ser mayor que el rango final " << endl;
   cout << "Ingrese el punto de inicio: ";
   cin >> inicio;
   cout << "Ingrese el punto fin: ";
   cin >> fin;
  }
 
  for(int i=inicio;i<=fin;i++){

   s=s+ i;
  }

  cout << "La sumatoria es: "<< s << endl;
  
 return 0;
}