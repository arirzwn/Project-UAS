#include <iostream>
#include <conio.h>

using namespace std;

struct data
{
    double nomor;
    char nama[50];
    char agama[20];
    char status[20];
    char pekerjaan[20];
    char tempat[20];
    char tanggal[20];
    char almt[20];
};

int main()
{
    int menu;
    int nik = -1, i, j;
    char pilih;
    int namedit;
    data ktp[20];
    char get[1];
    bool ketemu;

menuutama:
    system("cls");
    system("color f1");
    cout << " ===============================================================\n\n";
    cout << "                 PROGRAM DATA KEPENDUDUKAN WARGA\n\n";
    cout << " ===============================================================\n\n";
    cout << " MENU UTAMA :\n\n";
    cout << " 1. Menambah Data Warga\n\n";
    cout << " 2. Mencari Data Warga\n\n";
    cout << " 3. Menghapus Data Warga\n\n";
    cout << " 4. Menampilkan Data Warga\n\n";
    cout << " 5. Merubah Data Warga\n\n";
    cout << " 6. Keluar\n\n";
    cout << " ===============================================================\n\n";
    cout << " Masukan Pilihan Anda (1-5) : ";
    cin >> menu;

    if (menu == 1)
    {
        char ulang;
        do
        {
            system("cls");
            nik++;
            char pilih;
            cout << " ===============================================================\n\n";
            cout << " PENAMBAHAN DATABASE DATA PENDUDUK\n\n";
            cout << " ===============================================================\n\n";
            cout << " NIK                        : ";
            cin >> ktp[nik].nomor;
            cin.getline(get, 1);
            cout << endl;
            cout << " Nama Lengkap               : ";
            cin.getline(ktp[nik].nama, 50);
            cout << endl;
            cout << " Agama                      : ";
            cin.getline(ktp[nik].agama, 20);
            cout << endl;
            cout << " Status Perkawinan          : ";
            cin.getline(ktp[nik].status, 20);
            cout << endl;
            cout << " Pekerjaan                  : ";
            cin.getline(ktp[nik].pekerjaan, 20);
            cout << endl;
            cout << " Tempat Lahir               : ";
            cin.getline(ktp[nik].tempat, 20);
            cout << endl;
            cout << " Tanggal Lahir (DD MM YYYY) : ";
            cin.getline(ktp[nik].tanggal, 20);
            cout << endl;
            cout << " Alamat                     : ";
            cin.getline(ktp[nik].almt, 20);
            cout << endl;
            cout << " ===============================================================\n\n";
        menu1:
            cout << " Ingin Menambahkan Data Lagi? (Y/N) : ";
            cin >> ulang;
        } while (ulang == 'Y' || ulang == 'y');
        if (ulang == 'N' || ulang == 'n')
        {
            goto menuutama;
        }
        else
        {
            cout << " \n Inputan yang Anda Masukkan Salah\n " << endl;
            goto menu1;
        }
    }
    else if (menu == 2)
    {
        char ulang;
        do
        {
            system("cls");
            cout << " ===============================================================\n\n";
            cout << " PENCARIAN DATA PENDUDUK\n\n";
            cout << " ===============================================================\n\n";
            cout << " Masukan NIK : ";
            cin >> namedit;
            cout << endl;
            for (i = 0; i <= nik; i++)
            {
                if (namedit == ktp[i].nomor)
                {
                    cout << " ===============================================================\n\n";
                    cout << " Data di temukan pada registrasi data penduduk ke-" << i + 1 << endl
                         << endl;
                    cout << " ===============================================================\n\n";
                    cout << " Nama Lengkap      : " << ktp[i].nama << endl
                         << endl;
                    cout << " Agama             : " << ktp[i].agama << endl
                         << endl;
                    cout << " Status perkawinan : " << ktp[i].status << endl
                         << endl;
                    cout << " Pekerjaan         : " << ktp[i].pekerjaan << endl
                         << endl;
                    cout << " Tempat Lahir      : " << ktp[i].tempat << endl
                         << endl;
                    cout << " Tanggal Lahir     : " << ktp[i].tanggal << endl
                         << endl;
                    cout << " Alamat            : " << ktp[i].almt << endl
                         << endl;
                    cout << " ===============================================================\n\n";
                    goto menu0;
                }
            }
            cout << " ===============================================================\n\n";
            cout << " DATA YANG ANDA CARI TIDAK DI TEMUKAN !!!\n\n";
            cout << " ===============================================================\n\n";
        menu0:
            cout << " Ingin Mencari Data Warga Lagi? (Y/N) : ";
            cin >> ulang;
        } while (ulang == 'Y' || ulang == 'y');
        if (ulang == 'N' || ulang == 'n')
        {
            goto menuutama;
        }
        else
        {
            cout << " \n Inputan yang Anda Masukkan Salah\n " << endl;
            goto menu0;
        }
    }
    else if (menu == 3)
    {
        char ulang;
        do
        {
            system("cls");
            cout << " ===============================================================\n\n";
            cout << " PENGHAPUSAN DATA PENDUDUK PADA DATABASE\n\n";
            cout << " ===============================================================\n\n";
            cout << " NIK : ";
            cin >> namedit;
            cout << endl;
            for (i = 0; i <= nik; i++)
            {
                if (namedit == ktp[i].nomor)
                {
                    ketemu = true;
                    if (ketemu)
                    {
                        for (j = i; j <= nik + 1; j++)
                        {
                            ktp[j] = ktp[j + 1];
                        }
                        cout << " ===============================================================\n\n";
                        cout << " DATA BERHASIL DI HAPUS\n\n";
                        cout << " ===============================================================\n\n";
                        nik--;
                        goto menu;
                    }
                }
            }
            cout << " ===============================================================\n\n";
            cout << " DATA YANG AKAN DI HAPUS TIDAK DITEMUKAN !!!\n\n";
            cout << " ===============================================================\n\n";
        menu:
            cout << "Ingin Menghapus Data Warga Lagi? (Y/N) : ";
            cin >> ulang;
        } while (ulang == 'Y' || ulang == 'y');
        if (ulang == 'N' || ulang == 'n')
        {
            goto menuutama;
        }
        else
        {
            cout << " \n Inputan yang Anda Masukkan Salah\n " << endl;
            goto menu;
        }
    }
    else if (menu == 4)
    {
        system("cls");
        cout << " ===============================================================\n\n";
        cout << " MENAMPILKAN DATA PENDUDUK (KTP)\n\n";
        for (i = 0; i <= nik; i++)
        {
            cout << " ===============================================================\n\n";
            cout << " Database Data Penduduk ke-" << i + 1 << endl
                 << endl;
            cout << " ===============================================================\n\n";
            cout << " NIK               : " << ktp[i].nomor << endl
                 << endl;
            cout << " Nama              : " << ktp[i].nama << endl
                 << endl;
            cout << " Agama             : " << ktp[i].agama << endl
                 << endl;
            cout << " Status perkawinan : " << ktp[i].status << endl
                 << endl;
            cout << " Pekerjaan         : " << ktp[i].pekerjaan << endl
                 << endl;
            cout << " Tempat Lahir      : " << ktp[i].tempat << endl
                 << endl;
            cout << " Tanggal Lahir     : " << ktp[i].tanggal << endl
                 << endl;
            cout << " Alamat            : " << ktp[i].almt << endl
                 << endl;
        }
        cout << " ===============================================================\n\n";
    menu3:
        cout << "Ketik Y Untuk Pergi Ke Menu Utama : ";
        cin >> pilih;
        if (pilih == 'Y' || pilih == 'y')
        {
            goto menuutama;
        }
        else
        {
            cout << " \n Inputan yang Anda Masukkan Salah\n " << endl;
            goto menu3;
        }
    }
    else if (menu == 5)
    {
        do
        {
            system("cls");
            cout << " ===============================================================\n\n";
            cout << " MERUBAH DATA PENDUDUK\n\n";
            cout << " ===============================================================\n\n";
            cout << " Masukan NIK                   : ";
            cin >> namedit;
            cout << " \n ===============================================================\n\n";
            for (i = 0; i <= nik; i++)
            {
                if (namedit == ktp[i].nomor)
                {
                    cout << " NIK Baru                      : ";
                    cin >> ktp[i].nomor;
                    cout << endl;
                    cout << " Nama Lengkap                  : ";
                    cin >> ktp[i].nama;
                    cout << endl;
                    cout << " Agama                         : ";
                    cin >> ktp[i].agama;
                    cout << endl;
                    cout << " Status perkawinan             : ";
                    cin >> ktp[i].status;
                    cout << endl;
                    cout << " Pekerjaan                     : ";
                    cin >> ktp[i].pekerjaan;
                    cout << endl;
                    cout << " Tempat Lahir                  : ";
                    cin >> ktp[i].tempat;
                    cout << endl;
                    cout << " Tanggal Lahir (DD MM YYYY)    : ";
                    cin >> ktp[i].tanggal;
                    cout << endl;
                    cout << " Alamat                        : ";
                    cin >> ktp[i].almt;
                    cout << endl;
                    cout << " ===============================================================\n\n";
                    goto menu1;
                }
            }
            cout << " DATA YANG ANDA CARI TIDAK DI TEMUKAN !!!\n\n";
            cout << " ===============================================================\n\n";
        menu2:
            cout << " Ingin Merubah Data Warga Lagi? (Y/N) : ";
            cin >> pilih;
        } while (pilih == 'Y' || pilih == 'y');
        if (pilih == 'N' || pilih == 'n')
        {
            goto menuutama;
        }
        else
        {
            cout << " \n Inputan yang Anda Masukkan Salah\n " << endl;
            goto menu2;
        }
    }
    else if (menu == 6)
    {
        system("cls");
        cout << " \n ========== TERIMA KASIH ==========\n";
        getch();
        return 0;
    }
}
