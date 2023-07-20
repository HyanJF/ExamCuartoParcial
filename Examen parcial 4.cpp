#include <iostream>
#include <vector>

using namespace std;

void Objetos();
void Punteros();

//Punteros
int CalculatePos(vector<int>* listNumber);

//Objetos
class Critter
{
public:
    Critter(int hunger = 0, int boredom = 0, int tired = 0);
    void Talk();
    void Eat(int food = 15);
    void Play(int fun = 10);
    void Sleep(int tired = 8);
    void Needs();


private:
    int m_Hunger;
    int m_Boredom;
    int m_Tired;
    void PassTime(int time = 10);
};

Critter::Critter(int hunger, int boredom, int tired) :
    m_Hunger(hunger),
    m_Boredom(boredom),
    m_Tired(tired)
{}


void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
    m_Tired += time;
}

void Critter::Talk()
{
    system("cls");
    PassTime();
    if (m_Hunger > 25 && m_Hunger < 75)
    {
        cout << endl << "Tengo un poco de hambre" << endl;
    }
    if (m_Hunger > 75 && m_Hunger < 150)
    {
        cout << "Estoy muriendo de hambre" << endl;
    }
    if (m_Hunger > 150)
    {
        cout << "Tu mascota a muerto de Hambre" << endl;
        void Exit();
    }
    if (m_Boredom > 50 && m_Boredom < 100)
    {
        cout << endl << "Estoy muy aburrido TnT" << endl;
    }
    if (m_Boredom > 100 && m_Boredom < 150)
    {
        cout << "Estoy muy aburrido juega conmigo ya" << endl;
    }
    if (m_Boredom > 150)
    {
        cout << "Tu mascota a muerto de aburrimiento" << endl;
        void Exit();
    }
    if (m_Tired > 35 && m_Tired < 75)
    {
        cout << endl << "Estoy un poco cansado" << endl;
    }
    if (m_Tired > 75 && m_Tired < 150)
    {
        cout << endl << "ME DUELE LA CABEZA" << endl;
    }
    if (m_Tired > 150)
    {
        cout << "Tu mascota a muerto de Sueño" << endl;
        void Exit();
    }
    if (m_Hunger < 25 && m_Boredom < 50 && m_Tired < 35)
    {
        cout << endl << "Estoy bien OwO" << endl;
    }
}

void Critter::Eat(int food)
{
    system("cls");
    cout << "\nBrrupp. \n";
    m_Hunger -= food;
    if (m_Hunger < 5)
    {
        m_Hunger = 0;
    }
    PassTime();
}

void Critter::Play(int fun)
{
    system("cls");
    cout << "\nWheee!\n";
    m_Boredom -= fun;
    if (m_Boredom < 0)
    {
        m_Boredom = 0;
    }
    PassTime();
}

void Critter::Sleep(int tired)
{
    system("cls");
    cout << "\nZzZzZzZ!\n";
    m_Tired -= tired;
    if (m_Tired < 15)
    {
        m_Tired = 0;
    }
    PassTime();
}

void Critter::Needs()
{
    system("cls");
    cout << endl;
    cout << "El hambre de tu mascota es " << m_Hunger << endl;
    cout << "El Aburrimiento de tu mascota es " << m_Boredom << endl;
    cout << "EL Cansancio de tu mascota es " << m_Tired << endl;
}

int main()
{
    int Opcion = 0;
    do
    {
        system("cls");
        cout << "\n EXAMEN PARCIAL 4\n\n";
        cout << "0 - Salir.\n";
        cout << "1 - TEMA Objetos.\n";
        cout << "2 - TEMA Punteros.\n";
        cin >> Opcion;
        switch (Opcion)
        {
        case 0:
            cout << "Vuelve pronto!.\n";
            break;
        case 1:
            Objetos();
            break;
        case 2:
            Punteros();
            break;
        }
    } while (Opcion != 0);
}



void Objetos()
{
    Critter crit;
    crit.Talk();
    int choice;
    do
    {
        cout << "\n Mascotas Virtuales\n\n";
        cout << "0 - Salir.\n";
        cout << "1 - Escucha a tu mascota.\n";
        cout << "2 - Alimentar.\n";
        cout << "3 - Jugar con tu mascota.\n";
        cout << "4 - Dormir a tu mascota.\n";
        cout << "5 - Necesidades de tu mascota\n";
        cout << "Elige una actividad: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Vuelve pronto!.\n";
            break;
        case 1:
            crit.Talk();
            break;
        case 2:
            crit.Eat();
            break;
        case 3:
            crit.Play();
            break;
        case 4:
            crit.Sleep();
            break;
        case 5:
            crit.Needs();
            break;
        default:
            cout << "\n Tu elección es inválida. \n";
        }
    } while (choice != 0);
}



void Punteros()
{
    vector<int> Numeros = { 948, 152, 321, 456, 6432, 1140, 782, 2410 };
    for (int i = 0; i < 7; i++)
    {
        cout << Numeros[i] << endl;
    }
    int Number = CalculatePos(&Numeros);

}

int CalculatePos(const vector<int>* plistNumber)
{
    int pos;



    return pos;
}