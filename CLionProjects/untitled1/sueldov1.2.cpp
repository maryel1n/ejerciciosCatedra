
#include <iostream>
#include <stdlib.h>

using namespace std;

//Constructora EAG

int main(){
    //variables
    int hrJornada=40;
    int valHr=0, hrSem=0, hrExtra=0, pago=0, hrExceso=0, hrExtraFix=18;
    float pagoExtra=0;

    //Dato
    cout<<"\n\n\t PAGO HORAS SEMANALES   \n\n";
    cout<<"\n\n Ingrese Valor Hora: ";
    cin>>valHr;
    cout<<"\n\t Ingrese Total Horas semanales: ";
    cin>>hrSem;
    //proceso y selección

    if (hrSem<=hrJornada){
        pago=hrSem*valHr;
    } else if (hrSem<=48){
        hrExtra=hrSem-hrJornada;
        pagoExtra=(valHr*1.6)*hrExtra;
        pago=valHr*hrJornada;

    } else if (hrSem<59) {
        hrExtra=hrSem-hrJornada;
        pagoExtra=((valHr*1.6)*8) + ((valHr*2.0)*(hrExtra-8));
        pago=valHr*hrJornada;
    } else{
        //calcular hora exceso
        hrExtra=hrSem-hrJornada;
        hrExceso=hrExtra-hrExtraFix;
        pagoExtra=((valHr*1.6)*8) + ((valHr*2.0)*(hrExtraFix-8));
        pago=valHr*hrJornada;
    }

    //Resultados
    cout<<"\n\n\t Pago Semanal $"<<pago<<endl;
    cout<<"\n\n\t Pago Extra $"<<pagoExtra<<endl;
    cout<<"\n\n\t Total Semanal $"<<pago+pagoExtra<<endl;
    cout<<"\n\n\t .....Se trabajaron "<<hrExceso<<" horas de Exceso.....\n\n";


    system("pause");
    return 0;
}