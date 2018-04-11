#include <iostream>
#include <cstdlib>
using namespace std;
/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
    (en clase) por mas de 24 hrs el vehiculo se manda al corralón :D
*/

int ep1, ep2, ep3, ep4;
int epExpected[4];
int bvaExpected[6] = {0,10,50,54,90,77};
char epResult[4];
char bvaResult[6];
int bva[6] = {0,1,5,6,10,11};

float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void initEP()
{
    ep1= (rand() % 100 + 1)* (-1);
    ep2= rand() %  4 +  1;
    ep3= rand() %  4 +  6;
    ep4= rand() % 14 + 11;

    epExpected[0] = -1; 
    epExpected[1] = ep2*10; 
    epExpected[2] = ep3* 9; 
    epExpected[3] = ep4* 7; 
}




void result(){
	(epExpected[0]==pago_estacionamiento(ep1))?epResult[0]='P':epResult[0]='F';
	(epExpected[1]==pago_estacionamiento(ep2))?epResult[1]='P':epResult[1]='F';
	(epExpected[2]==pago_estacionamiento(ep3))?epResult[2]='P':epResult[2]='F';
	(epExpected[3]==pago_estacionamiento(ep4))?epResult[3]='P':epResult[3]='F';

	(bvaExpected[0]==pago_estacionamiento(bva[0]))?bvaResult[0]='P':bvaResult[0]='F';
	(bvaExpected[1]==pago_estacionamiento(bva[1]))?bvaResult[1]='P':bvaResult[1]='F';
	(bvaExpected[2]==pago_estacionamiento(bva[2]))?bvaResult[2]='P':bvaResult[2]='F';
	(bvaExpected[3]==pago_estacionamiento(bva[3]))?bvaResult[3]='P':bvaResult[3]='F';
	(bvaExpected[4]==pago_estacionamiento(bva[4]))?bvaResult[4]='P':bvaResult[4]='F';
	(bvaExpected[5]==pago_estacionamiento(bva[5]))?bvaResult[5]='P':bvaResult[5]='F';
}

void casos_de_prueba(){
	initEP();
	result();
    cout << "Equivalence Partitioning...\n" << endl;
    cout << "Test data\tExpected\tActual\tPass/Fail" << endl;
    cout << "________________________________________________________________"<<endl;
    cout <<ep1<<"\t"<<epExpected[0]<<"\t"<<pago_estacionamiento(ep1)<<"\t"<<epResult[0]<<endl;
    cout <<ep2<<"\t"<<epExpected[1]<<"\t"<<pago_estacionamiento(ep2)<<"\t"<<epResult[1]<<endl;
    cout <<ep3<<"\t"<<epExpected[2]<<"\t"<<pago_estacionamiento(ep3)<<"\t"<<epResult[2]<<endl;
    cout <<ep4<<"\t"<<epExpected[3]<<"\t"<<pago_estacionamiento(ep4)<<"\t"<<epResult[3]<<endl<<endl;
    cout << "________________________________________________________________"<<endl;   
    cout << "Boundary Values Analisis...\n" << endl;
    cout <<bva[0]<<"\t"<<bvaExpected[0]<<"\t"<<pago_estacionamiento(bva[0])<<"\t"<<bvaResult[0]<<endl;
    cout <<bva[1]<<"\t"<<bvaExpected[1]<<"\t"<<pago_estacionamiento(bva[1])<<"\t"<<bvaResult[1]<<endl;
    cout <<bva[2]<<"\t"<<bvaExpected[2]<<"\t"<<pago_estacionamiento(bva[2])<<"\t"<<bvaResult[2]<<endl;
    cout <<bva[3]<<"\t"<<bvaExpected[3]<<"\t"<<pago_estacionamiento(bva[3])<<"\t"<<bvaResult[3]<<endl;
    cout <<bva[4]<<"\t"<<bvaExpected[4]<<"\t"<<pago_estacionamiento(bva[4])<<"\t"<<bvaResult[4]<<endl;
    cout <<bva[5]<<"\t"<<bvaExpected[5]<<"\t"<<pago_estacionamiento(bva[5])<<"\t"<<bvaResult[5]<<endl;

    cout <<endl;
}

int main()
{

    casos_de_prueba();

	return 0;
}