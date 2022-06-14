#include <iostream>
#include <vector>

constexpr int LENGTH = 8;
constexpr int WIDTH = 8;

using namespace std;

void tabla(vector<vector<char>> &vec2, char a)
{
    for(int i=0; i<LENGTH; i++){
        for(int j=0; j<LENGTH; j++){
            vec2[i][j] = a;
        }  
    }
}

void imprimir(vector<vector<char>> &vec2)
{
    cout  << "\nEL TABLA " <<endl;
    for(int i=0; i<LENGTH; i++){
        for(int j=0; j<LENGTH; j++){
            cout <<vec2[i][j]<<" ";
        }
        cout << endl;
        
    }
}

void insertarPosicionReina1(vector<vector<char>> &vec2 ,int a,int b)
{
    vec2[a][b] = 'B';
}

void insertarPosicionReina2(vector<vector<char>> &vec2 ,int a,int b)
{
    vec2[a][b] = 'N';
}

bool moverRecto(int a,int b,int c,int d)
{
    if(a==c||b==d){
        return true;
    }

    return false;
}


bool moverDigonalPrincipal1(int a,int b,int c,int d)
{   
        for(int j=0; j<LENGTH; j++){
            if(a+j<8&&b+j<8){
                if(a+j==c&&b+j==d){
                    return true;
                }
            }
        }
        return false;
              
}

bool moverDigonalPrincipal2(int a,int b,int c,int d)
{   
        for(int j=0; j<LENGTH; j++){
            if(a-j>=0&&b-j>=0){
                if(a-j==c&&b-j==d){
                    return true;
                }
            }
        }
        return false;
}


bool moverDigonalSecundaria1(int a,int b,int c,int d)
{   
        for(int j=0; j<LENGTH; j++){
            if(a+j<8&&b-j>=0){
                if(a+j==c&&b-j==d){
                    return true;
                }
            }
        }
        return false;
}


bool moverDigonalSecundaria2(int a,int b,int c,int d)
{   
        for(int j=0; j<LENGTH; j++){
            if(a-j>=0&&b+j<8){
                if(a-j==c&&b+j==b){
                    return true;
                }
            }
        }
        return false;
     
}

void resultados(int a,int b,int c,int d){
    cout << "Se pueden atar?" << endl;
    if(moverRecto(a,b,c,d)==true){
        cout << "si, porque ambas piezas comparten una la misma recta." << endl;
    } else if(moverDigonalPrincipal1(a,b,c,d)==true||moverDigonalPrincipal2(a,b,c,d)==true||moverDigonalSecundaria1(a,b,c,d)==true||moverDigonalSecundaria2(a,b,c,d)==true){
        cout << "si, porque ambas piezas comparten una la misma diagonal." << endl;
    } else {
        cout << "no, se pude." << endl;
    }
}



int main(){
    int x1,x2,y1,y2;

    vector<vector<char>> vec2(LENGTH, vector<char> (WIDTH, 0));

    tabla(vec2, '-');

    cout << "Indique las posiciones de las reinas : \n";
    cout << "Reina 1: "; cin >> x1 >> y1; cout << endl;
    cout << "Reina 2: "; cin >> x2 >> y2; cout << endl;

    insertarPosicionReina1(vec2, x1,y1);
    insertarPosicionReina2(vec2, x2,y2);

    resultados(x1,y1,x2,y2);

    imprimir(vec2);
    cout <<endl;

}
