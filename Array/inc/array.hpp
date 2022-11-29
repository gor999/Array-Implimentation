
template <typename X> class Array{
    private: 
        unsigned int SIZE = 0;
        X* ptr = new X[SIZE];
    public:
       
        bool operator==(const Array<X> &other);
        Array() = default;  
        Array(unsigned int n);
        ~Array();
        Array(const Array &other);
        Array& operator=(const Array<X> &);
        X& operator[](int);
        
        void show();
        int size();
        
};

template<typename X> X& Array<X>::operator[](int index)
{
    if (index >= SIZE || index < 0) {
        std::cout << "Array index out of bound, exiting"<<std::endl;
        exit(0);
    }
    return ptr[index];
}

template<typename X> Array<X>::~Array(){
    delete [] ptr;
}

template<typename X> Array<X> &Array<X>::operator=(const Array<X> &other){
            if(this == &other){
                return *this;
            }
            delete[] ptr;
            SIZE = other.SIZE;
            ptr = new X[SIZE];
            for(int i = 0; i < SIZE; ++i){
                ptr[i] = other.ptr[i];
            }
            return *this;
        }


template<typename X> Array<X>::Array(unsigned int n):SIZE(n),ptr(new X[SIZE]{0}){
    for(int i = 0; i < SIZE; ++i){
        ptr[i] = i + 1;
    }
}

template <typename X> void Array<X>::show()
{
    if(SIZE == 0){
        std::cout<<"No elements for show"<<std::endl;
    }else{
    for(int i = 0; i < SIZE; ++i){
            std::cout<<ptr[i]<<" ";
    }
    std::cout<<'\n';
    }
}
template <typename X> int Array<X>::size(){
    std::cout<<SIZE<<std::endl;
    return SIZE;
}

template <typename X> bool Array<X>::operator==(const Array<X> &other){
    if((*this).SIZE != other.SIZE){
        return false;
    }
    for(int i = 0; i < SIZE; ++i){
        if((*this).ptr[i] != other.ptr[i]){
            return false;
        }
    }
    return true;
}


template<typename X> Array<X>::Array(const Array &other){
    SIZE = other.SIZE;
    ptr = new X[SIZE];
    for(int i = 0; i <SIZE; ++i){
        ptr[i] = other.ptr[i];
    }
}
