class Racional {
        void reduce();
    public:
        Racional();
        Racional(const Racional& other);
        Racional(int num,int den = 1);

        ~Racional(){}

        void operator+=(const Racional& otro);
        void operator-=(const Racional& otro);
        void operator*=(const Racional& otro);
        void operator/=(const Racional& otro);

        void escribe(std::ostream& o) const;
        void lee(std::istream& i);

        double aprox();
    private:
        int numera;
        int denume;

};
