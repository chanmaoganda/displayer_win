#include "..\include\Play.h"

void Play::Start()      //static method
{
    bool flag = true;
    size_t input_number;
    std::string INPUT;
    Play::Start_UI();

    Sleep(1500);
    system("clear");

    while(flag)
    {
        Play::Menu_UI();
        std::getline(std::cin, INPUT);

        try
        {
            if(INPUT.length() != 1)
            {    
                throw "bad input\n";
                break;
            }
        }
        catch(const char* err)
        {
            std::cerr << err << '\n';
        }
        input_number = INPUT[0] - '0';
        
        switch(input_number)
        {
            case 0:
                system("clear");
                flag = false;
                break;
            case 1:
                std::unique_ptr<Displayer> display(new Displayer(200));
                system("clear");
            
                Song* song = new SONGS::PopSongs(new std::string("jiang_nan.mp3"));
                display->AddSongs(song);
                // display->ClearList();
                
                // Play::PlayAudio(song, 20);
                std::cout << "playing music\n";
                system("pause");
                system("clear");

                display->ClearList();
                break;
        }

    }
}

Song* Play::PlayAudio(Song* song)
{
    mciSendString(TEXT("open E:\\git_codes\\practice\\src\\waves\\jiang_nan.mp3 alias song"), NULL, 0,NULL);
    // std::string str = "open E:\\git_codes\\practice\\src\\waves\\" + song->getName() + "alias song";
    // mciSendString(TEXT(str), NULL, 0, NULL);
    mciSendString(TEXT("play song"),NULL,0,NULL);

	mciSendString(TEXT("close song"),NULL,0,NULL);
    return song;
}

Song* Play::PlayAudio(Song* song, size_t seconds)
{
    std::string* Text =new std::string("open E:\\git_codes\\practoce\\src\\waves\\");
    *Text += song->getName();
    *Text += " alias song";

    char PassToConsole[100];
    strcpy(PassToConsole, Text->c_str());

    mciSendString(TEXT(PassToConsole), NULL, 0,NULL);
    // std::string str = "open E:\\git_codes\\practice\\src\\waves\\" + song->getName() + "alias song";
    // mciSendString(TEXT(str), NULL, 0, NULL);
    mciSendString(TEXT("play song"),NULL,0,NULL);

    Sleep(seconds * 1000);//试听

	mciSendString(TEXT("close song"),NULL,0,NULL);
    return song;

}

void Play::Menu_UI()
{
    std::cout << "\t\t\t\t\t============================================\n";
    std::cout << "\t\t\t\t\t|       welcome to my simple displayer     |\n";
    std::cout << "\t\t\t\t\t|              1. play music               |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|             0. quit | exit               |\n";
    std::cout << "\t\t\t\t\t============================================\n";

}

void Play::Start_UI()
{
    std::cout << "\t\t\t\t\t============================================\n";
    std::cout << "\t\t\t\t\t|       welcome to my simple displayer     |\n";
    std::cout << "\t\t\t\t\t|              /==========/                |\n";
    std::cout << "\t\t\t\t\t|             /          /                 |\n";
    std::cout << "\t\t\t\t\t|            /          /                  |\n";
    std::cout << "\t\t\t\t\t|           /          /                   |\n";
    std::cout << "\t\t\t\t\t|          /          /                    |\n";
    std::cout << "\t\t\t\t\t|         /==========/                     |\n";
    std::cout << "\t\t\t\t\t|                                          |\n";
    std::cout << "\t\t\t\t\t|               PRESS  ENTER               |\n";
    std::cout << "\t\t\t\t\t============================================\n";
}
