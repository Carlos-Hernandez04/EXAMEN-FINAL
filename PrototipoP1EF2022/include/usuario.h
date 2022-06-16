#ifndef USUARIO_H
#define USUARIO_H

using namespace std;


class usuario
{
    public:
        usuario();
        virtual ~usuario();
        void menu();
        void login();
        void menu1();
        void mantenimientos();
        void menu2();
        void insert();
		void display();
		void modify();
		void search();
		void delet();
        void menu3();
		void insert1();
		void display1();
		void modify1();
		void search1();
		void delet1();
		void menu4();
		void insert2();
		void display2();
		void modify2();
		void search2();
		void delet2();
		void procesos();
		void informes();
		void display5();
		void menu5();
		void insert3();
		void display3();
		void modify3();
		void search3();
		void delet3();
		void menu6();
		void insert4();
		void display4();
		void modify4();
		void search4();
		void delet4();



    protected:

    private:
        string id,nombre,apellido;
        string id1, nombre1;
        string id2, pais;
        string id3, jugador;
        string id4, puesto;



};

#endif // USUARIO_H
