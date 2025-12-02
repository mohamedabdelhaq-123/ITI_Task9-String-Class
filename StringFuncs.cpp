#include <iostream>
#include "StringHeaders.h"
#include "Headers.h"

using namespace std;

String::String()
{
    data=nullptr;
    Size=0;
}

String::String(const char* data)
{
    int i=0;
    for(i=0;data[i];i++);
    this->Size=i;
    this->data=new char[Size];
    for(int j=0;j<Size;j++)
    {
        this->data[j]=data[j];
    }
}

String::String(String& s)
{
    this->Size=s.Size;
    this->data=new char[Size];
    for(int j=0;j<Size;j++)
    {
        this->data[j]=s.data[j];
    }
}

void String::stringDisplay()
{
    for(int j=0;j<Size;j++)
    {
       cout<<data[j];
    }
    cout<<endl;
}

String String::operator+(const String& s)
{
    int j=0,i=0;
    String res;

    res.Size=this->Size+s.Size;
    res.data=new char[res.Size];

    for(j=0;j<this->Size;j++)
    {
        res.data[j]=this->data[j];
    }
    for(i=j;i<res.Size;i++)
    {
        res.data[i]=s.data[i-this->Size];
    }
    return res;
}


void String::operator=(const String& s)
{
    if(this->data!=nullptr)
    {
        delete this->data;
    }
    this->Size=s.Size;
    this->data=new char[Size];
    for(int j=0;j<Size;j++)
    {
        this->data[j]=s.data[j];
    }
}


String::~String()
{
    if(data!=nullptr)
    {
        delete [] data;
    }
}

/*
void priint(String s)
{
    s.stringDisplay();
}
*/







