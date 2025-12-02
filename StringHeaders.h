#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class String
{
    private:
        char * data;
        int Size;

    public:
        String();
        ~String();
        String(const char* data);
        void stringDisplay();
        String(String& s);
        String operator+(const String& s);
        void operator=(const String& s);

};


#endif // COMPLEX_H_INCLUDED
