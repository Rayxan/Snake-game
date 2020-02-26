#include<iostream>
#include<conio.h>   //para fornecer entrada/saída do console
#include<windows.h> //para usar a função Sleep()
using namespace std;

bool gameOver;

//Variáveis para dimensão do mapa
const int width = 20;   //largura
const int height = 20;  //altura

//Variáveis para posição da cabeça, da fruta e da pontuação
int x, y, fruitX, fruitY,score;
int tailX[100], tailY[100];
int nTail;
enum eDirection{STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

//Includes
#include "Setup.h"
#include "Draw.h"
#include "Input.h"
#include "Logic.h"
#include "Menu.h"

int main(){
    system("cls");  //usar no Windows
    //system("clear") //usar no Linux
    if(Menu()==1){
        Setup();
        while(!gameOver){
            Draw();
            Input();
            Logic();
            Sleep(50); // Usar no Windows
            //sleep(50); // Usar no Linux
        }
        //system("cls"); // Usar no Windows
        //system("clear"); //Usar no Linux
        cout<<endl<<"Voce morreu"<<endl<<endl<<"Score final: "<<score<<endl<<endl;
    }else{
        cout<<"O jogo foi finalizado"<<endl;
    }
    return 0;
}