#include "esfera.h"
/**
 * @file    esfera.cpp
 * @brief   Classe Esfera
*/
Esfera::Esfera(float raio_){
    raio = raio_;
}
void Esfera::setRaio(float raio_){
    raio = raio_;
}
float Esfera::getRaio(){
    return raio;
}
Esfera::~Esfera(){

}