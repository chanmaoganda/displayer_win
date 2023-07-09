#include "..\include\Play.h"

Play::Play()
{
    handler.reset(new Handler());
}

Play::~Play()
{

}

void Play::Start()      //static method
{
    bool flag = true;
    size_t input_number;
    std::string INPUT;
    std::unique_ptr<Mode> mode( new Mode(state::PlayState::SEQUENCE) );

    DisplayUI::Start_UI();
    std::unique_ptr<Displayer> display(new Displayer(200));

    Sleep(1500);

    while(flag)
    {
        system("clear");
        DisplayUI::Menu_UI();

        DisplayUI::SpacesOutput() << "\t     TEXT YOUR CHOICE" << "\n";
        handler->BuffHandler(INPUT, std::cin);
        input_number = INPUT[0] - '0';
        
        SWITCH_INPUT(input_number, flag, display, mode);
    }
}



bool Play::SWITCH_INPUT(int input, bool& flag, std::unique_ptr<Displayer>& display, std::unique_ptr<Mode> &mode)
{
    std::unique_ptr<std::string> song_name ( new std::string() );
    Song* song;
    char choice;
    switch(input)
    {
        case 0:
            system("clear");
            flag = false;
            break;
        case 1:
            system("clear");
            DisplayUI::PlayMusic_UI();
            std::cin >> choice;
            getchar();
            PlayMusic(choice);
            break;
        case 2:
            system("clear");
            DisplayUI::Mode_UI();
            std::cin >> choice;
            getchar();
            ChangeMode(choice, mode);
            break;
        case 3:
            mode->ChangeMode(state::PlayState::CLEAR);
            std::cout << "\t\t\t\t\t      mode has been changed to Clear \n";
            Sleep(1200);
            break;
        case 4:
            system("clear");
            std::getline(std::cin, *song_name);
            song = new DerivedSongs::PopSongs(new std::string(*song_name));
            display->AddSongs(song);

            std::cout << "playing music\n";
            system("pause");
            system("clear");
            break;
    }

    /*
    get the enter buff to avoid the Handler to get the enter and
    thus get the real buff
    */
    
    Sleep(1500);
    return flag;
}

void Play::PlayMusic(const char input)
{
    switch(input)
    {
        case '1':
            PlayAudio(new Song(new std::string("jiang_nan.mp3")), 5);
            break;
        case '2':
            
            break;               
        case '3':
            break;
        case '4':
            break;                   
    }
}

void Play::ChangeMode(const char input, std::unique_ptr<Mode>& mode)
{
    switch(input)
    {
        case '1':
            mode->ChangeMode(state::PlayState::SEQUENCE);
            std::cout << "\t\t\t\t\t     Mode has been changed to Sequence";
            break;
        case '2':
            mode->ChangeMode(state::PlayState::RANDOM);
            std::cout << "\t\t\t\t\t     Mode has been changed to Ramdom";
            break;               
        case '3':
            mode->ChangeMode(state::PlayState::LOOP);
            std::cout << "\t\t\t\t\t     Mode has been changed to Loop";
            break;
        case '4':
            mode->ChangeMode(state::PlayState::CLEAR);
            std::cout << "\t\t\t\t\t     Mode has been changed to Clear";
            break;                   
    }
    Sleep(1200);
}

Song* Play::PlayAudio(Song* song, size_t seconds)
{
    //don't forget to check weather the path is correct
    std::string* Text =new std::string("open E:\\git_codes\\practice\\src\\waves\\");
    *Text += song->getName();
    *Text += " alias song";

    char* PassToConsole;
    strcpy(PassToConsole, Text->c_str());

    mciSendString(TEXT(PassToConsole), NULL, 0,NULL);
    // std::string str = "open E:\\git_codes\\practice\\src\\waves\\" + song->getName() + "alias song";
    // mciSendString(TEXT(str), NULL, 0, NULL);
    mciSendString(TEXT("play song"),NULL,0,NULL);

    Sleep(seconds * 1000);//试听

	mciSendString(TEXT("close song"),NULL,0,NULL);
    return song;
}

void Play::EventHandler()
{
    
}