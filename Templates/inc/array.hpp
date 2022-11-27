
template <typename X> class Array{
    private: 
        unsigned int SIZE = 0;
        X* ptr = new X[SIZE];
    public:
        void show();
        int size();
        bool operator==(const Array<X> &other);
        Array() = default;  
        Array(unsigned int n):SIZE(n),ptr(new X[SIZE]{0}){
            for(int i = 0; i < SIZE; ++i){
                ptr[i] = i + 1;
            }
        }
        Array(const Array &other){
            SIZE = other.SIZE;
            ptr = new X[SIZE];
            for(int i = 0; i <SIZE; ++i){
                ptr[i] = other.ptr[i];
            }
        }
        Array operator=(const Array<X> &other){
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
        ~Array(){
            delete[] ptr;
        }
      
};



template <typename X> void Array<X>::show()
{
    for(int i = 0; i < SIZE; ++i){
            std::cout<<ptr[i]<<" ";
    }
    std::cout<<'\n';
}
template <typename X> int Array<X>::size(){
    std::cout<<SIZE<<std::endl;
    return SIZE;
}

template <typename X> bool Array<X>::operator==(const Array<X> &other){
    if(this->SIZE != other.SIZE){
        return false;
    }
    return true;
}



