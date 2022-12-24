#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#define Color_Red 12
#define Color_Yellow 14
#define Color_Blue 5
#define Color_Green 11
#define Color_verde 10
#define Color_amarillo 14
#define Color_celeste 11
#define Color_weed 15
using namespace std;

//PARA ALMACENAR LA INFORMACION DE UN CHOFER.
struct Tchofer
{
	int num;
};

struct TnodoA
{
	Tchofer informacion;
	TnodoA *sgt;
};

void leerChofer(Tchofer &info)
{
    fflush(stdin);
    cout<<"\nPOR FAVOR INGRESE EL NUMERO DEL CONDUCTOR QUE DESEA: ";
    cin>>info.num;
}

//PARA ALMACENAR LA INFORMACION DEL DESTINO.

struct Tdestino
{
    int num;
};


struct TnodoB
{
    Tdestino informacion;
    TnodoB *sgt;
};

void leerDestino(Tdestino &info)
{
    fflush(stdin);
    cout<<"\nPOR FAVOR INGRESE EL NUMERO DEL DESTINO QUE DESEA: ";
    cin>>info.num;

}

void escribirDestino(Tdestino &info)
{
    cout<<"\nDESTINO: "<<info.num;
}
//PARA ALMACENAR LA INFORMACION DE UNA PERSONA.

struct Tpersona
{
    char nombre[30];
    int dni;
};

struct TnodoC
{
    Tpersona informacion;
    TnodoC *sgt;
};

void leerPersona(Tpersona &info)
{
  cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;
  cout<<"\t\t\t\t\t\t\tINGRESE SUS DATOS: "<<endl;
  fflush(stdin);
  cout<<"\t\t\t\t\t\t\tIngrese su nombre: ";
  cin.getline(info.nombre,30,'\n');
  fflush(stdin);
  cout<<"\t\t\t\t\t\t\tIngrese su DNI: ";
  cin>>info.dni;
  fflush(stdin);
  cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;
}

void escribirPersona(Tpersona &info)
{
   cout<<"\t\t\t\t\t\t\t---------------------------------------"<<endl;
   cout<<"\t\t\t\t\t\t\t  *DATOS PERSONALES*"<<endl;
   cout<<"\n\t\t\t\t\t\t\t  NOMBRE: "<<info.nombre;
   cout<<"\n\t\t\t\t\t\t\t  DNI: "<<info.dni;
   cout<<"\n\t\t\t\t\t\t\t-------------------------------------"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;
}

void presentacion(void){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Blue);
cout<<"\n\n\n                              "<<endl;
cout<<"████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
cout<<"████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
cout<<"     ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒                                                                                                                                    "<<endl;
cout<<"     ▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒                      _________    _____              __ __     ___     ____            "<<endl;
cout<<"     ▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒                          |       |     |    \\  //      |     |    |  |          "<<endl;
cout<<"     ░█▀█▀█░█▀██░█▀█░█▄█▄█░                          |       |_____|     \\//       |     | ___|  |____        "<<endl;
cout<<"     ░█▀█▀█░█▀████▀█░█▄█▄█░                          |       |     |     //\\       |     |            |     "<<endl;
cout<<"     ████████▀█████████████                          |       |     |    //  \\    __|__   |        ____|    "<<endl;

cout<<"                                                                                                     "<<endl;
cout<<"     ┼┼┼┼┼┼┼▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄┼┼┼┼┼┼                                                    "<<endl;
cout<<"     ┼┼┼┼┼┼┼█▒▒░░░░░░░░░▒▒█┼┼┼┼┼┼                                                       "<<endl;
cout<<"     ┼┼┼┼┼┼┼┼█░░█░░░░░█░░█┼┼┼┼┼┼┼                                                      "<<endl;
cout<<"     ┼┼┼┼─▄▄──█░░░▀█▀░░░█──▄▄─┼┼┼                                                       "<<endl;
cout<<"     ┼┼┼┼█░░█─▀▄░░░░░░░▄▀─█░░█┼┼┼              █    █   ██     █   ████       █                  "<<endl;
cout<<"     ┼██░██░████░██░░░██░░░█████┼              █    █   █  █   █   █         ███            "<<endl;
cout<<"     ┼██▄██░██▄▄░██░░░██░░░██░██┼              █    █   █   █  █   ████     █   █         "<<endl;
cout<<"     ┼██▀██░██▀▀░██░░░██░░░██░██┼              █    █   █     ██       █   ███████            "<<endl;
cout<<"     ┼██░██░████░████░████░█████┼               ████    █      █   ████   █       █            "<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
cout<<"████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Blue);
cout<<"████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████"<<endl;
}

void Menu(void){
cout<<"\n\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
cout<<"\t\t\t\t                                    MENU                                "<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
cout<<"\t\t\t\t**************************************************************************"<<endl;
cout<<"\t\t\t\t**      (1)  CHOFERES DISPONIBLES                                       **"<<endl;
cout<<"\t\t\t\t**      (2)  DESTINO                                                    **"<<endl;
cout<<"\t\t\t\t**      (3)  TIEMPO DE VIAJE                                            **"<<endl;
cout<<"\t\t\t\t**      (4)  COMPRAR VIAJE                                              **"<<endl;
cout<<"\t\t\t\t**      (5)  SALIR                                                      **"<<endl;
cout<<"\t\t\t\t**                                                                      **"<<endl;
cout<<"\t\t\t\t**************************************************************************"<<endl;

}

void choferesDisponibles(TnodoA *&chofer)
{

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

	cout<<"\n\t<<CHOFERES DISPONIBLES ACTUALMENTE>>"<<endl<<endl;
	cout<<"\n**********************************"<<endl;
	cout<<"1- David Herrera Sanchez"<<endl;
	cout<<"\n**********************************"<<endl;

	cout<<"\n**********************************"<<endl;
	cout<<"2- Julio Marin Grau"<<endl;
	cout<<"\n**********************************"<<endl;

	cout<<"\n**********************************"<<endl;
	cout<<"3- Martin Quispe Olivera"<<endl;
	cout<<"\n**********************************"<<endl;

	cout<<"\n**********************************"<<endl;
	cout<<"4- Cristian Abando Molina"<<endl;
	cout<<"\n**********************************"<<endl;

	cout<<"\n**********************************"<<endl;
	cout<<"5- Estevan Alva Verastegui"<<endl;
	cout<<"\n**********************************"<<endl;

	chofer=new TnodoA;
	leerChofer(chofer->informacion);
	chofer->sgt=NULL;
	system("pause");
}

void viajarDestino(TnodoB *&destino)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_amarillo);
    cout<<"\n\t\t\t----------LUGARES DISPONILBES PARA VIAJAR----------"<<endl;

    cout<<"<< (1) Selva Alegre>>"; cout<<"\t\t<< (6)  Jose Luis Bustamante y Rivero>>";    cout<<"\t\t<< (11) Socabaya >>"<<endl;
    cout<<"<< (2) Miraflores>>"; cout<<"\t\t<< (7)  Mariano Melgar>>";    cout<<"\t\t<< (12) Tiabaya>>"<<endl;
    cout<<"<< (3) Cayma >>"; cout<<"\t\t<<        (8)  Paucarpata>>";    cout<<"\t\t<< (13) Uchumayo>>"<<endl;
    cout<<"<< (4) Cerro Colorado>>"; cout<<"\t\t<< (9)  Sabandia>>";    cout<<"\t\t<< (14) Yanahuara>>"<<endl;
    cout<<"<< (5) Hunter>>"; cout<<"\t\t<<        (10) Sachaca>>";    cout<<"\t\t<< (15) Yura >>";
    cout<<"\n";
    destino = new TnodoB;
    leerDestino(destino->informacion);
    destino->sgt=NULL;
    cout<<"\n";
    system("pause");

}

void tiempodeViaje(TnodoB *&destino)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_celeste);
    int op;
    op=destino->informacion.num;
    switch(op)
    {
        case 1:  cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO:  Selva Alegre.          **"<<endl;
                 cout<<"\t ** DISTANCIA: 11 km.                     **"<<endl;
                 cout<<"\t ** TIEMPO: 25 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 2:  cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Cayma.        **"<<endl;
                 cout<<"\t ** DISTANCIA: 9.3 km.                    **"<<endl;
                 cout<<"\t ** TIEMPO: 23 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 3:  cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Cerro Colorado .      **"<<endl;
                 cout<<"\t ** DISTANCIA: 10 km.                     **"<<endl;
                 cout<<"\t ** TIEMPO: 20 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 4:  cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Cerro Colorado.           **"<<endl;
                 cout<<"\t ** DISTANCIA: 25 km.                     **"<<endl;
                 cout<<"\t ** TIEMPO: 39 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 5:  cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Hunter.        **"<<endl;
                 cout<<"\t ** DISTANCIA: 10 km.                     **"<<endl;
                 cout<<"\t ** TIEMPO: 27 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 6:  cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Jose Luis Bustamante y Rivero.        **"<<endl;
                 cout<<"\t ** DISTANCIA: 5.3 km.                    **"<<endl;
                 cout<<"\t ** TIEMPO: 12 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 7:  cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Mariano Melgar.          **"<<endl;
                 cout<<"\t ** DISTANCIA: 8.8 km.                    **"<<endl;
                 cout<<"\t ** TIEMPO: 28 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 8:  cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Paucarpata.            **"<<endl;
                 cout<<"\t ** DISTANCIA: 19 km.                     **"<<endl;
                 cout<<"\t ** TIEMPO: 38 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 9:  cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Sabandia.             **"<<endl;
                 cout<<"\t ** DISTANCIA: 8.3 km.                    **"<<endl;
                 cout<<"\t ** TIEMPO: 25 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 10: cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Sachaca.           **"<<endl;
                 cout<<"\t ** DISTANCIA: 14 km.                     **"<<endl;
                 cout<<"\t ** TIEMPO: 34 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 11: cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO:  Socabaya.         **"<<endl;
                 cout<<"\t ** DISTANCIA: 7.8 km.                    **"<<endl;
                 cout<<"\t ** TIEMPO: 15 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 12: cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Tiabaya.           **"<<endl;
                 cout<<"\t ** DISTANCIA: 5.5 km.                    **"<<endl;
                 cout<<"\t ** TIEMPO: 14 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 13: cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Uchumayo.            **"<<endl;
                 cout<<"\t ** DISTANCIA: 12 km.                     **"<<endl;
                 cout<<"\t ** TIEMPO: 37 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;

        case 14: cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Yanahuara.              **"<<endl;
                 cout<<"\t ** DISTANCIA: 33 km.                     **"<<endl;
                 cout<<"\t ** TIEMPO: 36 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;


        case 15: cout<<"\n\t\t------TIEMPO DE VIAJE------"<<endl;
                 cout<<"\n\t *******************************************"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t ** DESTINO ELEGIDO: Yura.   **"<<endl;
                 cout<<"\t ** DISTANCIA: 24 km.                     **"<<endl;
                 cout<<"\t ** TIEMPO: 46 min.                       **"<<endl;
                 cout<<"\t **                                       **"<<endl;
                 cout<<"\t *******************************************";
                 break;
    }

}

void comprarViaje(TnodoA *&chofer,TnodoB *&destino)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_weed);
char conf[5];
TnodoC *persona;
persona=new TnodoC;
leerPersona(persona->informacion);
system("cls");

if(chofer->informacion.num==1 && destino->informacion.num==1)
{
   cout<<"\n\n\n7t\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Selva Alegre."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}
if(chofer->informacion.num==1 && destino->informacion.num==2)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Miraflores."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==1 && destino->informacion.num==3)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Cayma."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/2.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==1 && destino->informacion.num==4)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Cerro Colorado."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}

if(chofer->informacion.num==1 && destino->informacion.num==5)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Hunter."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}

if(chofer->informacion.num==1 && destino->informacion.num==6)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Jose Luis Bustamante y Rivero."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/1.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==1 && destino->informacion.num==7)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Mariano Melgar."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}



if(chofer->informacion.num==1 && destino->informacion.num==8)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Paucarpata."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==1 && destino->informacion.num==9)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Sabandia."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==1 && destino->informacion.num==10)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Sachaca."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}



if(chofer->informacion.num==1 && destino->informacion.num==11)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Socabaya."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/2.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==1 && destino->informacion.num==12)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Tiabaya."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/1.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==1 && destino->informacion.num==13)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Uchumayo."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==1 && destino->informacion.num==14)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Yanahuara."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==2 && destino->informacion.num==15)
{
   cout<<"\n\n\n\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  David Herrera Sanchez."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Yura."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}

//-------------------------------------------------------------------------------------------------------------------------
if(chofer->informacion.num==2 && destino->informacion.num==1)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Selva Alegre."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}
if(chofer->informacion.num==2 && destino->informacion.num==2)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Miraflores."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==2 && destino->informacion.num==3)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Cayma."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/2.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==2 && destino->informacion.num==4)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Cerro Colorado."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}

if(chofer->informacion.num==2 && destino->informacion.num==5)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Hunter."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}

if(chofer->informacion.num==2 && destino->informacion.num==6)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Jose Luis Bustamante y Rivero."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/1.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==2 && destino->informacion.num==7)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Mariano Melgar."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}



if(chofer->informacion.num==2 && destino->informacion.num==8)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Paucarpata."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==2 && destino->informacion.num==9)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Sabandia."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==2 && destino->informacion.num==10)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Sachaca."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}



if(chofer->informacion.num==2 && destino->informacion.num==11)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Socabaya."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/2.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==2 && destino->informacion.num==12)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Tiabaya."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/1.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==2 && destino->informacion.num==13)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Uchumayo."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==2 && destino->informacion.num==14)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Yanahuara."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}


if(chofer->informacion.num==2 && destino->informacion.num==15)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER: Julio Marin Grau."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Yura."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }

}

if(chofer->informacion.num==3 && destino->informacion.num==1)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Selva Alegre."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }
}
if(chofer->informacion.num==3 && destino->informacion.num==2)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Miraflores."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==3)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Cayma."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/2.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==4)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Cerro Colorado."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==5)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Hunter."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==6)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Jose Luis Bustamante y Rivero."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/1.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==7)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Mariano Melgar."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==8)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Paucarpata."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==9)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Sabandia."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==10)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Sachaca."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==11)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Socabaya."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/2.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==12)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Tiabaya."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/1.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==13)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Uchumayo."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==14)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Yanahuara."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/7.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==3 && destino->informacion.num==15)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Martin Quispe Olivera."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Yura."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

//-------------------------------------------------------------------------------------------------

if(chofer->informacion.num==4 && destino->informacion.num==1)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Selva Alegre."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }
}
if(chofer->informacion.num==4 && destino->informacion.num==2)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Miraflores."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==3)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Cayma."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/2.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==4)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Cerro Colorado."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==5)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Hunter."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==6)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Jose Luis Bustamante y Rivero."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/1.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==7)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Mariano Melgar."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==8)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Paucarpata."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==9)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Sabandia."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==10)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Sachaca."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==11)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Socabaya."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/2.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==12)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Tiabaya."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/1.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==13)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Uchumayo."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==14)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Yanahuara."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/7.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==4 && destino->informacion.num==15)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Cristian Abanto Molina."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Yura."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

//--------------------------------------------------------------------------------------------------------------


if(chofer->informacion.num==5 && destino->informacion.num==1)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Selva Alegre."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;

   }
}
if(chofer->informacion.num==5 && destino->informacion.num==2)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Miraflores."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==3)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Cayma."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/2.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==4)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Cerro Colorado."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==5)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Hunter."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==6)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Jose Luis Bustamante y Rivero."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/1.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==7)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Mariano Melgar."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==8)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Paucarpata."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==9)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Sabandia."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==10)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Sachaca."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/3.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==11)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Socabaya."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/2.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==12)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Tiabaya."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/1.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==13)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Uchumayo."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/4.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==14)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Yanahuara."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/7.00. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}

if(chofer->informacion.num==5 && destino->informacion.num==15)
{
   cout<<"\n\n\nt\t\t\t\t\t\t\t\t>>>>>>>>>>>COMPRAR VIAJE<<<<<<<<<<<"<<endl;
   cout<<"\t\t\t\t\t\t\t████████████████████████████████████████████████████"<<endl;

   cout<<"\t\t\t\t\t\t\t  CHOFER:  Estevan Alva Verastegui."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  DESTINO: Yura."<<endl;
   cout<<"\n\t\t\t\t\t\t\t  PRECIO: s/5.50. "<<endl;
   escribirPersona(persona->informacion);
   fflush(stdin);
   cout<<"\t\t\t\t\t\t\tSus datos estan conformes?: ";
   cin.getline(conf,5,'\n');
   if(strcmp(conf,"si")==0||strcmp(conf,"SI")==0)
   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_verde);

       cout<<"\n\n\t\t\t\t\t\t\t***********************************************************"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*| GRACIAS POR UTILIZAR TAXI PS, VUELVE PRONTO!!!  |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t|*|                                                     |*|"<<endl;
       cout<<"\t\t\t\t\t\t\t***********************************************************"<<endl;
   }
}
}

int main ()
{

TnodoA *chofer;
TnodoB *destino;
int op;
do
{
presentacion();
Menu();
cout<<"Por favor ingrese una opcion: ";
cin>>op;
system("cls");
switch(op)
{
	case 1: choferesDisponibles(chofer);
            cout<<"\n";
            break;
	case 2: viajarDestino(destino);
            cout<<"\n";
            break;
    case 3: tiempodeViaje(destino);
            cout<<"\n";
            system("pause");
            break;
    case 4: comprarViaje(chofer,destino);
            cout<<"\n";
            system("pause");

}
system("cls");

}while(op!=5);

return 0;

}

