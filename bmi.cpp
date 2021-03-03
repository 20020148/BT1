#include<iostream>
using namespace std;

int main()
 {
     double weight, height;
     cin >> weight;
     cin >> height;
     double bmi = weight / (height * height);
     if (bmi < 18.5) cout << "gay";
     else if (bmi >= 18.5 && bmi < 25) cout << "binh thuong";
     else if (bmi >= 25 && bmi < 30) cout << "beo phi cap do I";
     else if (bmi >= 30 && bmi < 35) cout << "beo phi cap do II";
     else if (bmi >= 35 && bmi < 40) cout << "beo phi cap do III";
     else cout << "beo phi cap do IV)";
     cout << endl << bmi;
     return 0;
 }
