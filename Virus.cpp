/********************************************		            
* If you're here, you should know that      *			      
* it's my author's program. I wrote it      *			      
* because I wanted to punish my roommate    *			  
* for touching my computer when I was away  *			 
* from keyboard. I don't want to steal      *		        
* anything. This program only make an       *		        
* annoying jokes. You can delete this       *		      	
* file if you want, and that's all.         *			
* Repaired!                                 *			
* 					    * 		 
*					    *		      
* If you want to make a joke to your friend *			
* you should compile this file to .exe, and *			 
* past it to Win+R ->"shell:common startup" *			     
* It will start every time when windows is  *			   
* running. If you want to turn this program *			   
* off, hold CTRL + L about 15s.		    *			   
********************************************///           	 
					     //			  
#define _WIN32_WINNT 0x0500		     //			 
#include "pch.h"			     //			
#include <iostream>			     //		       
#include <windows.h>			     //			
#include <time.h>			     //			 
using namespace std;			     //			
int main() {
	srand(time(NULL));
	system("color C");								//Red font looks much better
	cout << "Pokazane okno" << endl;

	HWND hWnd = GetConsoleWindow();							//Makes my program invisible!
	ShowWindow( hWnd, SW_HIDE );

	unsigned short dontDoThisAgain = 1;						//Repeat jokes? No.
	unsigned short whichOne = 0;
	unsigned short delayTime = 5000;						//Time between jokes in ms
	while(GetAsyncKeyState(VK_CONTROL)>=0 || GetAsyncKeyState(0x59)>=0)
	{
		
		switch (whichOne) {
		case 0:
			whichOne = rand() % 24 + 1;
			cout << whichOne << endl;
			if (whichOne == dontDoThisAgain) whichOne = 0;	//As I said, don't repeat jokes...
			Sleep(delayTime);
			break;
		case 1:												//just some right button clicks
			for (int i = 0; i < 7; i++) {
				mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
				Sleep(300);
				mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
				Sleep(1300);
			}
			dontDoThisAgain = 1;
			whichOne = 0;
			Sleep(delayTime);
			break;
		case 2:												//just some left button clicks
			for (int i = 0; i < 7; i++) {
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				Sleep(300);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				Sleep(2000);
			}
			Sleep(delayTime);
			dontDoThisAgain = 2;
			whichOne = 0;
			break;
		case 3:												//don't waste your time... Learn sth new
		{
			ShellExecute(0, 0, L"https://en.wikipedia.org/wiki/Special:Random", 0, 0, SW_SHOW);
			Sleep(delayTime);
			dontDoThisAgain = 3;
			whichOne = 0;
			break;
		}
		case 4:		
		{
			ShellExecute(0, 0, L"https://www.jw.org/en/", 0, 0, SW_SHOW);
			Sleep(delayTime);
			dontDoThisAgain = 4;
			whichOne = 0;
			break;
		}
		case 5:												//theory of conspiracy
		{
			ShellExecute(0, 0, L"https://www.jasnastronamocy.info/", 0, 0, SW_SHOW);
			Sleep(delayTime);
			dontDoThisAgain = 5;
			whichOne = 0;
			break;
		}
		case 6:												//Darkness... My old friend
		{
			ShellExecute(0, 0, L"https://www.youtube.com/watch?v=4zLfCnGVeL4", 0, 0, SW_SHOW);
			Sleep(delayTime);
			dontDoThisAgain = 6;
			whichOne = 0;
			break;
		}
		case 7:												//Natural doctor, you have to try Vitamin C
		{
			ShellExecute(0, 0, L"http://jerzyzieba.com/", 0, 0, SW_SHOW);
			Sleep(delayTime);
			dontDoThisAgain = 7;
			whichOne = 0;
			break;
		}
		case 8:												//The Earth is flat... Like your sister :O
		{
			ShellExecute(0, 0, L"http://forumplaskaziemia.pl/forumdisplay.php?fid=11", 0, 0, SW_SHOW);
			Sleep(delayTime);
			dontDoThisAgain = 8;
			whichOne = 0;
			break;
		}
		case 9:												//something squeals...
			Beep(16000, 5000);
			dontDoThisAgain = 9;
			whichOne = 0;
			break;
		case 10:
			ShellExecute(NULL, NULL, L"C:\\Windows", NULL, NULL, SW_SHOWNORMAL);
			Sleep(delayTime);
			dontDoThisAgain = 10;
			whichOne = 0;
			break;	
		case 11:											
			ShellExecute(NULL, NULL, L"C:\\Program Files", NULL, NULL, SW_SHOWNORMAL);
			Sleep(delayTime);
			dontDoThisAgain = 11;
			whichOne = 0;
			break;
		case 12:											//Everyone has got Adobe
			ShellExecute(NULL, NULL, L"C:\\Program Files (x86)\\Adobe", NULL, NULL, SW_SHOWNORMAL);
			Sleep(delayTime);
			dontDoThisAgain = 12;
			whichOne = 0;
			break;
		case 13:											//I'm tired, I want to sleep
			system("shutdown -s -t 300");
			Sleep(delayTime);
			dontDoThisAgain = 13;
			whichOne = 0;
			break;
		case 14:											//I don't believe you. Log in again
			system("rundll32.exe user32.dll, LockWorkStation");
			Sleep(delayTime);
			dontDoThisAgain = 14;
			whichOne = 0;
			break;
		case 15:											//leave internet, and meet with friends
			for (int i = 0; i < 15; i++) {
				system("netsh wlan disconnect");
				Sleep(1000);
			}
			Sleep(delayTime);
			dontDoThisAgain = 15;
			whichOne = 0;
			break;
		case 16:											//I think you need it, you're not so good at maths
			system("start calc");
			Sleep(delayTime);
			dontDoThisAgain = 16;
			whichOne = 0;
			break;
		case 17:											//Selfie time!
			system("start microsoft.windows.camera:");
			Sleep(delayTime);
			dontDoThisAgain = 17;
			whichOne = 0;
			break;
		case 18:											//Your Wallpaper is so beautifull! I want to see it again!
			keybd_event(VK_LWIN, 0, 0, 0);
			keybd_event('M', 0, 0, 0);
			keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
			Sleep(delayTime);
			dontDoThisAgain = 18;
			whichOne = 0;
			break;
		case 19:											//"I think sth is wrong" - notepad said...
			system("start notepad.exe");
			Sleep(600);
			{
				keybd_event('I', 0, 0, 0);
				Sleep(50);
				keybd_event(VK_SPACE, 0, 0, 0);
				Sleep(50);
				keybd_event('T', 0, 0, 0);
				Sleep(50);
				keybd_event('H', 0, 0, 0);
				Sleep(50);
				keybd_event('I', 0, 0, 0);
				Sleep(50);
				keybd_event('N', 0, 0, 0);
				Sleep(50);
				keybd_event('K', 0, 0, 0);
				Sleep(50);
				keybd_event(VK_SPACE, 0, 0, 0);
				Sleep(50);
				keybd_event('S', 0, 0, 0);
				Sleep(50);
				keybd_event('T', 0, 0, 0);
				Sleep(50);								
				keybd_event('H', 0, 0, 0);						
				Sleep(50);								
				keybd_event(VK_SPACE, 0, 0, 0);						
				Sleep(50);								
				keybd_event('I', 0, 0, 0);						
				Sleep(50);								
				keybd_event('S', 0, 0, 0);						
				Sleep(50);							
				keybd_event(VK_SPACE, 0, 0, 0);						
				Sleep(50);								
				keybd_event('W', 0, 0, 0);						
				Sleep(50);								
				keybd_event('R', 0, 0, 0);						
				Sleep(50);								
				keybd_event('O', 0, 0, 0);
				Sleep(50);
				keybd_event('N', 0, 0, 0);
				Sleep(50);
				keybd_event('G', 0, 0, 0);
				Sleep(50);
				keybd_event(VK_OEM_PERIOD, 0, 0, 0);
				Sleep(50);
				keybd_event(VK_MENU, 0, 0, 0);
				keybd_event(VK_F4, 0, 0, 0);
				keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0);
				Sleep(400);
				keybd_event(VK_RIGHT, 0, 0, 0);
				Sleep(100);
				keybd_event(VK_RETURN, 0, 0, 0);
				Sleep(1000);
			}
			Sleep(delayTime);
			dontDoThisAgain = 19;
			whichOne = 0;
			break;
		case 20:											//alt + tab
			keybd_event(VK_MENU, 0, 0, 0);
			keybd_event(VK_TAB, 0, 0, 0);
			Sleep(5000);
			keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(VK_TAB, 0, KEYEVENTF_KEYUP, 0);
			Sleep(delayTime);
			dontDoThisAgain = 20;
			whichOne = 0;
			break;
		case 21:											//Be quiet!
			keybd_event(VK_VOLUME_MUTE, 0, 0, 0);
			Sleep(delayTime);
			dontDoThisAgain = 21;
			whichOne = 0;
			break;
		case 22:											//or be loud?
			for (int i = 0; i < 100; i++)
			{
				keybd_event(VK_VOLUME_UP, 0, 0, 0);
				Sleep(10);
			}
			Sleep(delayTime);
			dontDoThisAgain = 22;
			whichOne = 0;
			break;
		case 23:											//Shake keyboard							
			int Char;
			while (!GetAsyncKeyState(VK_DELETE))
			{
				for (Char = 65; Char < 90; Char++)
				{
					if (GetAsyncKeyState(Char) < 0)

					{
						switch (Char)
						{

						case 66:    //b
						{
							keybd_event(VK_BACK, 0, 0, 0);
							Sleep(20);
							keybd_event(77, 0, 0, 0);
							break;
						}
						case 67:    //c
						{
							keybd_event(VK_BACK, 0, 0, 0);
							Sleep(20);
							keybd_event(78, 0, 0, 0);
							break;
						}
						case 68:    //d
						{
							keybd_event(VK_BACK, 0, 0, 0);
							Sleep(20);
							keybd_event(79, 0, 0, 0);
							break;
						}
						case 70:    //f
						{
							keybd_event(VK_BACK, 0, 0, 0);
							Sleep(20);
							keybd_event(81, 0, 0, 0);
							break;
						}
						case 71:    //g
						{
							keybd_event(VK_BACK, 0, 0, 0);
							Sleep(20);
							keybd_event(82, 0, 0, 0);
							break;
						}
						case 72:    //h
						{
							keybd_event(VK_BACK, 0, 0, 0);
							Sleep(20);
							keybd_event(83, 0, 0, 0);
							break;
						}
						case 74:    //j
						{
							keybd_event(VK_BACK, 0, 0, 0);
							Sleep(20);
							keybd_event(85, 0, 0, 0);
							break;
						}
						case 75:    //k
						{
							keybd_event(VK_BACK, 0, 0, 0);
							Sleep(20);
							keybd_event(86, 0, 0, 0);
							break;
						}
						}
					}
				}
			}
			Sleep(delayTime);
			dontDoThisAgain = 23;
			whichOne = 0;
			break;
		case 24:											//When pointer will get closer to the center of the screen, program change his position to "random"
			{
			srand(time(NULL));                              //always different numbers!
			POINT coordinates;                              //struct with X Y

			int horizontal, vertical;
			RECT desktop;
			HWND hDesktop = GetDesktopWindow();
			GetWindowRect(hDesktop, &desktop);              //get screen's dimensions
			horizontal = desktop.right;
			vertical = desktop.bottom;

			while (!GetAsyncKeyState(VK_DELETE))
			{
				GetCursorPos(&coordinates);
				if (((coordinates.x) > (horizontal / 2 - 100)) && ((coordinates.x) < (horizontal / 2 + 100)) && ((coordinates.y) > (vertical / 2 - 100)) && ((coordinates.y) < (vertical / 2 + 100))) {
					SetCursorPos(rand() % horizontal, rand() % vertical);
				}

			}
			
			}	
			Sleep(delayTime);
			dontDoThisAgain = 24;
			whichOne = 0;
			break;
		case 25:
			cout << "This time you're lucky cause I've done nothing so keep your eyes wide open..." << endl;
			Sleep(delayTime);
			dontDoThisAgain = 25;
			whichOne = 0;
			break;
		}
	}
	return 0;
}
