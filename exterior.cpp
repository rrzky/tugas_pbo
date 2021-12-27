#include <iostream>
#include "exterior.h"

using namespace std;

Exterior::Exterior(int LampuUtama, int LampuSein, int LampuBelakang, int PintuDepan, int PintuBelakang, int Roda, int KapDepan)
{
	this->LampuUtama = LampuUtama;
	this->LampuSein = LampuSein;
	this->LampuBelakang = LampuBelakang;
	this->PintuDepan = PintuDepan;
	this->PintuBelakang = PintuBelakang;
	this->Roda = Roda;
	this->KapDepan = KapDepan;
}

float Exterior::hitung()
{
	rerata = (LampuUtama + LampuSein + LampuBelakang + PintuDepan + PintuBelakang + Roda + KapDepan) / 7;
	return rerata;
}
