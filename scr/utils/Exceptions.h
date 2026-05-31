C++ #ifndef EXCEPTIONS_H
  #define EXCEPTIONS_H
  #include <string>
  using namespace std;
class Exception { 
public: 
string message;
Exception(string msg)
{ 
  message = msg;
} }; 
#endif
