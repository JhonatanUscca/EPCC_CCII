#include <iostream>
#include <vector>


using namespace std;

class simuladorRobot{
    private:
        string palabra,a;
        int x,y;
        vector<char> vec1;
    public:
        
        simuladorRobot(){}

        //Pide los datos donde comienza el robot y a direccion donde esta mirando.
        void incertarDatos(){
            cout << "coordenada de inicio :";
            cin >> x >> y;
            cout << "Direccion del robot : ";
            cin >> a;
            cout << endl;
        }

        //Pide las instrucciones.
        void incertarInstrucciones(){
            cout << "La instruccion es : ";
            cin >> palabra;
            cout << endl;
        }

        //Covierte las instrucciones(string) a un vector de chars.
        void covertir(){
            vector<char>vec(palabra.begin(), palabra.end());
            vec1=vec;
        }

        // lee cada una de las instrucciones y las ejecuta.
        void leer(){
            for (size_t i = 0; i < vec1.size(); ++i) {
                if(vec1[i]=='D')
                {
                    if(a=="norte"){
                        a="este";

                    } else
                    if(a=="norte"){
                        a="sur";

                    } else
                    if(a=="sur"){
                        a="oeste";

                    } else
                    if(a=="oeste"){
                        a="norte";

                    }
                }
                if(vec1[i]=='I')
                {
                    if(a=="norte"){
                        a="oeste";
 
                    } else
                    if(a=="oeste"){
                        a="sur";

                    } else
                    if(a=="sur"){
                        a="este";

                    } else
                    if(a=="este"){
                        a="norte";

                    }
                }
                if(vec1[i]=='A')
                {
                    if(a=="norte"){
                        y++;

                    } else
                    if(a=="oeste"){
                        x--;

                    } else
                    if(a=="sur"){
                        y--;

                    } else
                    if(a=="este"){
                        x++;

                    }
                }
            }
        }

        // Muetra el resultado.
        void resultados()
        {
            cout << "La nueva coordenada es : [" << x << " ; " << y << "]" << endl;
            cout << "La nueva direccion es : " << a;
        }

};
