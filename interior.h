#ifndef INTERIOR_H
#define INTERIOR_H

class Interior
{
	private:
		
		int KursiDepan, KursiBelakang, SabukPengaman, KacaFilm, HeadUnit, Dashboard, KarpetBawah;
		float rerata;
		
	public:
		
		Interior(int KursiDepan, int KursiBelakang, int SabukPengaman, int KacaFilm, int HeadUnit, int Dashboard, int KarpetBawah);
		float hitung();
		
};

#endif
