#include <iostream>
#include "interior.h"

using namespace std;

Interior::Interior(int KursiDepan, int KursiBelakang, int SabukPengaman, int KacaFilm, int HeadUnit, int Dashboard, int KarpetBawah)
{
	this->KursiDepan = KursiDepan;
	this->KursiBelakang = KursiBelakang;
	this->SabukPengaman = SabukPengaman;
	this->KacaFilm = KacaFilm;
	this->HeadUnit = HeadUnit;
	this->Dashboard = Dashboard;
	this->KarpetBawah = KarpetBawah;
}

float Interior::hitung()
{
	rerata = (KursiDepan + KursiBelakang + SabukPengaman + KacaFilm + HeadUnit + Dashboard + KarpetBawah) / 7;
	return rerata;
}
