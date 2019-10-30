// Ulaz i izlaz niza
//PROGRAM 10111001
#include <iostream>
#include <cstdlib>
using namespace std;
 
int main()
{
    cout << "ispis niza" << endl;
    int n;
    cout << "unesite broj clanova niza: ";
    cin >> n;
    int a[n];
	cout<<"unesite clanove niza:"; 
    for (int i=0; i<  n; i++){
        cin >> a[i];
    }
    cout << "Ispis niza" << endl;
    for (int i=0; i< n; i++){
        cout << a[i] << endl;7
        
    }
    system("PAUSE");
    return 0;
}
