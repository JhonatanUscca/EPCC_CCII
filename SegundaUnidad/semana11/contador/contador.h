class Contador {
    private:
        static int numero;
    public:
        Contador(int _x  ) {numero = _x;}

        ~Contador(){}

        //incremento Prefijo
        Contador& operator++();
        //incremento Prosfijo
        Contador operator++(int);

        friend ostream& operator<< (ostream& out, const Contador& d);

        static void valor();


};
