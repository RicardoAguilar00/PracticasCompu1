//
// Author: Ricardo Aguilar Hernández
// 12/Nov/2021
//

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H
#include <vector>

using namespace std;

class Punto2D {
public:
    Punto2D();
    void SetPosicion(float x, float y);
    void Trasladar(float temp1, float temp2);
    void RotarRespectoAlOrigen(float temp1);
    void Escalar(float temp1, float temp2);
    float GetX();
    float GetY();

private:
    float a, b, c;
};


#endif //PUNTOS_PUNTO_H
