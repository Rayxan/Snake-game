void Logic(){
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for(int i=1;i<nTail;i++){  //movimentação da calda
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch(dir){
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }
    
    if(x>width || x < 0 || y>height || y < 0) //colisão com as paredes
        gameOver = true;

    //if(x>=width) x=0; else if(x<0) x = width - 1; //atravessar as paredes (sem colisão)
    //if(y>=height) y=0; else if(y<0) y = height - 1;

    for(int i=0;i<nTail;i++){   //colisão com a calda
        if(tailX[i] == x && tailY[i] == y)
            gameOver = true; 
    }
    
    if(x==fruitX && y==fruitY){
        score++;    //pontuação    
        //Gerar frutas
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;    //tamanho da calda
    }
}