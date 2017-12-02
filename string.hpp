#ifndef STRING_HPP
#define STRING_HPP

#include <cstring>
#include <string.h>
#include <iosfwd>

struct String
{
    static constexpr std::size_t npos = -1;
    
    int len;
    char * str;
    
    String();
    
    String(const char*);
    
    String(const String&);
    
    String(const char*, const int);
    
    ~String();
    
    String&
    operator= (String const&);
    
    char
    operator[] (std::size_t) const;
    
    char&
    operator[] (std::size_t);
    
    String&
    operator+= (const String&);
    
    String&
    operator= (String&&);
    
    std::size_t const size() const;
    
    const char* data() const;
    
    bool empty() const;
    
    std::size_t find(const char) const;
    
    char* substr(const int, const int) const;
    
    char* substr(const int) const;
    
    String(String&&);
};

//add booleans here..
