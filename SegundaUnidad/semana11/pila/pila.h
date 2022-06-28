class Nodo {
    private:
        int valor;
        Nodo* siguente;
    public:
        Nodo(int _valor) {
            this->valor = _valor;
        }

        ~Nodo() {}

        void setValor(int _valor) {
            this->valor = _valor;
        }

        void setSiguente(Nodo* _siguente) {
            this->siguente = _siguente;
        }

        int getValor() {
            return this->valor;
        }

        Nodo* getSiguente() {
            return this->siguente;
        }
};

class Pila {
    public:
        Nodo* _top;
        int length;
        int size;

        Pila(int _size) {
            this->size = _size;
            this->length = 0;
            this->_top = nullptr;
        }

        int top() {
            return this->_top->getValor();
        }

        int pop() {
            if (this->empty()) throw "ERROR: La pila está vacía";
            Nodo* auxSiguente = this->_top->getSiguente();
            int auxValor = this->_top->getValor();
            delete this->_top;
            --this->length;
            this->_top = auxSiguente;
            return auxValor;
        }

        int push(int _valor) {
            if (this->full()) throw "ERROR: La pila está llena";
            Nodo* nuevoNodo = new Nodo(_valor);
            nuevoNodo->setSiguente(this->_top);
            this->_top = nuevoNodo;
            ++this->length;
            return _valor;
        }

        void clear() {
            Nodo** TNodos = new Nodo*[this->length];
            TNodos[0] = this->_top;
            int i = 1;
            Nodo* auxNodo = this->_top;
            while (auxNodo->getSiguente() != nullptr) {
                TNodos[i] = auxNodo->getSiguente(); 
                ++i;
                auxNodo = auxNodo->getSiguente();
            }
            delete [] TNodos;
            this->_top = nullptr;
            this->length = 0;
        }

        bool full() {
            if (this->length == this->size) {
                return true;
            }
            return false;
        }

        bool empty() {
            if (this->length == 0) {
                return true;
            }
            return false;
        }
};
