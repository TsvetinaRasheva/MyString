#include <iostream>
#include <cstring>

class String {
private:
	char* buffer;
    size_t size;   

    void clear();

public: 
    String();
    String(const String&);
    String(const char*);
    ~String(); 
    
   String& operator=(const String& other);

   String& operator+(const String&);
       
   bool operator==(const String& other);

   bool operator!=(const String& other);

    char& operator[](size_t index);

    const char& operator[](size_t index) const;


    void resize(size_t new_size);     
   
    void reverse(); 

    void copy(const  String& new_string);

    void toLowerCase();

    void toUpperCase();

    void trimSpaces();

    bool empty();


    const char* c_str() const {
        return this->buffer;
    }


    size_t get_size() const {
        return size;
    }

    void set_buffer(const char* _buffer) {

        size_t size = strlen(_buffer);
        this->buffer = new char[size+1];

        for (size_t i = 0; i < size; i++)
        {
            this->buffer[i] = _buffer[i];
        }

        this->buffer[size] = '\0';
    }

    void set_size() {
        this->size = strlen(buffer);
    }

};