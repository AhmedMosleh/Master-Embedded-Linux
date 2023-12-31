#include <iostream>


class String {
    private:
        char* str;
        int size;
    
    public:
        String();
        explicit String(int _size); // don't confilect with String str = 10;
        String(const String & c_str);
        String(String && expired_str);

        String operator=(const String & c_str);
        String& operator=(String && expired_str);
        ~String();
};

String::String(int _size): size(_size),str(nullptr){
    str = new char(10); 
}
String::String(const String & c_str){ 
    this->size = c_str.size;
    str = new char(this->size);
    *this->str = *c_str.str;
}
String::String(String && expired_str){ 
    this->size = expired_str.size;
    expired_str.size = 0;

    this->str = expired_str.str;
    expired_str.str = nullptr;
}
String String::operator=(const String & c_str){
    if(this != & c_str) {
        this->size = c_str.size;
        if(this->str) {
            delete [] this->str;  
        }
        str = new char(this->size);
        *this->str = *c_str.str;
    }
    return *this;
}
String& String::operator=(String && expired_str) { 
    if(this != &expired_str) {
        this->size = expired_str.size;
        expired_str.size = 0;

        if (this->str) {
            delete [] this->str;       
        }

        this->str = expired_str.str;
         expired_str.str = nullptr;

    }
    return *this;
}
String::~String() { 
    if(!this->str)
    {
        delete [] str;
    }
}

