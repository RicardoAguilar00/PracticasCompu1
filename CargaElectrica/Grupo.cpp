#include "Grupo.h"

Grupo::Grupo(std::string _nombreGrupo,float _pkGrupo,int _cargaGrupo)
{
	nombreGrupo = _nombreGrupo;
	pkGrupo = _pkGrupo;
	cargaGrupo = _cargaGrupo;
}

Grupo::Grupo(){
	nombreGrupo = "";
	pkGrupo = 0;
	cargaGrupo = 0;
}

float Grupo::getpka(){
	return pkGrupo;
}
		
int Grupo::getCarga(){
	return cargaGrupo;
}

void Grupo::setCarga(int a){
	cargaGrupo += a;
}
