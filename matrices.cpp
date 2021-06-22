#include<iostream>
using namespace std;
int main()
{
	
int c=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];
	
//esta es la parte de codigos que  me tocó en el trabajo grupal, soy, Alber Dayan Ulloa Mina
//Mostrar las dos matrices por pantalla
	
cout<<" Se muestran las dosmatrices a usar por pantalla :)"; 	
cout<<"\n"<<"\n";
cout<<"matriz 1"<<"\n";
cout<<"\n";
for(c=0; c<10;c++){
	
	cout<<matriz1[c]<<"\n";
}

cout<<"\n";
cout<<"matriz 2"<<"\n";
cout<<"\n";
for(c=0; c<10;c++){
	
	cout<<matriz2[c]<<"\n";
}

// Esta es mi parte del trabajo grupal, soy Genesis Noelia Gallegos Pilligua
// Llenar la matriz suma con la suma de cana uno de los elementos de la matriz1 y la matriz2

cout<<"\n";
cout<<" Se mostrara la suma de la matriz 1 y matriz 2 "<<endl<<endl;
for(c=0;c<10;c++){
	suma[c]=matriz1[c]+ matriz2[c];
	cout<<suma[c];
	cout<< " ,  ";
} 
	


 
//Esta es mi parte del trabajo grupal, soy Heidy Juleisy Saldarriaga vera 
// Llenar la matriz resta con la resta de la matriz1 y la matriz2

cout<<"\n";
cout<<" Se mostrara la resta de la matriz 1 y matriz 2 "<<endl<<endl;
for(c=0;c<10;c++){
	resta[c]=matriz1[c]-matriz2[c];
	cout<<resta[c];
	cout<< " ,  ";

 }
	
// Esta es mi parte del trabajo grupal,soy Valencia Cuero Ana Patricia 
//lenar la matriz producto con la multiplicacion de la matriz1 y lamatriz2

cout<<"\n"<<"\n"<<"\n";
cout<<" Se mostrara el producto entre la matriz 1 y matriz 2"<<endl<<endl;
for(c=0;c<10;c++){
	producto[c]=matriz1[c]* matriz2[c];
	cout<<producto[c];
	cout<< " ,  ";

}	

//Esta es mi parte del trabajo grupal, soy Mayerli Parraga
// llenar  la matriz division con la division de la matriz1 con la matriz2
	
cout<<"\n"<<"\n"<<"\n";
cout<<" Se mostrara la divicion de la matriz1 y la matriz2"<<endl<<endl;
for(c=0;c<10;c++){
	division[c]=matriz1[c]/ matriz2[c];
	cout<<division[c];
	cout<< " ,  ";
	
}
	
return 0;

}
