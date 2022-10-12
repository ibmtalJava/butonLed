class MotorControl{
    int butonPin=-1;
    int ledPin=-1;
    int status=0;
    int mod=0;
  public:
      MotorControl(int bPin,int lPin){
        butonPin=bPin;
        ledPin=lPin;
      }
      void setup(){
        pinMode(butonPin,INPUT);
        pinMode(ledPin,OUTPUT);
      }
      void setMod(int nMod){
        mod=nMod;
      }
      void run(){
        digitalWrite(ledPin,HIGH);
      }
      void stop(){
        digitalWrite(ledPin,LOW);
      }
      
      void disco(){
        delay(100);
        if(status>0){
          run(); status=0;
        }
        else{
          stop(); status=1;  
        }
      }
      
      void attach(){
        if(mod==0){
          status=digitalRead(butonPin);
          if(status>0) run(); else stop(); 
        }
        if(mod==1){
          disco();  
        }
      }
  private:
 
};
