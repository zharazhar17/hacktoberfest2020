#include <iostream>
using namespace std;

int main()
{
    int no;

    cout << "PROGRAM MENCARI BERAT BADAN IDEAL" << endl;
    cout << "1. Metode rumus BMI (Body Mass Index). \n2. Metode Rumus Broca " << endl;
    cout << "Pilihlah nomor metode yang akan anda gunakan" << endl;
    cout << "Saya pilih metode nomor = ";
    cin >> no;

    if (no == 1)
    {
        //RUMUS BMI
        int berat, tinggi, standar;
        float hasil, kuadratTinggi;

        cout << "METODE RUMUS BMI" << endl;
        cout << "Berat = ";
        cin >> berat;
        cout << "Tinggi = ";
        cin >> tinggi;

        kuadratTinggi = (tinggi / 100.00) * (tinggi / 100.00);
        hasil = berat / kuadratTinggi;

        cout << "1. Standar WHO \n2. Standar Asia-Pasifik" << endl;
        cout << "Pilih standar yang akan anda gunakan = ";
        cin >> standar;

        if (standar == 1)
        {
            if (hasil <= 18.5)
            {
                cout << "Index BMI anda adalah " << hasil << ". Anda termasuk KURUS" << endl;
                cin.get();
            }
            else if (hasil > 18.50, hasil <= 24.9)
            {
                cout << "Index BMI anda adalah " << hasil << ". Anda termasuk NORMAL" << endl;
                cin.get();
            }
            else if (hasil >= 25.00, hasil < 30)
            {
                cout << "Index BMI anda adalah " << hasil << ". Anda termasuk OVERWEIGHT" << endl;
                cin.get();
            }
            else if (hasil >= 30.00)
            {
                cout << "Index BMI anda adalah " << hasil << ". Anda termasuk OBESITAS" << endl;
                cin.get();
            }
        }
        else if (standar == 2)
        {
            if (hasil <= 18.5)
            {
                cout << "Index BMI anda adalah " << hasil << ". Anda termasuk KURUS" << endl;
                cin.get();
            }
            else if (hasil > 18.50, hasil <= 22.9)
            {
                cout << "Index BMI anda adalah " << hasil << ". Anda termasuk NORMAL" << endl;
                cin.get();
            }
            else if (hasil >= 23.00, hasil < 24.99)
            {
                cout << "Index BMI anda adalah " << hasil << ". Anda termasuk OVERWEIGHT" << endl;
                cin.get();
            }
            else if (hasil >= 25.00)
            {
                cout << "Index BMI anda adalah " << hasil << ". Anda termasuk OBESITAS" << endl;
                cin.get();
            }
        }
        else
        {
            cout << "Masukan nomor standar yang tersedia dengan benar, lalu pencet ENTER" << endl;
        }
    }
    else if (no == 2)
    {
        //RUMUS BROCA
        int gender;

        cout << "METODE RUMUS BROCA" << endl;
        cout << "1. Laki-laki \n2. Perempuan" << endl;
        cout << "Pilih jenis kelamin anda ==> ";
        cin >> gender;

        if (gender == 1)
        {
            //LAKI-LAKI
            int input, hasilPengurangan1, hasilPengurangan2;
            float beratBadan;

            cout << "Masukan tinggi badan anda dalam cm ==> ";
            cin >> input;

            hasilPengurangan1 = input - 100;
            hasilPengurangan2 = hasilPengurangan1 / (100 / 10);
            beratBadan = hasilPengurangan1 - hasilPengurangan2;

            cout << input << " cm, berat badan ideal = " << beratBadan << " kg." << endl;
            cin.get();
        }
        else if (gender == 2)
        {
            //PEREMPUAN
            int input, hasilPengurangan1, hasilPengurangan2;
            float beratBadan;

            cout << "Masukan tinggi badan anda dalam cm ==> ";
            cin >> input;

            hasilPengurangan1 = input - 100;
            hasilPengurangan2 = hasilPengurangan1 / (100 / 15);
            beratBadan = hasilPengurangan1 - hasilPengurangan2;

            cout << input << " cm, berat badan ideal = " << beratBadan << " kg." << endl;
            cin.get();
        }
        else
        {
            //PERINGATAN
            cout << "Masukan nomor yang tersedia dengan benar, lalu ENTER" << endl;
            cin.get();
        }
    }
    else
    {
        //PERINGATAN
        cout << "Masukan nomor yang tersedia dengan benar, lalu ENTER" << endl;
        cin.get();
    }

    cin.get();
    return 0;
}