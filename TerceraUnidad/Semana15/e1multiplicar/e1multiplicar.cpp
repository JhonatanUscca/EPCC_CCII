#include <iostream> 
#include <vector> 

 using namespace std; 
  
 
void incertar(int (&a)[3][4][2], vector<int> &vec){
    for ( int i = 0; i<3; i++ ) 
    { 
        for ( int j = 0; j<4; j++ ) 
        { 
            for ( int k = 0; k<2; k++ ) 
            { 
                vec.push_back(a[i][j][k]);
            } 
        } 
    }   
}

 void mostrar( vector<int> &vec, int a, int b, int c ) 
 {
    int cont1 = 0;
    int cont2 = 0;

    for ( int i = 0; i<a; i++ ) 
    { 
        cout << "\nCara " << i << ":\n";
        if(i!=0){
            cont2=cont2+b;
        }
        for ( int j = 0; j<b; j++ ) 
        { 
            if(j!=0){
                cont1++;
            }
        
            for ( int k = 0; k<c; k++ ) 
            { 
                cout << "[" << vec[i+j+k+cont1+cont2] << "]" << ", ";
                if ( k == c-1 ) {
                    cout << "\n";
                }
            }
        }
    }

 } 

 void multiplicar( vector<int> &vec, int num ) 
 {
     for (size_t i = 0; i < vec.size(); ++i) {
        vec[i] = vec[i]*num;
     }

 }
  
 int main() { 
    vector<int> vec;
    int x[3][4][2] = {{{1, 2}, {4, 5}, {7, 8}, {1, 2}}, 
        {{10, 11}, {13, 14}, {16, 17}, {1, 2}}, 
            {{19, 20}, {22, 23}, {25, 26}, {1, 2}}}; 
  
    incertar(x, vec);
    multiplicar(vec, 4);
    mostrar(vec, 3, 4, 2);
    

    return 0; 
}
