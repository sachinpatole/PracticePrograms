#include <iostream>

class CSingletonLogger {
   public:
      static CSingletonLogger* Instance() {
         return m_pInstance;
      }
      void setValue(int val) { iValue = val; } 
      void printValue() { std::cout<< iValue <<std::endl; }   
   private:
      int iValue;
      CSingletonLogger() { }
      CSingletonLogger(const CSingletonLogger& obj) { }
      CSingletonLogger& operator=(const CSingletonLogger &rhs) { }
      
      static CSingletonLogger* m_pInstance;

};

CSingletonLogger* CSingletonLogger::m_pInstance = new CSingletonLogger();;

void functionX() 
{
   CSingletonLogger::Instance()->printValue();

}



int main()
{

   CSingletonLogger::Instance()->setValue(100);


   functionX();

}
