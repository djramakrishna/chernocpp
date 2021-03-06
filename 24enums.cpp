#include <iostream>

// its just a way to name values, end of the day it's just an integer and makes code much cleaner
// essentially used when we use a set of values numberically, enums are used
// they basically group the integers
// by default they are 32 bit integers but we can use unsigned char to use less memory (8 bit integer)

/*
enum example : unsigned char
{
    A = 5, B, C // b is taken as 6 and c is taken as 7, if nothing is given they take A = 0, A = 1, A = 2

};

int a = 0;
int b = 1;
int c = 2;

int main()
{
    //int value = B;
    example value = B; //enum can have only values as A or B or C

    if (value == B)
    {

    }
}
*/

class Log
{

public:
    enum Level
    {
        LevelError = 0, LevelWarning, LevelInfo
    };

private:

    Level m_LogLevel = LevelInfo; // member log level to point out it's private variable. 

public:

    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {   
        if (m_LogLevel >= LevelError)
            std::cout << "[ERROR] " << message << std::endl;
    }
    
    void Warn(const char* message)
    {   
        if (m_LogLevel >= LevelWarning)
        std::cout << "[WARNING] " << message << std::endl;
    }
    
    void Info(const char* message)
    {   
        if(m_LogLevel >= LevelInfo)
        std::cout << "[INFO] " << message << std::endl;
    }
};

int main()
{   
    //instantiating the class
    Log log; 
    //log.SetLevel(LogLevelWarning);
    //log.SetLevel(4);
    //log.SetLevel(2);
    log.SetLevel(Log::LevelError);
    log.Warn("Hello!");
    log.Error("HELLO!");
    log.Info("HELLO !! ");
}