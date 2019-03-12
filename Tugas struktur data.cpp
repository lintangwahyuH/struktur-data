#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int m=1,n=1;
int harian1,harian2,harian3;
int cari;
int jum;



struct Mahasiswa
{
    string nama;
    int nim;
    char jk;
    string jurusan;
    float rata;
}mhs[99];


void tambah_mhs(Mahasiswa)
{
        cout<<endl;
        cout<<"=================== "<<endl;
        cout<<"Masukkan nama Mahasiswa : ";cin>>mhs[m].nama;
        cout<<"Masukkan Nomor Induk Mahasiswa : ";cin>>mhs[m].nim;
        cout<<"Masukkan Jenis kelamin  (L/P): ";cin>>mhs[m].jk;
        cout<<"Masukkan Jurusan: ";cin>>mhs[m].jurusan;
        cout<<"Masukkan nilai 1: ";cin>>harian1;
        cout<<"Masukkan nilai 2: ";cin>>harian2;
        cout<<"Masukkan nilai 3: ";cin>>harian3;
        cout<<"=================== "<<endl;

      jum=harian1+harian2+harian3;
      mhs[m].rata=jum/3;
}
void cari_data(Mahasiswa){
    int plh;
            cout<<"Masukkan NIM yang akan dicari= ";cin>>plh;
    if(plh==mhs[m].nim){
            cout<<"NIM            Nama         Jurusan            JK          Harian1         Harian2         Harian3"<<endl;
            cout<<mhs[m].nim<<"               "<<mhs[m].nama<<"        "<<mhs[m].jurusan<<"                "<<mhs[m].jk<<"             "<<harian1<<"               "<<harian2<<"                 "<<harian3<<endl;
    }
    else if(plh!=mhs[m].nim){
            cout<<"data tidak ditemukan"<<endl;
    }
    m++;
}


void rata_mhs(Mahasiswa)
{
    cout<<endl;
    cout<<"================= "<<endl;
    cout<<"Nilai Rata rata Tertinggi"<<endl;
    cout<<mhs[m].rata<<endl;
    cout<<endl;
    cout<<"================="<<endl;
    system("pause");
}


int main(){
    int pilih=0;
    do {system ("cls");
        cout<<"Daftar menu : "<<endl;
        cout<<"1. Input data Mahasiswa"<<endl;
        cout<<"2. tampil berdasarkan  Nilai "<<endl;
        cout<<"3. pencarian berdasar NIM"<<endl;
        cout<<"0. Keluar"<<endl;
        cout<<"================"<<endl;
    cout<<"Pilih menu: ";cin>>pilih;
    switch(pilih)
    {   case 1:{if(n==10){cout<<"Kelas sudah penuh"<<endl;} else{tambah_mhs(mhs[99]);};break;}
        case 2:{if(n==10){cout<<"Kelas sudah penuh"<<endl;} else{rata_mhs(mhs[99]);};break;}
        case 3:{if(n==10){cout<<"Kelas sudah penuh"<<endl;} else{cari_data(mhs[99]);};break;}
        case 0:{cout<<"terimakasih "<<endl;break;}
        default:cout<<"Salah pilih menu "<<endl;
         }
    system("pause");
    }
    while(pilih!=0);

}



