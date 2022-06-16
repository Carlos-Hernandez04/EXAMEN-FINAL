#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include "usuario.h"


using namespace std;

usuario::usuario()
{
    //ctor
}

usuario::~usuario()
{
    //dtor
}

void usuario::menu()
{
    int choice;
    char s;
    do

    {
    system("cls");
    cout << "-------------------------------------------"<<endl;
    cout << "|        AUTENTICACION DE USUARIOS         |"<<endl;
    cout << "-------------------------------------------"<<endl;
    cout << " 1. Ingresar"<<endl;
    cout << " 2. Salir"<<endl;

    cout << "-------------------------------------------"<<endl;
    cout << "Opciones : [1/2]"<<endl;
    cout << "-------------------------------------------"<<endl;
    cout << "Seleccione su opcion: "<<endl;
    cin>>choice;

    switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        exit(0);
                        break;
                default:

                        cout<<"Hiciste algo mal, prueba de nuevo"<<endl;

        }
        getch();
    }while(choice!= 2);
}
void usuario::login()
{
    int count;
    string nombre, contra, n, c;
    system("cls");
    cout << "--------------------------------------------"<<endl;
    cout << "|        SISTEMA DE AUTENTICACION          |"<<endl;
    cout << "--------------------------------------------"<<endl;
    cout << " Nombre de Usuario:"<<endl;
    cin >>nombre;
    cout << " Contraseña:"<<endl;
    cin >>contra;

    ifstream input("RegistroLog.txt");
        while(input>>n>>c)
        {
                if(n==nombre && c==contra)

                {
                        count=0;
                        system("cls");
                }
        }
        input.close();
        if(count==0)
        {
                cout<<"\n"<< nombre<<"\nACCESO CORRECTO";
                cin.get();
                cin.get();
                usuario::menu1();


        }
        else
        {
                cout<<"\nACCESO DENEGADO \nEl usuario o contraseña son invalidos\n";
        }
}
void usuario::menu1()
{
    int choice;
    char s;
    do
    {
        system ("cls");

        cout << "\t\t\t ------------------------------------------------"<<endl;
        cout << "\t\t\t | 9959-21-363 Carlos Emanuel Hernandez Garcia  |"<<endl;
        cout << "\t\t\t ------------------------------------------------"<<endl;
        cout << "\t\t\t  1. Catalogos"<<endl;
        cout << "\t\t\t  2. Procesos"<<endl;
        cout << "\t\t\t  3. Informes "<<endl;
        cout << "\t\t\t  4. Salida"<<endl;

        cout << "\t\t\t ---------------------------------------"<<endl;
        cout << "\t\t\t | Opcion a escoger : [1/2/3/4]        |"<<endl;
        cout << "\t\t\t ---------------------------------------"<<endl;
        cout << "\t\t\t Selecciona tu opcion: "<<endl;
        cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		mantenimientos();
    		cout << "\t\t\t\t ¿Quieres seguir en el apartado de Crud? (S/N)";
    		cin>>s;
		}while(s=='s'||s=='S');
		break;
/*    case 2: procesos();
    break;*/
    case 3: informes();
    break;
    case 4:
		exit(0);
	default:
		cout << "\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 4);
}
void usuario::mantenimientos()
{
    int choice;
    char s;
    do
    {


    system ("cls");

        cout << "\t\t\t ------------------------------"<<endl;
        cout << "\t\t\t |            CRUD            |"<<endl;
        cout << "\t\t\t ------------------------------"<<endl;
        cout << "\t\t\t  1. CRUD ENTRENADOR "<<endl;
        cout << "\t\t\t  2. CRUD EQUIPO "<<endl;
        cout << "\t\t\t  3. CRUD PAIS"<<endl;
        cout << "\t\t\t  4. CRUD TIPO_JUGADOR"<<endl;
        cout << "\t\t\t  5. CRUD TIPO_PUESTO"<<endl;
        cout << "\t\t\t  6. EXIT"<<endl;

        cout << "\t\t\t ----------------------------------------"<<endl;
        cout << "\t\t\t Opcion a escoger : [1/2/3/4/5/6]"<<endl;
        cout << "\t\t\t ----------------------------------------"<<endl;
        cout << "\t\t\t Selecciona tu opcion: "<<endl;
        cin>>choice;

        switch(choice)
        {
    case 1:
    	do
    	{
            menu2();
    		cout << "\t\t\t ¿Quieres seguir en el apartado de Crud? (S/N)";
    		cin>>s;
		}while(s=='s'||s=='S');
		break;
    case 2:
		menu3();
		break;
	case 3:
		menu4();
		break;
	case 4:
		menu5();
		break;
	case 5:
		menu6();
		break;
	case 6:
		menu1();
	default:
		cout << "\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 6);

}
void usuario::menu2()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |     CRUD DE ENTRENADOR       |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso entrenador"<<endl;
	cout<<"\t\t\t 2. Despliegue entrenadores"<<endl;
	cout<<"\t\t\t 3. Modificar entrenador"<<endl;
	cout<<"\t\t\t 4. Buscar entrenador"<<endl;
	cout<<"\t\t\t 5. Borrar entrenador"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insert();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display();
		break;
	case 3:
		modify();
		break;
	case 4:
		search();
		break;
	case 5:
		delet();
		break;
	case 6:
		mantenimientos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}
void usuario::insert()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion del entrenador ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Entrenador         : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del Entrenador     : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa Apellido del Entrenador   : ";
	cin>>apellido;
    file.open("registroDeentrenador.dat", ios::binary | ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido<< "\n";
	file.close();
}
void usuario::display()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de los Entrenadores -------------------------"<<endl;
	file.open("registroDeentrenador.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> apellido;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Entrenador: "<<id<<endl;
			cout<<"\t\t\t Nombre del Entrenador: "<<nombre<<endl;
			cout<<"\t\t\t Apellido del Entrenador: "<<apellido<<endl;
			file >> id >> nombre >> apellido;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

void usuario::modify()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion de Entrenador-------------------------"<<endl;
	file.open("registroDeentrenador.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del empleado que quiere modificar: ";
		cin>>participant_id;
		file1.open("registro.dat",ios::binary|ios::app | ios::out);
		file >> id >> nombre >> apellido;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Entrenador: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del Entrenador: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese Apellido del Entrenador: ";
				cin>>apellido;
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido<< "\n";
				found++;
			}
			file >> id >> nombre >> apellido;

		}
		file1.close();
		file.close();
		remove("registroDeentrenador.dat");
		rename("registro.dat","registroDeentrenador.dat");
	}
}

void usuario::search()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("registroDeentrenador.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Entrenador buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del Entrenador buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Entrenador que quiere buscar: ";
		cin>>participant_id;
		file >> id >> nombre >> apellido;
		while(!file.eof())
		{
			if(participant_id==id)
			{
				cout<<"\n\n\t\t\t Id del Entrenador: "<<id<<endl;
				cout<<"\t\t\t Nombre del Entrenador: "<<nombre<<endl;
				cout<<"\t\t\t Apellido del Entrenador: "<<apellido<<endl;
				found++;
			}
			file >> id >> nombre >> apellido;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Entrenador no encontrado...";
		}
		file.close();
	}
}


void usuario::delet()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Informacion del Entrenador a Borrar-------------------------"<<endl;
	file.open("registroDeentrenador.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Entrenador que quiere borrar: ";
		cin>>participant_id;
		file1.open("registro.dat",ios::binary|ios::app | ios::out);
		file >> id >> nombre >> apellido;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id >> nombre  >> apellido;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Entrenador no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroDeentrenador.dat");
		rename("registro.dat","registroDeEmpleados.dat");
	}
}

void usuario::menu3()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |     CRUD DE EQUIPO       |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Equipo"<<endl;
	cout<<"\t\t\t 2. Despliegue Equipo"<<endl;
	cout<<"\t\t\t 3. Modificar Equipo"<<endl;
	cout<<"\t\t\t 4. Buscar Equipo"<<endl;
	cout<<"\t\t\t 5. Borrar Equipo"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insert1();
    		cout<<"\n\t\t\t Agrega otro campo(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display1();
		break;
	case 3:
		modify1();
		break;
	case 4:
		search1();
		break;
	case 5:
		delet1();
		break;
	case 6:
		mantenimientos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}
void usuario::insert1()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion del Equipo ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Equipo        : ";
	cin>>id1;
	cout<<"\t\t\tIngresa Nombre del Equipo     : ";
	cin>>nombre1;
    file.open("registroDeequipo.dat", ios::binary | ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id1 <<std::left<<std::setw(15)<< nombre1 << "\n";
	file.close();
}
void usuario::display1()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de los Equipos -------------------------"<<endl;
	file.open("registroDeequipo.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id1 >> nombre1;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Equipo: "<<id1<<endl;
			cout<<"\t\t\t Nombre del Equipo: "<<nombre1<<endl;
			file >> id1 >> nombre1;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

void usuario::modify1()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion del  Equipo-------------------------"<<endl;
	file.open("registroDeequipo.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Equipo que quiere modificar: ";
		cin>>participant_id;
		file1.open("registros.dat",ios::binary|ios::app | ios::out);
		file >> id1 >> nombre1;
		while(!file.eof())
		{
			if(participant_id!=id1)
			{
			 file1<<std::left<<std::setw(15)<< id1 <<std::left<<std::setw(15)<< nombre1 <<"\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Equipo: ";
				cin>>id1;
				cout<<"\t\t\tIngrese Nombre del Equipo: ";
				cin>>nombre1;
				file1<<std::left<<std::setw(15)<< id1 <<std::left<<std::setw(15)<< nombre1<< "\n";
				found++;
			}
			file >> id1 >> nombre1;

		}
		file1.close();
		file.close();
		remove("registroDeequipo.dat");
		rename("registros.dat","registroDeequipo.dat");
	}
}

void usuario::search1()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("registroDeequipo.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Equipo buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del Equipo buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Equipo que quiere buscar: ";
		cin>>participant_id;
		file >> id1 >> nombre1;
		while(!file.eof())
		{
			if(participant_id==id1)
			{
				cout<<"\n\n\t\t\t Id del Equipo: "<<id1<<endl;
				cout<<"\t\t\t Nombre del Equipo: "<<nombre1<<endl;
				found++;
			}
			file >> id1 >> nombre1;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Equipo no encontrado...";
		}
		file.close();
	}
}


void usuario::delet1()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Informacion del Equipo a Borrar-------------------------"<<endl;
	file.open("registroDeequipo.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Equipo que quiere borrar: ";
		cin>>participant_id;
		file1.open("registros.dat",ios::binary|ios::app | ios::out);
		file >> id1 >> nombre1;
		while(!file.eof())
		{
			if(participant_id!= id1)
			{
				file1<<std::left<<std::setw(15)<< id1 <<std::left<<std::setw(15)<< nombre1 << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id1 >> nombre1;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Equipo no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroDeequipo.dat");
		rename("registros.dat","registroDeequipo.dat");
	}
}

void usuario::menu4()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |     CRUD DE PAIS       |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Pais"<<endl;
	cout<<"\t\t\t 2. Despliegue Pais"<<endl;
	cout<<"\t\t\t 3. Modificar Pais"<<endl;
	cout<<"\t\t\t 4. Buscar Pais"<<endl;
	cout<<"\t\t\t 5. Borrar Pais"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insert2();
    		cout<<"\n\t\t\t Agrega otro campo(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display2();
		break;
	case 3:
		modify2();
		break;
	case 4:
		search2();
		break;
	case 5:
		delet2();
		break;
	case 6:
		mantenimientos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}
void usuario::insert2()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion del Pais ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Pais        : ";
	cin>>id2;
	cout<<"\t\t\tIngresa Nombre del Pais     : ";
	cin>>pais;
    file.open("registroDepais.dat", ios::binary | ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id2 <<std::left<<std::setw(15)<< pais << "\n";
	file.close();
}
void usuario::display2()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion del Pais -------------------------"<<endl;
	file.open("registroDepais.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id2 >> pais;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Pais: "<<id2<<endl;
			cout<<"\t\t\t Nombre del Pais: "<<pais<<endl;
			file >> id2 >> pais;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

void usuario::modify2()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion del  Pais-------------------------"<<endl;
	file.open("registroDeequipo.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Pais que quiere modificar: ";
		cin>>participant_id;
		file1.open("registrosp.dat",ios::binary|ios::app | ios::out);
		file >> id2 >> pais;
		while(!file.eof())
		{
			if(participant_id!=id2)
			{
			 file1<<std::left<<std::setw(15)<< id2 <<std::left<<std::setw(15)<< pais <<"\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del pais: ";
				cin>>id2;
				cout<<"\t\t\tIngrese Nombre del pais: ";
				cin>>pais;
				file1<<std::left<<std::setw(15)<< id2 <<std::left<<std::setw(15)<< pais<< "\n";
				found++;
			}
			file >> id2 >> pais;

		}
		file1.close();
		file.close();
		remove("registroDepais.dat");
		rename("registrosp.dat","registroDepais.dat");
	}
}

void usuario::search2()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("registroDepais.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del pais buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del Pais buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Equipo que quiere buscar: ";
		cin>>participant_id;
		file >> id2 >> pais;
		while(!file.eof())
		{
			if(participant_id==id2)
			{
				cout<<"\n\n\t\t\t Id del Pais: "<<id2<<endl;
				cout<<"\t\t\t Nombre del Pais: "<<pais<<endl;
				found++;
			}
			file >> id2 >> pais;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t pais no encontrado...";
		}
		file.close();
	}
}


void usuario::delet2()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Informacion del pais a Borrar-------------------------"<<endl;
	file.open("registroDepais.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del pais que quiere borrar: ";
		cin>>participant_id;
		file1.open("registrosp.dat",ios::binary|ios::app | ios::out);
		file >> id2 >> pais;
		while(!file.eof())
		{
			if(participant_id!= id2)
			{
				file1<<std::left<<std::setw(15)<< id2 <<std::left<<std::setw(15)<< pais << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id2 >> pais;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Pais no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroDepais.dat");
		rename("registrosp.dat","registroDepais.dat");
	}
}

void usuario::menu5()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |     CRUD DE TIPO_JUGADOR     |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso tipo jugador"<<endl;
	cout<<"\t\t\t 2. Despliegue tipo jugador"<<endl;
	cout<<"\t\t\t 3. Modificar tipo jugador"<<endl;
	cout<<"\t\t\t 4. Buscar tipo jugador"<<endl;
	cout<<"\t\t\t 5. Borrar tipo jugador"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insert3();
    		cout<<"\n\t\t\t Agrega otro campo(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display3();
		break;
	case 3:
		modify3();
		break;
	case 4:
		search3();
		break;
	case 5:
		delet3();
		break;
	case 6:
		mantenimientos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}
void usuario::insert3()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion del tipo jugador ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del jugador        : ";
	cin>>id3;
	cout<<"\t\t\tIngresa posicion del jugador     : ";
	cin>>jugador;
    file.open("registroDejugador.dat", ios::binary | ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id3 <<std::left<<std::setw(15)<< jugador << "\n";
	file.close();
}
void usuario::display3()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion del tipo jugador -------------------------"<<endl;
	file.open("registroDejugador.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id3 >> jugador;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del tipo jugador: "<<id3<<endl;
			cout<<"\t\t\t pocision del jugador: "<<jugador<<endl;
			file >> id3 >> jugador;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

void usuario::modify3()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion del tipo jugador-------------------------"<<endl;
	file.open("registroDejugador.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del tipo jugador que quiere modificar: ";
		cin>>participant_id;
		file1.open("registrosj.dat",ios::binary|ios::app | ios::out);
		file >> id3 >> jugador;
		while(!file.eof())
		{
			if(participant_id!=id3)
			{
			 file1<<std::left<<std::setw(15)<< id3 <<std::left<<std::setw(15)<< jugador <<"\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del tipo jugador: ";
				cin>>id2;
				cout<<"\t\t\tIngrese la posicion del jugador: ";
				cin>>jugador;
				file1<<std::left<<std::setw(15)<< id3 <<std::left<<std::setw(15)<< jugador<< "\n";
				found++;
			}
			file >> id3 >> jugador;

		}
		file1.close();
		file.close();
		remove("registroDejugador.dat");
		rename("registrosj.dat","registroDejugador.dat");
	}
}

void usuario::search3()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("registroDejugador.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del tipo jugador buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del tipo jugador buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Equipo que quiere buscar: ";
		cin>>participant_id;
		file >> id3 >> jugador;
		while(!file.eof())
		{
			if(participant_id==id3)
			{
				cout<<"\n\n\t\t\t Id del tipo jugador: "<<id3<<endl;
				cout<<"\t\t\t posicion del jugador: "<<jugador<<endl;
				found++;
			}
			file >> id3 >> jugador;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t jugador no encontrado...";
		}
		file.close();
	}
}


void usuario::delet3()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Informacion del tipo jugador a Borrar-------------------------"<<endl;
	file.open("registroDejugador.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del tipo equipo que quiere borrar: ";
		cin>>participant_id;
		file1.open("registrosj.dat",ios::binary|ios::app | ios::out);
		file >> id3 >> jugador;
		while(!file.eof())
		{
			if(participant_id!= id3)
			{
				file1<<std::left<<std::setw(15)<< id3 <<std::left<<std::setw(15)<< jugador << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id3 >> jugador;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del tipo jugador no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroDejugador.dat");
		rename("registrosj.dat","registroDejugador.dat");
	}
}

void usuario::menu6()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |     CRUD DE TIPO_PUESTO     |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso tipo puesto"<<endl;
	cout<<"\t\t\t 2. Despliegue tipo puesto"<<endl;
	cout<<"\t\t\t 3. Modificar tipo puesto"<<endl;
	cout<<"\t\t\t 4. Buscar tipo puesto"<<endl;
	cout<<"\t\t\t 5. Borrar tipo puesto"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insert4();
    		cout<<"\n\t\t\t Agrega otro campo(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display4();
		break;
	case 3:
		modify4();
		break;
	case 4:
		search4();
		break;
	case 5:
		delet4();
		break;
	case 6:
		mantenimientos();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 6);
}
void usuario::insert4()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion del tipo puesto ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del puesto: ";
	cin>>id4;
	cout<<"\t\t\tIngresa nombre del puesto: ";
	cin>>puesto;
    file.open("registroDepuesto.dat", ios::binary | ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id4 <<std::left<<std::setw(15)<< puesto << "\n";
	file.close();
}
void usuario::display4()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion del tipo puesto-------------------------"<<endl;
	file.open("registroDepuesto.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id4 >> puesto;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del tipo puesto: "<<id4<<endl;
			cout<<"\t\t\t nombre del puesto: "<<puesto<<endl;
			file >> id4 >> puesto;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

void usuario::modify4()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion del tipo puesto-------------------------"<<endl;
	file.open("registroDepuesto.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del tipo puesto que quiere modificar: ";
		cin>>participant_id;
		file1.open("registrost.dat",ios::binary|ios::app | ios::out);
		file >> id4 >> puesto;
		while(!file.eof())
		{
			if(participant_id!=id4)
			{
			 file1<<std::left<<std::setw(15)<< id4 <<std::left<<std::setw(15)<< puesto <<"\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del tipo puesto: ";
				cin>>id4;
				cout<<"\t\t\tIngrese nombre del puesto: ";
				cin>>puesto;
				file1<<std::left<<std::setw(15)<< id4 <<std::left<<std::setw(15)<< puesto<< "\n";
				found++;
			}
			file >> id4 >> puesto;

		}
		file1.close();
		file.close();
		remove("registroDepuesto.dat");
		rename("registrost.dat","registroDepuesto.dat");
	}
}

void usuario::search4()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("registroDepuesto.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del tipo puesto buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del tipo puesto buscado------------------------"<<endl;
		cout<<"\nIngrese Id del puesto que quiere buscar: ";
		cin>>participant_id;
		file >> id4 >> puesto;
		while(!file.eof())
		{
			if(participant_id==id4)
			{
				cout<<"\n\n\t\t\t Id del tipo puesto: "<<id4<<endl;
				cout<<"\t\t\t nombre del puesto: "<<puesto<<endl;
				found++;
			}
			file >> id4 >> puesto;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t puesto no encontrado...";
		}
		file.close();
	}
}


void usuario::delet4()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Informacion del tipo puesto a Borrar-------------------------"<<endl;
	file.open("registroDepuesto.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del tipo puesto que quiere borrar: ";
		cin>>participant_id;
		file1.open("registrost.dat",ios::binary|ios::app | ios::out);
		file >> id4 >> puesto;
		while(!file.eof())
		{
			if(participant_id!= id4)
			{
				file1<<std::left<<std::setw(15)<< id4 <<std::left<<std::setw(15)<< puesto << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id4 >> puesto;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del tipo puesto no encontrado...";
		}
		file1.close();
		file.close();
		remove("registroDepuesto.dat");
		rename("registrost.dat","registroDepuesto.dat");
	}
}

void usuario::informes()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |        INFORMES              |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. REPORTE DE LOS CRUD"<<endl;
	cout<<"\t\t\t 2. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	display5();
		break;

	case 2:
		menu1();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 2);
    }

void usuario::display5()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Reporte De Datos Del Crud -------------------------"<<endl;
	file.open("registroDeentrenador.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >>apellido;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del entrenador: "<<id<<endl;
			cout<<"\t\t\t nombre del entrenador: "<<nombre<<endl;
			cout<<"\t\t\t apellido del entrenador: "<<apellido<<endl;
			file >> id >> nombre >>apellido;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion";
		}
	}
	file.close();
	file.open("registroDeequipo.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id1 >> nombre1;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del equipo: "<<id1<<endl;
			cout<<"\t\t\t nombre del entrenador: "<<nombre1<<endl;
			file >> id1 >> nombre1;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion";
		}
	}
	file.close();

	file.open("registroDepais.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información";
		file.close();
	}
	else
	{
		file >> id2 >> pais;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del pais: "<<id2<<endl;
			cout<<"\t\t\t nombre del pais: "<<pais<<endl;
			file >> id2 >> pais;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion";
		}
	}
	file.close();

	file.open("registroDejugador.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id3 >> jugador;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del tipo jugar: "<<id3<<endl;
			cout<<"\t\t\t posicion del jugador: "<<jugador<<endl;
			file >> id3 >> jugador;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion";
		}
	}
	file.close();

	file.open("registroDepuesto.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion";
		file.close();
	}
	else
	{
		file >> id4 >> puesto;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del tipo puesto: "<<id4<<endl;
			cout<<"\t\t\t nombre del puesto: "<<puesto<<endl;
			file >> id4 >> puesto;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion";
		}
	}
	file.close();
}


