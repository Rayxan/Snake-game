void Input(){
    if(_kbhit()){   //função que verifica no console se alguma tecla foi pressionada
        switch(_getch()){   //pega a tecla pressionada
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}