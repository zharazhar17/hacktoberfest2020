#include <constrea.h>
#include <conio.h>

main(){
	int sisi,pilih;
   float phi=3.14, r;

   cout << "1. Luas Persegi " << endl;
   cout << "2. Luas Lingkaran " << endl;
   cout << "3. Keliling Lingkaran " << endl;

   cout << "Masukan Pilihanmu : "; cin >> pilih ;

   if(pilih == 1){
			cout << "--- Luas Persegi ----" << endl;
   		cout << "Masukan Sisi : "; cin >> sisi;

   		cout << "Luas Persegi : " << (sisi * sisi) << "cm" << endl;
   }else if(pilih == 2){
      	cout << "--- Luas Lingkaran ----" << endl;
   		cout << "Masukan Jari : "; cin >> r;

   		cout << "Luas Lingkaran : " << ( phi * r * r) << "cm" << endl;
   }else if(pilih == 3){
      	cout << "--- Keliling Lingkaran ----" << endl;
   		cout << "Masukan Jari : "; cin >> r;

   		cout << "Keliling Lingkaran : " << ( 2 * phi * r ) << "cm" <<endl;
   }else{
      	cout << "Tidak ada pilihan ";
   }

   getch();
}