int Menu(){
    int opcao;
    cout<<"                               __      "<<endl;          
    cout<<"                              /  |                "<<endl;
    cout<<"  _______  _______    ______  $$ |   __   ______  "<<endl;
    cout<<" /       |/          /        $$ |  /  | /        "<<endl;
    cout<<"/$$$$$$$/ $$$$$$$  | $$$$$$  |$$ |_/$$/ /$$$$$$  |"<<endl;
    cout<<"$$        $$ |  $$ | /    $$ |$$   $$<  $$    $$ |"<<endl;
    cout<<" $$$$$$  |$$ |  $$ |/$$$$$$$ |$$$$$$    $$$$$$$$/ "<<endl;
    cout<<"/     $$/ $$ |  $$ |$$    $$ |$$ | $$  |$$       |"<<endl;
    cout<<"$$$$$$$/  $$/   $$/  $$$$$$$/ $$/   $$/  $$$$$$$/"<<endl<<endl;

    cout<<"1 - JOGAR"<<endl<<"2 - SAIR"<<endl;
    cin>>opcao;
    system("cls");
    //system("clear");
    switch(opcao){
        case 1:
            return 1;
            break;
        default:
            break;
        }    
}