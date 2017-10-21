#include <stdio.h>

int main()
{
int tabla[50];
int my_elo, contrario, absoluto, salida,diferencia,coeficiente,Kvalor,i;
tabla[1]={0,3,0.50,0.50};
tabla[2]={4,10,0.51,0.49};
tabla[3]={11,17,0.52,0.48};
tabla[4]={18,25,0.53,0.47};
tabla[5]={26,32,0.54,0.46};
tabla[6]={33,39,0.55,0.45};
tabla[7]={40,46,0.56,0.44};
tabla[8]={47,53,0.57,0.43};
tabla[9]= {54,61,0.58,0.42};
tabla[10]={62,68,0.59,0.41};
tabla[11]={69,76,0.60,0.40};
tabla[12]={77,83,0.61,0.39};
tabla[13]={84,91,0.62,0.38};
tabla[14]={92,98,0.63,0.37};
tabla[15]={99,106,0.64,0.36};
tabla[16]={107,113,0.65,0.35};
tabla[17]={114,121,0.66,0.34};
tabla[18]={122,129,0.67,0.33};
tabla[19]={130,137,0.68,0.32};
tabla[20]={138,145,0.69,0.31};
tabla[21]={146,153,0.70,0.30};
tabla[22]={154,162,0.71,0.29};
tabla[23]={163,170,0.72,0.28};
tabla[24]={171,179,0.73,0.27};
tabla[25]={180,188,0.74,0.26};
tabla[26]={189,197,0.75,0.25};
tabla[27]={207,215,0.77,0.23};
tabla[29]={216,225,0.78,0.22};
tabla[30]={226,235,0.79,0.21};
tabla[31]={236,245,0.80,0.20};
tabla[32]={246,256,0.81,0.19};
tabla[33]={257,267,0.82,0.18};
tabla[34]={268,278,0.83,0.17};
tabla[35]={279,290,0.84,0.16};
tabla[36]={291,302,0.85,0.15};
tabla[37]={303,315,0.86,0.14};
tabla[38]={316,328,0.87,0.13};
tabla[39]={329,344,0.88,0.12};
tabla[40]={345,357,0.89,0.11};


if ((my_elo > 0) && (contrario > 0))
{
diferencia = my_elo - contrario;
}
if (diferencia>350)
 {
 diferencia=350;
 }
if (diferencia<-350)
 {
 diferencia=-350;
 }

if (diferencia < 0)
 {
  absoluto = diferencia * -1;
 }
 else
  {
   absoluto = diferencia;
  }

for (i = 1; i <41; i++)
 {

  if (absoluto - tabla[0] > -1)
  {
   index = i ;
  }
 }

if (my_elo > contrario)
  {
   coeficiente = diferencia-tabla[2];
  }
  else
  {
   coeficiente = diferencia-tabla[3];
  }


salida =coeficiente * Kvalor;

salida = (salida*100)/100;

}
