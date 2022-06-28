class intrinsecos{
    public:
        string To_String(const auto& b){
        stringstream sso;
        sso << to_string(b);

        string strinput;
        sso >> strinput;

        return strinput;
        }
};

class contenedores{
    public:
    string To_String(const auto& m) {


        string strinput1,strinput2;
        string s;
        ostringstream o;
     
        for (const auto& p : m) {
            
            stringstream(to_string(p.first)) >> strinput1;
            stringstream(to_string(p.second)) >> strinput2;
            o << strinput1 << ", " << strinput2 << " | ";
            s = o.str();
        }

        return s;
   

    }

};
