void Draw(){
    //Limpando a tela
    system("cls"); // Usar no Windows
    //system("clear"); //Usar no Linux

    //Desenhando a matriz de '#'
    for(int i=0;i<width+2;i++)    //Preenchendo a parte de cima do mapa (+2 para preencher os espaços em vazio que ficam)
        cout<<"#";
    
    cout<<endl;

    for(int i=0;i<height;i++){  //Preenchendo as laterais do mapa
        for(int j=0;j<height;j++){
            if(j==0)
                cout<<"#";
            
            if(i == y && j == x)    //printa a cabeça da cobra
                cout<<"O";
            else if(i==fruitY && j==fruitX) //printa a fruta
                cout<<"*";
            else{
                bool print  = false;
                for(int k=0;k<nTail;k++){
                    if(tailX[k] == j && tailY[k] == i){
                        cout<<"o";
                        print = true;
                    }
                }
                if(!print)
                    cout<<" ";
            }
            
            if(j == width -1)
                cout<<"#";
        }
        cout<<endl; //Verifica a próxima linha
    }

    for(int i=0;i<width+2;i++)  //Preenchendo a parte de baixo do mapa (+2 para preencher os espaços em vazio que ficam)
        cout<<"#";
    cout<<endl;
    cout<<"Score: "<<score<<endl;
}