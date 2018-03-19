#include <iostream>

class CSingletonLogger {
   public:
      static CSingletonLogger* Instance() {
         if(m_pInstance == NULL) 
                     m_pInstance = new CSingletonLogger();
         return m_pInstance;
      }
      virtual void setValue(int val) { iValue = val; } 
      virtual void printValue() { std::cout<< iValue <<std::endl; }   
   protected:
      int iValue;
      CSingletonLogger() { }
      CSingletonLogger(const CSingletonLogger& obj) { }
      CSingletonLogger& operator=(const CSingletonLogger &rhs) { }
      
      static CSingletonLogger* m_pInstance;

};

CSingletonLogger* CSingletonLogger::m_pInstance = NULL;


class CDerivedLogger : public CSingletonLogger{

   public:
      static void createInstance() {
         if(m_pInstance == NULL) 
            m_pInstance = new CDerivedLogger();
      }  
      virtual void setValue(int val) { iValue = val; iValuederived = 2*val; } 
      virtual void printValue() { std::cout<< iValue << " " << iValuederived <<std::endl; }   

   private:
      int iValuederived;
      CDerivedLogger() { };
      CDerivedLogger(CDerivedLogger &obj) { }
      CDerivedLogger& operator=(CDerivedLogger &rhs) { }

};

void functionX() 
{
   CDerivedLogger::Instance()->printValue();

   CSingletonLogger::Instance()->printValue();


}



int main()
{

  // CSingletonLogger::Instance();

   CDerivedLogger::createInstance();

   CDerivedLogger::Instance()->setValue(100);


   functionX();

}
