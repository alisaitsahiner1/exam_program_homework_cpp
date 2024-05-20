
#include <iostream>
#include <string>
#include<conio.h>


using namespace std;

int işaretlenen_şık;
int puan = 0;

class Öğrenci       //class tanımı
{
private:
	string ad;
	string soyad;     //değişken tanımlamaları
	string tckimlikno;
	
	int şifre;
public:
	void değerAta(string, string, string, int);  //fonksiyon tanımlamaları
	void öğrenciYazdır();
	void öğrenciEkle();
	void öğrenciSil();
};
void Öğrenci::değerAta(string a, string sa, string tc, int ş)  //fonksiyonun içini doldurma
{
	ad = a;
	soyad = sa;
	tckimlikno = tc;
	şifre = ş;
}
void Öğrenci::öğrenciYazdır()
{
	cout << endl;
	cout << "Öğrenci Adı :" << ad << endl;
	cout << "Öğrenci Soyadı:" << soyad << endl;

}
//****************************************************************************
//*************************************************************************** SORULAR CLASSI
class Sorular
{
private:
	string soruMetni;   //değişken tanımlamaları
	string cevap1;
	string cevap2;
	string cevap3;
	string cevap4;



	int doğruCevap;

public:
	void değerleriAta(string, string, string, string, string, int);  //fonksiyon tanımlamaları
	void soruYazdır();
	void soruEkle();
	void soruSil();

};
void Sorular::değerleriAta(string s, string c1, string c2, string c3, string c4, int dc)
{
	soruMetni = s;    //fonksiyonların içini doldurma
	cevap1 = c1;
	cevap2 = c2;
	cevap3 = c3;
	cevap4 = c4;
	doğruCevap = dc;
}
void Sorular::soruYazdır()
{


	cout << endl;
	cout << soruMetni << endl;
	cout << "1. " << cevap1 << endl;
	cout << "2. " << cevap2 << endl;
	cout << "3. " << cevap3 << endl;
	cout << "4. " << cevap4 << endl;
	cout << endl;
	cout << "Cevabınız : ";cin >> işaretlenen_şık;

	if (işaretlenen_şık == doğruCevap)   //seçilen seçenek doğru mu yanlış mı
	{
		cout << "Tebrikler Doğru Cevap " << endl;

		puan += 20;
		

	}
	else
	{
		cout << "Maalesef Yanlış Cevap" << endl;
	}
	cout << "************************************************************" << endl;
}
void Sorular::soruEkle()
{
	string soruMetni, cevap1, cevap2, cevap3, cevap4;
	int doğruŞık;

	Sorular s1;

	cout << "Soru metnini giriniz : ";cin >> soruMetni;
	cout << "1. Şıkkı giriniz : ";cin >> cevap1;
	cout << "2. Şıkkı giriniz : ";cin >> cevap2;
	cout << "3. Şıkkı giriniz : ";cin >> cevap3;
	cout << "4. Şıkkı giriniz : ";cin >> cevap4;
	cout << "Kaçıncı Şık Doğru Cevap : ";cin >> doğruŞık;

	s1.değerleriAta(soruMetni, cevap1, cevap2, cevap3, cevap4, doğruŞık);



}
void Sorular::soruSil()
{

}
	
//******************************************************************************************************************************
//*****************************************************************************************************************************


int main()
{
	setlocale(LC_ALL, ("Turkish"));

	cout << "***************************SINAV UYGULAMASINA HOŞGELDİNİZ********************" << endl; //uygulama menüsü
	cout << "1-SINAVA GİRİŞ YAP" << endl;
	cout << "2-ADMİN GİRİŞİ" << endl << endl << endl;;

	int seçim;
	cout << "Yapmak istediğiniz işlemi seçin...";cin >> seçim;

	switch (seçim)   //1 ile sınava gir 2 ile admin menüsüne git
	{
		//**********************************************************SINAVA GİRİŞ
	case 1:
	{
		string tckimlikno="12345678901";
		int şifre = 1234;

		cout << "Tc kimlik no ve şifenizi giriniz..." << endl;
		cout << "Tc kimlik no :";cin >> tckimlikno;
		cout << "Şifre :";cin >> şifre;

		for (int i = 0;i < 10;i++) //soruları döndürme
		{
			if (tckimlikno=="12345678901" && şifre==1234)
			{
				Sorular s1, s2, s3, s4, s5;
				
				

				cout << "SINAVA GİRİŞ YAPILDI... BAŞARILAR" << endl << endl;   //sınav ekranı

				s1.değerleriAta("Türkiye'nin başkenti neresidir ?",
					"A. Ankara",
					"B. İstanbul",
					"C. İzmir",
					"D. Sakarya",
					1
					);
				s2.değerleriAta("Aşağıdakilerden hangisi sesli harfdir ?",
					"A. V",
					"B. L",
					"C. O",
					"D. K",
					3
					);
				s3.değerleriAta("Süper Lig 2010-2011 Şampiyonu hangi takımdır ?",
					"A. Galatasaray",
					"B. Fenerbahçe",
					"C. Beşiktaş",
					"D. Sakaryaspor",
					2
					);
				s4.değerleriAta("İngiltere'nin başkenti neresidir ?",
					"A. Paris",
					"B. Londra",
					"C. Berlin",
					"D. Washington",
					2
					);
				s5.değerleriAta("(5x3)-4=?",
					"A. 11",
					"B. 10",
					"C. 9",
					"D. 8",
					1
					);
				s1.soruYazdır();
				s2.soruYazdır();
				s3.soruYazdır();
				s4.soruYazdır();
				s5.soruYazdır();

				cout << "**************************" << endl;
				cout << "Notunuz :" << puan;
			
				break;
				
			}
			else
			{
				cout << "TC VEYA ŞİFRE HATALI!" << endl;
				break;
			}

		}
	}break;
	//********************************************************************ADMİN GİRİŞİ
	case 2:
	{
		string adminId = "admin";
		int adminşifre = 1234;

		cout << "ADMİN GİRİŞİNE HOŞGELDİNİZ" << endl << endl;
		cout << "ADMİN İD VE ŞİFRESİNİ GİRİNİZ      (id=admin  ,  şifre=1234)" << endl << endl;

		cout << "ADMİN ID GİRİNİZ :";cin >> adminId;
		cout << "ADMİN ŞİFRE GİRİNİZ :";cin >> adminşifre;




		//****************************************************ADMİN EKRANI
		if (adminId == "admin" && adminşifre == 1234)  //admin şifresi ve kullanıcı adı ile giriş
		{
			int adminSeçim = 0;
			

			cout << "ADMİN GİRİŞİ YAPILDI..." << endl << endl;

			while (adminSeçim != 8)
			{
				cout << "********ADMİN MENÜ********" << endl; //admin menü ekranı
				cout << "1-Soru Ekleme" << endl;
				cout << "2-Soru Silme" << endl;
				cout << "3-Öğrenci Listesi" << endl;
				cout << "4-Öğrenci Ekle" << endl;
				cout << "5-Öğrenci Sil" << endl;
				cout << "6-Öğrenci Güncelle" << endl;
				cout << "7-Sınav Süresi Belirle" << endl;
				cout << "8-Çıkış" << endl;

				int adminSeçim;
				int ogrenciNo[6];
				string ogrenciAd[6];
				string ogrenciSoyad[6];

				ogrenciNo[0] = 1234;    //default öğrenci tanımlamaları
				ogrenciAd[0] = "Ali";
				ogrenciSoyad[0] = "Şahiner";

				ogrenciNo[1] = 9876;
				ogrenciAd[1] = "Fatma";
				ogrenciSoyad[1] = "Yılmaz";

				ogrenciNo[2] = 2345;
				ogrenciAd[2] = "Kıvanç";
				ogrenciSoyad[2] = "Tatlıtuğ";
				
				ogrenciNo[3] = 3456;
				ogrenciAd[3] = "Acun ";
				ogrenciSoyad[3] = "Ilıcalı";

				ogrenciNo[4] = 4567;
				ogrenciAd[4] = "Altay";
				ogrenciSoyad[4] = "Bayıındır";

				ogrenciNo[5] = {};
				ogrenciAd[5] = {};
				ogrenciSoyad[5] = {};


				cout << "YAPMAK İSTEDİĞİNİZ İŞLEMİ SEÇİNİZ";cin >> adminSeçim;
				switch (adminSeçim)    //menüdeki seçeneklerin switch case ile kullanımı
				{
				case 1://soru ekleme
				{
					Sorular s1;

					s1.soruEkle();
					


				}break;
				case 2:
				{
					//Soru silme metodu
				}break;
				case 3:       //öğrenci listeleme sayfasu
				{
					cout << endl << "Ogrenci Listeleme Sayfasi" << endl;
					cout << endl << "OgrenciNo\tOgrenciAdi\tOgrenciSoyadi-\tNot" << endl;
					cout << endl << "---------\t----------\t-------------\t------" << endl;

					int i;
					for (i = 0;i < 6;i++)   //öğrencileri yazdırma
					{
						if (ogrenciNo[i] != 0) 
						{
							cout << endl << ogrenciNo[i] << "\t\t" << ogrenciAd[i] << "\t\t" << ogrenciSoyad[i] << endl;
						}
						else
						{
							cout << "-------- - \t----------\t------------ -" << endl;
						}
					}
				}break;
				case 4: //***********************************************ÖĞRENCİ EKLE
				{
					cout << endl << "Ogrenci Ekleme Sayfasi" << endl;

					int oNo;
					string oAd, oSoyad;

					int control2 = 0;

					while (control2 == 0)
					{
						cout << endl << "Eklemek Istediginiz Ogrencinin Nosu?";
						cin >> oNo;

						if ((oNo >= 1000) && (oNo <= 9999)) //öğrenci no su 1000 ile 9999 arasında olmalı
						{
							int j, ogrenciVarmi = 0;
							for (j = 0;j < 6;j++) //eklenecek öğrenci normalde var mı yok mu
							{
								if (ogrenciNo[j] == oNo)
								{
									ogrenciVarmi = 9;
									cout << endl << "Girdiginiz Ogrenci Var!" << endl;
									break;
								}
							}

							if (ogrenciVarmi == 0)
								control2 = 8;

						}
						else
						{
							cout << endl << "OgrenciNo Pozitif Ve 4 Haneli Olmalidir!" << endl;
						}
					}


					cout << "Eklemek Istediginiz Ogrencinin Adi?";
					cin >> oAd;

					cout << "Eklemek Istediginiz Ogrencinin Soyadi?";
					cin >> oSoyad;


					int i;
					for (i = 0;i < 6;i++) // koşullar sağlanırsa öğrenci ekleme
					{
						if (ogrenciNo[i] == 0)
						{
							ogrenciNo[i] = oNo;
							ogrenciAd[i] = oAd;
							ogrenciSoyad[i] = oSoyad;

							cout << "Kaydiniz Basariyla Eklendi";
							break;
						}
					}

				}break;
				case 5: //******************************************************************ÖĞRENCİ SİL
				{
					cout << endl << "Ogrenci Silme Sayfasi" << endl;

					int oNo;
					int control2 = 0;

					while (control2 == 0)
					{
						cout << "Silmek Istediginiz Ogrencinin Nosu?";
						cin >> oNo;

						if ((oNo >= 1000) && (oNo <= 9999)) //öğrenci no su şartlara uygun mu
						{
							control2 = 1;
						}
						else
						{
							cout << endl << "OgrenciNo Pozitif Ve 4 Haneli Olmalidir!" << endl;
						}
					}

					int control = 0;

					int i;
					for (i = 0;i < 6;i++) //ööğrenci bilgilerini silme
					{
						if (ogrenciNo[i] == oNo)
						{
							control = 1;

							ogrenciNo[i] = 0;
							ogrenciAd[i] = "";
							ogrenciSoyad[i] = "";

							cout << endl << "Silme Islemi Basariyla Tamamlandi" << endl;
						}
					}

					if (control == 0) // silinecek öğrenci bulunamadı
					{
						cout << endl << "Aradiginiz Ogrenci Bulunamadi" << endl;
					}

				}break;
				case 6://Öğrenci Güncelle
				{
					cout << endl << "Ogrenci Guncelleme Sayfasi" << endl;

					int oNo;
					int control3 = 0;

					while (control3 == 0)
					{
						cout << "Guncellemek Istediginiz Ogrencinin Nosu?";
						cin >> oNo;

						if ((oNo >= 1000) && (oNo <= 9999)) //öğrenci nosu şartları karşılıyor mu
						{
							control3 = 1;
						}
						else
						{
							cout << endl << "OgrenciNo Pozitif Ve 4 Haneli Olmalidir!" << endl;
						}
					}

					int control4 = 0;

					int i;
					for (i = 0;i < 6;i++) //bilgileri güncelleme
					{
						if (ogrenciNo[i] == oNo)
						{
							control4 = 1;

							int yoNo;
							string yoAd, yoSoyad;

							cout << endl << "Yeni numarayi giriniz: " << endl;
							cin >> yoNo;
							ogrenciNo[i] = yoNo;
							cout << endl << "Yeni Ogrencinin Adi: " << endl;
							cin >> yoAd;
							ogrenciAd[i] = yoAd;
							cout << endl << "Yeni Ogrencinin Soyadi: " << endl;
							cin >> yoSoyad;
							ogrenciSoyad[i] = yoSoyad;


							cout << endl << "Guncelleme Islemi Basariyla Tamamlandi" << endl;
						}
					}

					if (control4 == 0) //öğrenci yok ise
					{
						cout << endl << "Aradiginiz Ogrenci Bulunamadi" << endl;
					}
				}break;
				case 7:
				{
					//SINAV SÜRESİ BELİRLEME METODU
				}break;
				case 8: //ÇIKIŞ
				{
					cout << endl << "Uygulamadan Cikiliyor..." << endl;

					exit(0);
				}
				default:
				{
					cout << "HATALI TUŞLAMA YAPTINIZ" << endl;
				}
				break;
				}
			}
		}
		else
		{
			cout << "HATALI TUŞLAMA YAPTINIZ" << endl;
		}

	}break;
	default:
	{
		cout << "HATALI TUŞLAMA YAPTINIZ !" << endl;
	}
	break;
	}

}

