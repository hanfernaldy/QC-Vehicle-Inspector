#include <iostream>
using namespace std;
  float Total_QC,Total_Interior,Total_Eksterior,Total_Mesin;
  float Kursi_Depan,Kursi_Belakang,Sabuk,Kaca_Film,HeadUnit,DashBoard,Karpet;
  float Lampu_Utama,Lampu_Sein,Lampu_Belakang,Pintu_Belakang,Pintu_Depan,Roda,Kap_Mobil;
  float Radiator,Oli_Mesin,Oli_Radiator,Minyak_Rem,Aki,ABS,Cooling_system;

class mobil {
  public :


  void TOTAL(){
      Total_Interior = (Kursi_Belakang + Kursi_Belakang + Sabuk + Kaca_Film + HeadUnit + DashBoard + Karpet)/7;
      cout <<"\n================================"<<endl;
      cout <<"|Interior :  |" << Total_Interior<<endl;
      Total_Eksterior = (Lampu_Utama + Lampu_Sein + Lampu_Belakang + Pintu_Belakang + Pintu_Depan + Roda + Kap_Mobil)/7;
      cout <<"|Eksterior :  |" << Total_Eksterior<<endl;
      Total_Mesin = (Radiator + Oli_Mesin + Oli_Radiator + Minyak_Rem + Aki + ABS+ Cooling_system)/7;
      cout <<"|Mesin     :  |" << Total_Mesin <<endl;
      cout <<"--------------------------------"<<endl;
      cout <<"|Total Error  |"<<endl;
      Total_QC = (Total_Mesin + Total_Eksterior + Total_Interior )/3;
      cout <<"|Rata-Rata :  |" << Total_QC << endl;
      cout <<"================================"<<endl;
      if(Total_QC > 2){
      cout << "\n-----------------------------"<<endl;
      cout << "| Mobil Tidak Layak Di jual |"<<endl;
      cout << "-----------------------------"<<endl;
     } else if(Total_QC <= 2){
      cout << "\n-----------------------------"<<endl;
      cout << "| Mobil Siap Untuk Di jual  |"<<endl;
      cout << "-----------------------------"<<endl;
    }
  }
};

class Interior : public mobil{
  public :
  void INTR(){
      cout <<"\n==================================="<<endl;
      cout <<"Silahkan Input Untuk QC Interior "<< endl;
      cout <<"==================================="<<endl;
      cout <<"\nKecacatan Jok Depan :";
      cin >> Kursi_Depan;
      cout <<"Kecacatan Kursi Belakang :" ;
      cin >> Kursi_Belakang;
      cout <<"Kecacatan Sabuk :";
      cin >> Sabuk;
      cout <<"Kecacatan Kaca Film :";
      cin >> Kaca_Film;
      cout <<"Kecacatan Head Unit :";
      cin >> HeadUnit;
      cout <<"Kecacatan DashBoard :";
      cin >> DashBoard;
      cout<<"Kecacatan Karpet Mobil :";
      cin >> Karpet;

  }
};
class Eksterior : public mobil {
  public :
  void EXTR(){
    cout <<"\n=================================="<<endl;
    cout <<"Silahkan Input error Eksterior"<<endl;
    cout <<"=================================="<<endl;
    cout <<"\nKecacatan Lampu Utama :";
    cin >> Lampu_Utama;
    cout <<"Kecacatan Lampu Sein :";
    cin >> Lampu_Sein;
    cout <<"Kecacatan Lampu Belakang :";
    cin >> Lampu_Belakang;
    cout <<"Kecacatan Pintu Depan :";
    cin >> Pintu_Depan;
    cout <<"Kecacatan Pintu Belakang :";
    cin >> Pintu_Belakang;
    cout <<"Kecacatan Roda :";
    cin >> Roda;
    cout <<"Kecacatan Kap Mobil :";
    cin >> Kap_Mobil;

  }

};
class Mesin : public mobil {
    public :
    void MSN(){
        cout <<"\n=================================="<<endl;
        cout <<"Silahkan Masukan Kecacatan Mesin" << endl;
        cout <<"=================================="<<endl;
        cout <<"\nKecacatan Radiator :";
        cin >> Radiator;
        cout <<"Kecacatan Oli Mesin :";
        cin >> Oli_Mesin;
        cout <<"Kecacatan Oli Radiator :";
        cin >> Oli_Radiator;
        cout <<"Kecacatan Minyak Rem :";
        cin >> Minyak_Rem;
        cout <<"Kecacatan Aki :";
        cin >> Aki;
        cout <<"Kecacatan ABS :";
        cin >> ABS;
        cout <<"Kecacatan Cooling System :";
        cin >> Cooling_system;

    }
};
int main(){
    string nama;
    cout <<"----------------------------------------------------"<<endl;
    cout <<"| Selamat Datang di Perusahaan Mobil Neo-Nusantara |" <<endl;
    cout <<"----------------------------------------------------"<<endl;
    cout <<"Nama Mekanik : ";
    cin >> nama;
    cout << "Selamat datang " << nama <<endl;
    cout <<"Selamat Bekerja :)"<<endl;
    Interior I;
    I.INTR();
    Eksterior E;
    E.EXTR();
    Mesin M;
    M.MSN();
    mobil m;
    m.TOTAL();
}
