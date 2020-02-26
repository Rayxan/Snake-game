void Setup(){
    gameOver = false;
    dir = STOP; //Só haverá movimento se for pressionado uma tecla
    
    //Posicionando a cabeça da cobra no meio do mapa
    x = width / 2;
    y = height / 2;

    //Gerar frutas
    fruitX = rand() % width;
    fruitY = rand() % height;

    score = 0; 
}