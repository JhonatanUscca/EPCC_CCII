#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

template <class T>
class histogramaTemplate{
    private:
    vector<T> vec;
    vector<T> vec2;
    public:
    histogramaTemplate(){}
    void incertarVecor(T numero)
    {
        vec.push_back(numero);
    }

    void iprimirVector1()
    {
        for (size_t i = 0; i < vec.size(); ++i)
        {
            cout << vec[i] << "; ";
        }
    }

    void ordenar()
    {
        sort(vec.begin(), vec.end());
    }

    //Rango del vector = x max - xmin

    T Rango()
    {
        return (vec[vec.size()-1] - vec[0]);
    }

    // intervalo del vector = 1 +3.22log(n)

    T intervalo()
    {
        return round(1+3.22*log10(vec.size()));
    }

    // amplitud del vector = rango/intervalo 

    T Amplitud()
    {
        return round(Rango()/intervalo());
    }

    void histograma()
    {

        int contador1 =0;
        int contador2 =1;
        if(Amplitud()>0){
            for(int k=1;  k<=vec[vec.size()-1]; k++)
            {
                for(int j=0;  j<vec.size(); j++)
                {
        
                        if(k == vec[j])
                        {
                            contador1++;
                        }
                    
                }
                
                if(contador2==Amplitud()){
                    vec2.push_back(contador1);
                    contador1=0;
                    contador2=0;
                }
                contador2++;
            }
            //si es impar el mayor numero del vector ;
            
            if( vec[vec.size()-1]%2!=0){
                vec2[vec2.size()-1]=vec2[vec2.size()-1]+contador1;
            }
        }
        else {
            cout << "Error... No se pude hacer el histograma, porque la amplitud es menenor de 0";
        }
    }

    void iprimirVector2()
    {
        for (size_t i = 0; i < vec2.size(); ++i)
        {
            cout << vec2[i] << "; ";
        }
    }
    void menu1()
    {
        cout << "\n\t\tLISTA \n\n";
        cout << " 1. INGRESAR UN DATO " <<endl;
        cout << " 2. MOSTRAR LISTA " <<endl;
        cout << " 3. MOSTRAR RESULTADOS EN UN HISTOGRAMA " <<endl;
        cout << " 4. SALIR " <<endl;
    
        cout << "\n INGRESE OPCION: ";
    }
    void menu2(){
        int op;    
        T elemenento;  
           
        do
        {
            menu1();  cin>> op;
             
            switch(op)
            {
             
            case 1:
             
                cout<< "\n INGRESAR UN DATO "; cin>> elemenento;
                incertarVecor(elemenento);

            break;
                         
            case 2:
             
                cout << "\n\n MOSTRAR LISTA\n\n";
                iprimirVector1();

            break;

            case 3:
           
             
                cout << "\n\n MOSTRAR RESULTADOS EN UN HISTOGRAMA \n\n";
                ordenar();
                cout << "\n\n LISTA ORDENADA \n\n";
                iprimirVector1();
                cout << "\n\n INTERVALOS IDEALES (REGLA DE STURGES) \n\n";
                cout << "amplitud = rango/intervalos\n";
                cout << "rango = Xmax - Xmin\n";
                cout << "intervalos = 1+3.22 log(cantidad total de datos)\n\n";
                cout << "INTERVALO " << intervalo() << "\n";
                cout << "RANGO " << Rango() << "\n";
                cout << "AMPLITUD " << Amplitud() << "\n";
                cout << "\n\n HISTOGRAMA \n\n";
                histograma();
                iprimirVector2();
    

            break;

            }
             
            cout<<endl<<endl;
            system("pause");  system("cls");
             
        }while(op!=4);
             
        system("pause");
        }
};
