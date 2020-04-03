#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
int kablo,kes,kesilecek;	

// B K M Sa Si
srand (time(NULL));
kablo=rand() % 4+3; 
int kirsay=0;
int mavsay=0;
int sarsay=0;
int siysay=0;
int beysay=0;
int sonmav,sonkir,sonbey,sonsiy,sonsar;
int serino;
serino=rand() %10;

cout << "You examine The Bomb. These are the Informations:\n";
cout << "Serial Number: "<<serino<< "\n\n\nColors of the Wire Module:\n "<<endl;

int renk[kablo];
for (int i=0;i<kablo;i++)


{
renk[i]=rand() % 5+1;



if      (renk[i]==1)
	{
		cout <<"White\n";
		beysay++;
		sonbey=i+1;
	}
	
else if (renk[i]==2)
	{
		cout <<"Red\n";
		kirsay++;
		sonkir=i+1;
	}

else if (renk[i]==3)
	{
		cout <<"Blue\n";
		mavsay++;
		sonmav=i+1;
	}

else if (renk[i]==4)
	{
		cout <<"Yellow\n";
		sarsay++;
		sonsar=i+1;
	}

else if (renk[i]==5)
	{
		cout <<"Black\n";
		siysay++;
		sonsiy=i+1;
	}

}
cout << "\nWhich Number Will You Cut?\n";
cin >>kes;



if (kablo==3) //bitti
{
	if (kirsay==0)
		{kesilecek=2;}
		
	else if (renk[2]==1)
		{kesilecek=3;}
		
	else if (mavsay>1)
		{kesilecek=sonmav;}
	else
		{kesilecek=3;}
}


else if (kablo==4)
{
	if ((kirsay>1)&&(serino%2==1))
		{kesilecek=sonkir;}
	
	else if ((renk[3]==4)&&(kirsay==0))
		{kesilecek=1;}
		
	else if (mavsay==1)
		{kesilecek=1;}
				
	else if (sarsay>1)
		{kesilecek=4;}
		
	else
		{kesilecek=2;}	
}


else if (kablo==5)
{
	if ((renk[4]==5)&&(serino%2==1))
		{kesilecek=4;}
	
	else if ((kirsay==1)&&(sarsay>1))
		{kesilecek=1;}
	
	else if (siysay==0)
		{kesilecek=2;}
	
	else
		{kesilecek=1;}
}


else
{		
	if ((sarsay==0)&&(serino%2==1))
		{kesilecek=3;}
	
	else if ((sarsay==1)&&(beysay>1))
		{kesilecek=4;}
		
	else if (kirsay==0)
		{kesilecek=6;}
	
	else
		{kesilecek=4;}	
}



if (kes==kesilecek)
{cout<< "Congratulations!!    You have Defused the Bomb!!";}

else
{cout<< "BOOOOOOOOOOOOOOOOOOOOOOOOM!!!   Mission Failed...";}
 	
}
