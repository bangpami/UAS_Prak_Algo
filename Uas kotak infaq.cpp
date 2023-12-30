/*Nama  : Fatahul Fahmi
  Nim   : 23343005
  Tugas : UAS Praktikum Algoritma Pemrograman
*/
#include <iostream>
#include <ctime>

using namespace std;

string lokasi;
string enter;
string WaktuSekarang();
string waktu = WaktuSekarang();
int penyaluran (int a);
void salurkandana();
void uangsumbangan(); // prototype
int SumbanganTpq();
int sumbanganmasjid();
int SumbanganAnakYatim();
void menuinfaq2(int pil);


struct kotak{
    string nama;
    string alamat;
    int anakyatim;
    int masjid;
    int tpq;
    int tanggal;
};
int jumlahpenyedekah = 0; // pengganti index yang seharus nya 0 ketika pemanggilan
const int maxsedekah = 10;

//varglobal
kotak amal[maxsedekah];
void salurkandana(){
    cout << "+==============================+"<<endl;
    cout << ">> DANA INFAQ  : "<<SumbanganAnakYatim()<<endl;
    cout << "+==============================+"<<endl;
    int pil;
    int jumlah;
    cout<<"-> Salurkan Dana "<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"ketik [1] Untuk Menyalurkan Dana : ";cin>>pil;
    system ("cls");
    switch(pil){
    case 1 :
        if (SumbanganAnakYatim()> 0){
        cout<<"-------------------------------------"<<endl;
        cout<<"-> dana infaq saat ini : "<<SumbanganAnakYatim()<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"Lokasi Disalurkan : ";cin>>lokasi;
        cout<<"Jumlah Disalurkan : ";cin>>jumlah;
        penyaluran(jumlah);
        system("cls");
        cout<<"-------------------------------------"<<endl;
        cout<<"Dana Berhasil di salur kan."<<endl;
        cout<<"Berjumlah :"<<jumlah<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"-> dana infaq saat ini : "<<SumbanganAnakYatim()<<endl;
        cout<<"-------------------------------------"<<endl;
        break;
        }else{
        cout<<" _________________"<<endl;
        cout<<" |  KOTAK INFAQ  |   "<<endl;
        cout<<" |               |  "<<endl;
        cout<<" |               | "<<endl;
        cout<<" |   [kosong]    |  "<<endl;
        cout<<" |               |  "<<endl;
        cout<<" |               |  "<<endl;
        cout<<" -----------------"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"Kotak Infaq Kosong Silahkan Kembali jika"<<endl;
        cout<<"Kotak infaq telah terisi !"<<endl;
        cout<<"-----------------------------------------"<<endl;
        }
    cout<<"[ENTER]";
    cin.ignore();
    getline(cin, enter);
    system("cls");
    }
}

int penyaluran(int a) {
    int hasil = SumbanganAnakYatim();
    int sisadana = hasil - a;

    for (int i = 0; i < jumlahpenyedekah; i++) {
        amal[i].anakyatim = sisadana;
    }

    return sisadana;
}

void datapenyumbang(int a){
    if(a>0){
    cout << "====================================" << endl;
    cout << "||    DATA PENYUMBANG MASJID      ||" << endl;
    cout << "====================================" << endl;
    for (int i = 0; i< jumlahpenyedekah; i++){
        cout << "Nama       : "<<amal[i].nama<<endl;
        cout << "Alamat     : " << amal[i].alamat << endl;
        cout << "Tanggal    : " << amal[i].tanggal << endl;
        cout << "Masjid     : " << amal[i].masjid << endl;
        cout << "Anak Yatim : " << amal[i].anakyatim << endl;
        cout << "TPQ/TPA    : " << amal[i].tpq << endl;
        cout << "------------------------------------" << endl;
    }
        }else{
        cout<<"====Belum ada Data Penyumbang=== "<<endl;
        cout<<"Harap Isi Data Terlebih Dahulu !"<<endl;
        }
    cout<<"[ENTER]";
    cin.ignore();
    getline(cin, enter);
    system("cls");
    }

void uangsumbangan(){
    cout<<"===================================="<<endl;
    cout<<"||    UANG KAS & UANG SUMBANGAN   ||"<<endl;
    cout<<"===================================="<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<" Uang kas Masjid   :"<<sumbanganmasjid()<<endl;
    cout<<"                                "<<endl;
    cout<<" Infaq Anak Yatim  :"<<SumbanganAnakYatim()<<endl;
    cout<<"                                "<<endl;
    cout<<" Infaq TPA/TPQ     :"<<SumbanganTpq()<<endl;
    cout<<"                                "<<endl;
    cout<<"===================================="<<endl;
    cout<<"->Sesungguhnya sebaik-baik harta adalah harta"<<endl;
    cout<<"  yang dipergunakan untuk kepentingan yang baik."<<endl;
    cout<<"[ENTER]";
    cin.ignore();
    getline(cin, enter);
    system("cls");

}
void jadwalsholat(){
    cout<<"======================================================="<<endl;
    cout<<"||              MASJID IRSYADUL ISLAMIYAH            ||"<<endl;
    cout<<"======================================================="<<endl;
    cout<<"                      Waktu sholat                   "<<endl;
    cout<<"                   Bagan Batu Sekitar                "<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"   Shubuh          :     04.50                       "<<endl;
    cout<<"   Zuhur           :     12.10                       "<<endl;
    cout<<"   Ashar           :     15.50                       "<<endl;
    cout<<"   Magrib          :     18.15                       "<<endl;
    cout<<"   Isya            :     19.32                       "<<endl;
    cout<<"                                                     "<<endl;
    cout<<"  Waktu saat ini   :     "<<waktu<<"                      "<<endl;
    cout<<"                                                     "<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"-> Perjanjian antara kami dan mereka (orang kafir)    "<<endl;
    cout<<"   adalah shalat.                                     "<<endl;
    cout<<"   Barangsiapa meninggalkannya maka dia telah kafir.  "<<endl;
    cout<<"  (HR. Ahmad, Tirmidzi, An Nasa’i, Ibnu Majah)       "<<endl;
    cout<<"======================================================="<<endl;
    cout<<"Tekan [enter] untuk kembali  ";
    cin.ignore();
    getline(cin, enter);
    system("cls");

}
string WaktuSekarang() {
    // Mendapatkan waktu sekarang
    time_t sekarang = time(0);
    tm *ltm = localtime(&sekarang);

    //  untuk menyimpan waktu yang diformat
    char waktu[80];

    // Memformat waktu
    strftime(waktu, sizeof(waktu), "%H:%M", ltm);

    return waktu;
}

int SumbanganTpq() {
    int total = 0;
    for (int i = 0; i < jumlahpenyedekah; ++i) {
        total += amal[i].tpq;
    }

    return total;
}

int SumbanganAnakYatim() {
    int total = 0;
    for (int i = 0; i < jumlahpenyedekah; ++i) {
        total += amal[i].anakyatim;
    }

    return total;
}


int sumbanganmasjid() {
    int total = 0;
    for (int i = 0; i < jumlahpenyedekah; ++i) {
        total += amal[i].masjid;
    }

    return total;
}

void menuutama(){
    cout<<"===================================="<<endl;
    cout<<"||    MASJID IRSYADUL ISLAMIYAH   ||"<<endl;
    cout<<"===================================="<<endl;
    cout<<"|1| Berinfaq                      ||"<<endl;
    cout<<"|2| Jadwal Sholat                 ||"<<endl;
    cout<<"|3| uang Sumbangan                ||"<<endl;
    cout<<"|4| Data Penyumbang               ||"<<endl;
    cout<<"|5| Salurkan Dana                 ||"<<endl;
    cout<<"===================================="<<endl;

}

void menuinfaq(){
    int pil;
    cout<<"================================================"<<endl;
    cout<<"||          KOTAK INFAQ MASJID IRSYAD         ||"<<endl;
    cout<<"================================================"<<endl;
    cout<<"|1| Masjid                                    ||"<<endl;
    cout<<"| |                                           ||"<<endl;
    cout<<"|2| Anak Yatim                                ||"<<endl;
    cout<<"| |                                           ||"<<endl;
    cout<<"|3| TPQ/TPA                                   ||"<<endl;
    cout<<"| |                                           ||"<<endl;
    cout<<"================================================"<<endl;
    cout<<"->Sesungguhnya sebaik-baik harta adalah harta"<<endl;
    cout<<"  yang dipergunakan untuk kepentingan yang baik."<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Masukan pilihan : ";cin>>pil;
    menuinfaq2(pil);

}

void menuinfaq2(int pil){
    if(pil<=4){
        switch(pil){
        case 1 :
            cout<<"Masukan data penginfaq"<<endl;
            cout<<"=============================="<<endl;
            cin.ignore();// cin ignore harus diletakan dsini biar bisa
            cout<<"Masukan nama               : ";getline(cin,amal[jumlahpenyedekah].nama);
            cout<<"Masukan Alamat             : ";getline(cin,amal[jumlahpenyedekah].alamat);
            cout<<"Masukan Jumlah Sedekah     : ";cin>>amal[jumlahpenyedekah].masjid;
            cout<<"Masukan tanggal bersedekah : ";cin>>amal[jumlahpenyedekah].tanggal;
            jumlahpenyedekah++;
            cout<<"Data penyedekah sudah di input !"<<endl<<endl;
            break;

        case 2 :
            cout<<"Masukan data penginfaq"<<endl;
            cout<<"=============================="<<endl;
            cin.ignore();
            cout<<"Masukan nama               : ";getline(cin,amal[jumlahpenyedekah].nama);
            cout<<"Masukan Alamat             : ";getline(cin,amal[jumlahpenyedekah].alamat);
            cout<<"Masukan Jumlah Sedekah     : ";cin>>amal[jumlahpenyedekah].anakyatim;
            cout<<"Masukan tanggal bersedekah : ";cin>>amal[jumlahpenyedekah].tanggal;
            jumlahpenyedekah++;
            cout<<"Data penyedekah sudah di input !"<<endl<<endl;
            break;

        case 3 :
            cout<<"Masukan data penginfaq"<<endl;
            cout<<"=============================="<<endl;
            cin.ignore();
            cout<<"Masukan nama               : ";getline(cin,amal[jumlahpenyedekah].nama);
            cout<<"Masukan Alamat             : ";getline(cin,amal[jumlahpenyedekah].alamat);
            cout<<"Masukan Jumlah Sedekah     : ";cin>>amal[jumlahpenyedekah].tpq;
            cout<<"Masukan tanggal bersedekah : ";cin>>amal[jumlahpenyedekah].tanggal;
            jumlahpenyedekah++;
            cout<<"Data penyedekah sudah di input !"<<endl<<endl;
            break;

        default :
            cout<<"Pilihan Tidak ada Please Jangan Halu";
            break;
        }

    }else{
    cout<<"Pilihan Tidak ada Please Jangan Halu"<<endl;
    }


}
int main(){
    int pil;
    do {
    menuutama();
    cout<<"Masukan Pilihan : ";cin>>pil;
    switch(pil){
    case 1 :
    system ("cls");
    menuinfaq();
        break;
    case 2 :
    system ("cls");
    jadwalsholat();
        break;
    case 3 :
    system ("cls");
    uangsumbangan();
        break;
    case 4 :
    system ("cls");
    datapenyumbang(jumlahpenyedekah);
        break;
    case 5 :
    system ("cls");
    salurkandana();
        break;
    }

    }while(pil<6);
    cout<<"Perhatikan Pilihan nya bang !"<<endl;
}
