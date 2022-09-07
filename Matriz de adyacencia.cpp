#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
	int n,i,j,may,men=999;
	int matriz[11][11];	
	cout<<"      _____                _                        _______\n     |  ___|              | |                      |__   __|    ___\n   ";
	cout<<"  | |__ _   _ _____  __| | __ _  _    _  ___  _____| | ____ /  _|\n     | ___| | | |  _  |/ _  |/ _` |/ \\__/ \\/(_)\\|  _  | |/ _  \\\\_ \\\n";
	cout<<"     | |  | |_| | | | | (_| | (_) ||  __  || __/| | | | | (_) | _| |\n     |_|   \\___/|_| |_|\\____|\\__,_||_|  |_|\\___||_| |_|_|\\____/|___/\n";
	cout<<"\n\n\t ________ _________ ________\n\t|___  ___|   ______|___  ___|\n";
	cout<<"\t   |  |  |  |         |  |\n\t   |  |  |  |         |  |\n";
	cout<<"\t __|  |__|  |______ __|  |__\n\t|________|_________|________|\n";
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;	
	printf("\nIngrese el numero de filas y columnas que tendra la matriz ");
	scanf("%d",&n);
	printf("\n");
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			matriz[i][j]=0;	
			}
			else
			{
				if (j<i)
				{
				matriz[i][j]=matriz[j][i];	
				}
			else
			{
			if (j>i)
			{			
			printf("Ingrese el valor de la posicion [%d][%d] de la matriz ",i+1,j+1);
			scanf("%d",&matriz[i][j]);	
					}
				}
			}
		}
	}
	system("cls");
	printf("Matriz de adyacencia\n");
	for (i=0;i<n;i++)
	{
		may=0;
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("[%d]\t",matriz[i][j]);
			if(may<matriz[i][j])
			{
			may=matriz[i][j];
			matriz[i][10]=may;	
			}			
		}
	}
	printf("\n\n");
	printf("Excentricidad de los vertices\n");
	for (i=0;i<n;i++)
	{
		if(matriz[i][10]<men)
			{
				men=matriz[i][10];
				matriz[11][11]=men;
			}
		printf("\n %d---->%d",i,matriz[i][10]);					
	}
	
	printf("\n\n");
	printf("Radio del grafo : %d",matriz[11][11]);
	
	printf("\n\n");
	system("pause");
	return 0;
	
}
