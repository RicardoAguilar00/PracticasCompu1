#ifndef GRUPO_H
#define GRUPO_H

#include <string>

class Grupo
{
	public:
		Grupo(std::string, float, int);
		Grupo();
		float getpka();
		int getCarga();
		void setCarga(int);
		
	private:
		std::string nombreGrupo;
	    float pkGrupo;
	    int cargaGrupo;
};


#endif
