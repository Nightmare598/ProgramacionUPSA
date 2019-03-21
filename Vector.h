#pragma once
#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <string>
using namespace std;
const int n=20;
class Vector
{
private: 
	string vect[n];
	int tamanio;
public:
	string get_vector(int p){ //p es posicion
		return vect[p];
	}
	void set_entero(int p, string s){
		vect[p]=s;
	}
	int get_tamanio(){
		return tamanio;
	}
	void set_tamanio(int t){
		tamanio=t;
	}

	Vector(){tamanio=0;} //constructor

	bool vacio(){
		if(tamanio==0)
			return true;
		else
			return false;
	}

	bool lleno(){
		if(tamanio==n)
			return true;
		else 
			return false;
	}

	bool insertar(int p, string s){
		if(lleno()){
			return false;}
	if(p<0 || p>=tamanio)
		return false;
	else{
		int i=tamanio;
		while(i>p){
			vect[i]=vect[i-1];
			i--;
		}
		vect[p]=s;
		tamanio++;
		return true;
	}
	
	}

	bool eliminar(int p, string &x){
	if(vacio()==true)
		return false;
	else if(p<0 || p>=tamanio )
		return false;

		int i=p;
		x=vect[p];
	
	while(i<tamanio){
		vect[i]=vect[i+1];
		i++;
	}
	
	tamanio--;
	return true;
	}

void leer(string letra){
		int tam;
		cout<<"El tamaño es:";
		cin>>tam;
		int i=0;
		while(i<tam){
			cout<<"vector "<<letra<<"["<<i<<"]:";
			cin>>vect[i];
			i++;
		}
		tamanio=i;
	}

	void mostrar(string letra){
		int i =0;
		cout<<endl;
		while(i<tamanio){
			cout<<"vector "<<letra<<":["<<i<<"]"<<vect[i]<<endl;
			i++;
		}
	}
	bool Borrar(){
		int i;
		if(vacio()==true){return false;}
		i=0;
		while(i<tamanio){
			vect[i]="";
			i++;
		}
		tamanio =0;
		return true;
	}

	int frecuencia(){
	for(int i=0; i<tamanio; i++)
		for(int j=1; j<=tamanio; j++)
	
	
	}
};
