#include<iostream>
using namespace std;
class Sensordata
{
   float temp;
   float hum;
   public:
        Sensordata(float t1=0 , float h1=0)
        {
           temp = t1;
           hum = h1;
        }
        friend Sensordata operator+(const Sensordata &s1 ,const Sensordata &s2);

        void display()
        {
           cout<<"Temperature: "<<temp<<" deg C"<<"\n";
           cout<<"Humidity: "<<hum<<"%";
        }
};
int main()
{
   Sensordata a(31.4,35);
   Sensordata b(28.7,65);
   Sensordata c = a+b;
   c.display();
   return 0;
}
Sensordata operator+(const Sensordata &s1 ,const Sensordata &s2)
{
   return Sensordata(s1.temp+s2.temp , s1.hum+s2.hum);
}
