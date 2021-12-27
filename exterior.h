#ifndef EXTERIOR_H
#define EXTERIOR _H

class Exterior
{
	private:
		
		int LampuUtama, LampuSein, LampuBelakang, PintuDepan, PintuBelakang, Roda, KapDepan;
		float rerata;
		
	public:
		
		Exterior(int LampuUtama, int LampuSein, int LampuBelakang, int PintuDepan, int PintuBelakang, int Roda, int KapDepan);
		float hitung();
		
};

#endif
