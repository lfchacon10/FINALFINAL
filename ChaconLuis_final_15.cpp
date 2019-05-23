#include <fstream>
#include <iostream>
#include <math.h>

using namespace std;
using std::cout;
using std::endl;
#define PI 3.1416


void particula ()
{
      float m= 7294.29;
      float q=2;
      float dt=0.1;
      int tFinal = 10;
      int pasosTiempo = tFinal/dt;

      float t[pasosTiempo];
      float x[pasosTiempo];
      float y[pasosTiempo];

      float Vx[pasosTiempo];
      float Vy[pasosTiempo];

      float Ex0= 0;
      float Ey0= 0;

      float Ex1= 0;
      float Ey1= 3;

      float kX0=q*Ex0/m; //Constante de X de 0 a 3 y de 10
      float kY0=q*Ey0/m; //Constante de Y de 0 a 3 y de 10

      float kX1=q*Ex1/m; //Constante de X en intervalor 3 a 7
      float kY1=q*Ey1/m; //Constante de Y en intervalor 3 a 7

      //Para t=0
      t[0]=0;
      t[1]=t[0]+dt;

      x[0]=1;
      y[0]=0;
      x[1]=x[0]+ dt*Vx[0];
      y[1]=y[0]+ dt*Vy[0];

      Vx[1]=0;
      Vy[1]=1;

      Vy[0]= dt*kY0+Vy[1];//backward
      Vx[0]= dt*kX0+Vx[1];

      //Creo todas las velocidades
      for ( int i=0; i <pasosTiempo-2 ; i++)
      {
        t[i+1]=t[i]+ dt;
        if( t[i] <3 && t[i] >=7 )
        {
          Vy[i+2]=Vy[i] - 2*dt*kY0;
          Vx[i+2]=Vx[i] - 2*dt*kX0;
        }
        if ( t[i] >=3 && t[i] <7 )
        {
          Vy[i+2]=Vy[i] - 2*dt*kY1;
          Vx[i+2]=Vx[i] - 2*dt*kX1;
        }
      }

      for ( int i=0; i <pasosTiempo-2 ; i++)
      {
          cout<<t[i]<<","<<x[i]<<","<<y[i]<<","<< Vx[i]<<","<<Vy[i]<<"\n";

          x[i+2]=x[i]+ 2*dt*Vx[i];
          y[i+2]=y[i]+ 2*dt*Vy[i];
          /*
          if( t[i] <3 && t[i] >=7 )
          {
            Vy[i+2]=Vy[i] - 2*dt*kY0;
            Vx[i+2]=Vx[i] - 2*dt*kX0;

          }
          if ( t[i] >=3 && t[i] <7 )
          {
            //cout<<"ENTRO"<<endl;
            Vy[i+2]=Vy[i] - 2*dt*kY1;
            Vx[i+2]=Vx[i] - 2*dt*kX1;

            x[i+2]=x[i]+ 2*dt*Vx[i+1];
            y[i+2]=y[i]+ 2*dt*Vy[i+1];
          }*/
      }
}
int main()
{
  particula ();
}
