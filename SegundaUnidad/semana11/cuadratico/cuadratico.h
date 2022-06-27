class Cuadratico {
    public:
        Cuadratico();
        Cuadratico(const Cuadratico& other);
        Cuadratico(double _a,double _b, double _c) ; 
        Cuadratico(double _x);

        ~Cuadratico(){}

        void operator=(const Cuadratico& otr)  ;

        void escribe(std::ostream& o) const;
        void lee(std::istream& i);

        
    private:
        double a;
        double b;
        double c;
        double x;

};
