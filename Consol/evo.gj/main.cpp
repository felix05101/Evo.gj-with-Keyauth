#include <Windows.h>
#include <iostream>
#include "render/render.h"
#include "cheat/esp/esp.h"
#include "auth.hpp"
#include <string>
#include "utils.hpp"
#include "skStr.h"
#include "render/ImGui/imgui.h"
#include <mmsystem.h>
#include <tchar.h>
#include <stdlib.h>
#pragma comment(lib, "Winmm.lib") // link to winmm.lib library



//if you sell this exact source without changing the slightest thing besides the offsets im going to personally hunt after you skid :))))





std::string tm_to_readable_time(tm ctx);
static std::time_t string_to_timet(std::string timestamp);
static std::tm timet_to_tm(time_t timestamp);
const std::string compilation_date = (std::string)skCrypt(__DATE__);
const std::string compilation_time = (std::string)skCrypt(__TIME__);

using namespace KeyAuth;

std::string name = ""; // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = "7MXJE4V6xa"; // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = ""; // app secret, the blurred text on licenses tab and other tabs
std::string version = ""; // leave alone unless you've changed version on website; // leave alone unless you've changed version on website
std::string url = skCrypt("").decrypt(); // change if you're self-hosting

api KeyAuthApp(name, ownerid, secret, version, url);



int main()
{
	
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x0D);
	std::string consoleTitle = ("YourPastesNameSkid");
	std::cout << skCrypt("\n\n Connecting..");
	KeyAuthApp.init();
	if (!KeyAuthApp.data.success)
	{
		std::cout << skCrypt("\n Status: ") << KeyAuthApp.data.message;
		Sleep(1500);
		exit(0);
	}





	{
		std::cout << skCrypt("\n\n [1] Login\n [2] Register\n\n Choose option: ");

		int option;
		std::string username;
		std::string password;
		std::string key;

		std::cin >> option;
		switch (option)
		{
		case 1:
			std::cout << skCrypt("\n\n Enter username: ");
			std::cin >> username;
			std::cout << skCrypt("\n Enter password: ");
			std::cin >> password;
			KeyAuthApp.login(username, password);
			break;
		case 2:
			std::cout << skCrypt("\n\n Enter username: ");
			std::cin >> username;
			std::cout << skCrypt("\n Enter password: ");
			std::cin >> password;
			std::cout << skCrypt("\n Enter license: ");
			std::cin >> key;
			KeyAuthApp.regstr(username, password, key);
			break;

		default:
			exit(0);
		}

		if (!KeyAuthApp.data.success)
		{
			std::cout << skCrypt("\n Status: ") << KeyAuthApp.data.message;
			Sleep(1500);
			exit(0);
		}


	}



	//cheat starts
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << ("Loading driver...");
	system("CLS");
	system("curl --silent https://yourMapperLink.exe --output C:\\Windows\\System32\\drvmapper.exe >nul 2>&1"); 
	system("curl --silent https://yourDriverLink.exe --output C:\\Windows\\System32\\drvmoment.sys >nul 2>&1");
	system("cd C:\\Windows\\System32\\");
	system("cls");
	system("C:\\Windows\\System32\\drvmapper.exe C:\\Windows\\System32\\drvmoment.sys");
	system("cls");
	Beep(560, 500);
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << ("Driver loaded!");
	std::this_thread::sleep_for(std::chrono::seconds(1));
	system("CLS");



	std::cout << ("                                             -> YourPastesNameSkid Injected<-");
	std::this_thread::sleep_for(std::chrono::seconds(2));



	driver::find_driver();
	ProcId = driver::find_process((L"FortniteClient-Win64-Shipping.exe"));
	BaseId = driver::find_image();
	if (Debug::PrintPointers) {
		Util::PrintPtr("ProcessId: ", ProcId);
		Util::PrintPtr("BaseId: ", BaseId);
	}

	Render::CreateOverlay();
	Render::DirectXInit();
	Render::MainLoop();














}




























