#include <iostream>
using namespace std;

class Figura{
private:
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};

class cuadrado:public Figura{
    cuadrado():Figura()
    cuadrado(int b,int h,):Figura( b,  h);
    




};
class rectangulo:public Figura {
rectangulo(int b,int h):Figura(int b, int h);
};
class triangulo:public Figura{
    triangulo():Figura();
    triangulo
}
/*
    Implementa los constructores y funciones de la clase Figura.
    El área NO se debe de asignar en el constructor de Figura, ÚNICAMENTE en el constructor individual de cada figura.
*/

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Asignar el área del cuadrado.
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Asignar el área del Rectángulo.
*/

/*
    Implementa la clase Triángulo que hereda de Figura.
    Crear constructor de Triángulo que herede del constructor de Figura.
    Asignar el área del Triángulo.
*/

int main () {

    cuadrado s(5);
    cout << s.getArea() << endl; // 25
    rectangulo r(5,5);
    cout << r.getArea() << endl; // 25
    triangulo (5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}


Figura::Figura(){
    b=0:
    h=0;
    a=0;
}

Figura::Figura(int b,int h){
this->b=b;
this->h=h;
a=0;
}

void Figura:: setArea(float a){

    a=this->a;

}

float Figura::getArea(){
a=this->a;
    cout<<"Esta es el area de su figura"<<this->a<<endl;
}

/*Notas
Puedes hacer uso de tus trabajos pasados así como de la documentación de C++
*/ 