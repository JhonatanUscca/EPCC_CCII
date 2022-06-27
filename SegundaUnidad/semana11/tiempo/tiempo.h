class Tiempo {
    public:
        Tiempo();
        Tiempo(const Tiempo& other);
        Tiempo(int hor,int minu, int seg );

        ~Tiempo(){}

        void operator+=(const Tiempo& otr);
        void operator-=(const Tiempo& otr);
        void operator*=(const Tiempo& otr);
        void operator/=(const Tiempo& otr);

        bool operator==(const Tiempo& otr);
        bool operator!=(const Tiempo& otr);
        bool operator<(const Tiempo& otr);
        bool operator>(const Tiempo& otr);
        bool operator<=(const Tiempo& otr);
        bool operator>=(const Tiempo& otr);


        Tiempo operator+(const Tiempo& otr) const ;
        Tiempo operator-(const Tiempo& otr) const ;

        void escribe(std::ostream& o) const;
        void lee(std::istream& i);
        void reduce();


    private:
        int minutos;
        int segundos;
        int horas;

};
