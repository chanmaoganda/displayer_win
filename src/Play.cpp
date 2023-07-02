#include "..\include\Play.h"

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

        std::getline(std::cin, INPUT);

        try
        {
            if(INPUT.length() != 1)
            {    
                throw 100;
            }
        }
        catch(const char* err)
        {
            std::cerr << err << '\n';
            break;
        }
        catch(int num_err)
        {
            std::cerr << num_err << '\n';
        }
        input_number = INPUT[0] - '0';
        
        system("clear");
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
            flag = false;
            break;
        case 1:
            DisplayUI::PlayMusic_UI();
            std::cin >> choice;
            switch(choice)
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
            break;
        case 2:
            DisplayUI::Mode_UI();
            std::cin >> choice;
            switch(choice)
            {
                case '1':
                    mode->ChangeMode(state::PlayState::SEQUENCE);
                    break;
                case '2':
                    mode->ChangeMode(state::PlayState::RANDOM);
                    break;               
                case '3':
                    mode->ChangeMode(state::PlayState::LOOP);
                    break;
                case '4':
                    mode->ChangeMode(state::PlayState::CLEAR);
                    break;                   
            }
            break;
        case 4:
            
            std::getline(std::cin, *song_name);
            song = new SONGS::PopSongs(new std::string(*song_name));
            display->AddSongs(song);

            std::cout << "playing music\n";
            system("pause");
            system("clear");
            //dubug in the check point
            // display->ClearList();
            break;
    }

    // DisplayUI::Exit_UI();
    
    Sleep(1500);
    return flag;
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