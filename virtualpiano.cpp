#include <iostream>
using namespace std;
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <windows.h>
void discrete(char a[]);
void continuous(char a[]);
void fun(char a[]);
void exec(char a[], int temp, int input);

void exec(char a[], int temp, int input) {
  system("CLS");
  char tem;
  if (temp) {
    for (int i = 0; i < 26; i++) {
      if (input == a[i]) {
        tem = a[i];
        a[i] = '*';
      }
    }
  }
  cout << "\n\n\n _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ "
          "_____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ "
          "_____ _____ _____ _____ _____";
  cout << "\n|     |     |     |     |     |     |     |     |     |     |     "
          "|     |     |     |     |     |     |     |     |     |     |     | "
          "    |     |     |     |     ";
  cout << "\n|     |     |     |     |     |     |     |     |     |     |     "
          "|     |     |     |     |     |     |     |     |     |     |     | "
          "    |     |     |     |     ";
  cout << "\n|     |     |     |     |     |     |     |     |     |     |     "
          "|     |     |     |     |     |     |     |     |     |     |     | "
          "    |     |     |     |     ";
  cout << "\n|     |     |     |     |     |     |     |     |     |     |     "
          "|     |     |     |     |     |     |     |     |     |     |     | "
          "    |     |     |     |     ";
  cout << "\n|  " << a[0] << "  |  " << a[1] << "  |  " << a[2] << "  |  "
       << a[3] << "  |  " << a[4] << "  |  " << a[5] << "  |  " << a[6]
       << "  |  " << a[7] << "  |  " << a[8] << "  |  " << a[9] << "  |  "
       << a[10] << "  |  " << a[11] << "  |  " << a[12] << "  |  " << a[13]
       << "  |  " << a[14] << "  |  " << a[15] << "  |  " << a[16] << "  |  "
       << a[17] << "  |  " << a[18] << "  |  " << a[19] << "  |  " << a[20]
       << "  |  " << a[21] << "  |  " << a[22] << "  |  " << a[23] << "  |  "
       << a[24] << "  |  " << a[25] << "  |  ";
  cout << "\n|     |     |     |     |     |     |     |     |     |     |     "
          "|     |     |     |     |     |     |     |     |     |     |     | "
          "    |     |     |     |     ";
  cout << "\n|     |     |     |     |     |     |     |     |     |     |     "
          "|     |     |     |     |     |     |     |     |     |     |     | "
          "    |     |     |     |     ";
  cout << "\n|     |     |     |     |     |     |     |     |     |     |     "
          "|     |     |     |     |     |     |     |     |     |     |     | "
          "    |     |     |     |     ";
  cout << "\n|     |     |     |     |     |     |     |     |     |     |     "
          "|     |     |     |     |     |     |     |     |     |     |     | "
          "    |     |     |     |     ";
  cout << "\n _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ "
          "_____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ "
          "_____ _____ _____ _____ _____\n\n";
  if (temp) {
    for (int i = 0; i < 26; i++) {
      if (a[i] == '*') {
        a[i] = tem;
      }
    }
  }
}

void continuous(char a[]) {
  cout << "Press Shift+E to exit";
  char b[30];
  strcpy(b, a);
  int cz = 0;

  char input;
  do {
    input = getch();

    if (input == 'E') {
      Beep(0, 0);
      exit(0);
    } else if (input == 113) {
      exec(a, 1, 'q');
      Sleep(500);
      exec(b, 0, 0);
      Beep(100, 100);
      cout << "\nq pressed";
    } else if (input == 119) {
      Beep(150, 100);
      exec(a, 1, 'w');
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nw pressed";
    } else if (input == 101) {
      Beep(200, 100);
      exec(a, 1, 'e');
      Sleep(500);
      exec(b, 0, 0);
      cout << "\ne pressed";
    } else if (input == 114) {
      exec(a, 1, 'r');
      Beep(250, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nr pressed";
    } else if (input == 116) {
      exec(a, 1, 't');
      Beep(300, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nt pressed";
    } else if (input == 121) {
      exec(a, 1, 'y');
      Beep(350, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\ny pressed";
    } else if (input == 117) {
      exec(a, 1, 'u');
      Beep(400, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nu pressed";
    } else if (input == 105) {
      exec(a, 1, 'i');
      Beep(450, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\ni pressed";
    } else if (input == 111) {
      exec(a, 1, 'o');
      Beep(500, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\no pressed";
    } else if (input == 112) {
      exec(a, 1, 'p');
      Beep(550, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\np pressed";
    } else if (input == 97) {
      exec(a, 1, 'a');
      Beep(600, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\na pressed";
    } else if (input == 115) {
      exec(a, 1, 's');
      Beep(650, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\ns pressed";
    } else if (input == 100) {
      exec(a, 1, 'd');
      Beep(700, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nd pressed";
    } else if (input == 102) {
      exec(a, 1, 'f');
      Beep(750, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nf pressed";
    } else if (input == 103) {
      exec(a, 1, 'g');
      Beep(800, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\ng pressed";
    } else if (input == 104) {
      exec(a, 1, 'h');
      Beep(850, 100);
      Sleep(500);
      cout << "\nh pressed";
      exec(b, 0, 0);
    } else if (input == 106) {
      exec(a, 1, 'j');
      Beep(900, 100);
      Sleep(500);
      cout << "\nj pressed";
      exec(b, 0, 0);
    } else if (input == 107) {
      exec(a, 1, 'k');
      Beep(950, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nk pressed";
    } else if (input == 108) {
      exec(a, 1, 'l');
      Beep(1000, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nl pressed";
    } else if (input == 122) {
      exec(a, 1, 'z');
      Beep(1050, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nz pressed";
    } else if (input == 120) {
      exec(a, 1, 'x');
      Beep(1100, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nx pressed";
    } else if (input == 99) {
      exec(a, 1, 'c');
      Beep(1150, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nc pressed";
    } else if (input == 118) {
      exec(a, 1, 'v');
      Beep(1200, 100);
      Sleep(500);
      cout << "\nv pressed";
      exec(b, 0, 0);
    } else if (input == 98) {
      exec(a, 1, 'b');
      Beep(1250, 100);
      Sleep(500);
      cout << "\nb pressed";
      exec(b, 0, 0);
    } else if (input == 110) {
      exec(a, 1, 'n');
      Beep(1300, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nn pressed";
    } else if (input == 109) {
      exec(a, 1, 'm');
      Beep(1350, 100);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nm pressed";
    }
    cz++;
  } while (cz < 300);
} // Contunuous ends//

void discrete(char a[]) {
  cout << "Press Shift+E to exit";
  char b[30];
  strcpy(b, a);
  int cz = 0;
  char input;
  do {

    input = getch();
    int cz = 0;

    if (input == 'E') {
      Beep(0, 0);
      exit(0);
    } else if (input == 113) {
      exec(a, 1, 'q');
      Beep(100, 50);

      Sleep(500);
      exec(b, 0, 0);
      cout << "\nq pressed";
    } else if (input == 119) {
      Beep(150, 50);
      exec(a, 1, 'w');
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nw pressed";
    } else if (input == 101) {
      Beep(200, 50);
      exec(a, 1, 'e');
      Sleep(500);
      exec(b, 0, 0);
      cout << "\ne pressed";
    } else if (input == 114) {
      exec(a, 1, 'r');

      Beep(250, 50);
      Sleep(500);
      exec(b, 0, 0);

      cout << "\nr pressed";
    } else if (input == 116) {
      exec(a, 1, 't');
      Beep(300, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nt pressed";
    } else if (input == 121) {
      exec(a, 1, 'y');
      Beep(350, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\ny pressed";
    } else if (input == 117) {
      exec(a, 1, 'u');
      Beep(400, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nu pressed";
    } else if (input == 105) {
      exec(a, 1, 'i');
      Beep(450, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\ni pressed";
    } else if (input == 111) {
      exec(a, 1, 'o');
      Beep(500, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\no pressed";
    } else if (input == 112) {
      exec(a, 1, 'p');
      Beep(550, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\np pressed";
    } else if (input == 97) {
      exec(a, 1, 'a');
      Beep(600, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\na pressed";
    } else if (input == 115) {
      exec(a, 1, 's');
      Beep(650, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\ns pressed";
    } else if (input == 100) {
      exec(a, 1, 'd');
      Beep(700, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nd pressed";
    } else if (input == 102) {
      exec(a, 1, 'f');
      Beep(750, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nf pressed";
    } else if (input == 103) {
      exec(a, 1, 'g');
      Beep(800, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\ng pressed";
    } else if (input == 104) {
      exec(a, 1, 'h');
      Beep(850, 50);
      Sleep(500);
      exec(b, 0, 0);
      exec(a, 1, 'j');
      cout << "\nh pressed";
    } else if (input == 106) {
      Beep(900, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nj pressed";
    } else if (input == 107) {
      exec(a, 1, 'k');
      Beep(950, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nk pressed";
    } else if (input == 108) {
      exec(a, 1, 'l');
      Beep(1000, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nl pressed";
    } else if (input == 122) {
      exec(a, 1, 'z');
      Beep(1050, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nz pressed";
    } else if (input == 120) {
      exec(a, 1, 'x');
      Beep(1100, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nx pressed";
    } else if (input == 99) {
      exec(a, 1, 'c');
      Beep(1150, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nc pressed";
    } else if (input == 118) {
      exec(a, 1, 'v');
      Beep(1200, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nv pressed";
    } else if (input == 98) {
      exec(a, 1, 'b');
      Beep(1250, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nb pressed";
    } else if (input == 110) {
      exec(a, 1, 'n');
      Beep(1300, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nn pressed";
    } else if (input == 109) {
      exec(a, 1, 'm');
      Beep(1350, 50);
      Sleep(500);
      exec(b, 0, 0);
      cout << "\nm pressed";
    }
    cz++;
  } while (cz < 1500);
} // Discrete ends//

void fun(char a[]) {

  cout << "Press Shift+E to exit";
  cout << "\nPress keys to play\n";
  char b[30];
  strcpy(b, a);
  int cz = 0;
  char input;
  do {
    input = getch();
    if (input == 'E')
      exit(0);
    else if (input == 113) {
      exec(a, 1, 'q');
      Beep(100, 100);

      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);

      Sleep(10);
      exec(a, 1, 'q');
      Beep(100, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);

      // cout<<"\nq pressed";
    } else if (input == 119) {
      exec(a, 1, 'w');
      Beep(150, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'w');
      Beep(150, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);

      // cout<<"\nq pressed";
    } else if (input == 101) {
      exec(a, 1, 'e');
      Beep(200, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);

      Sleep(10);
      exec(a, 1, 'e');
      Beep(200, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\ne pressed";
    } else if (input == 114) {
      exec(a, 1, 'r');
      Beep(250, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'r');
      Beep(250, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nr pressed";
    } else if (input == 116) {
      exec(a, 1, 't');
      Beep(300, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 't');
      Beep(300, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nt pressed";
    } else if (input == 121) {
      exec(a, 1, 'y');
      Beep(350, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);

      Sleep(10);
      exec(a, 1, 'y');
      Beep(350, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\ny pressed";
    } else if (input == 117) {
      exec(a, 1, 'u');
      Beep(400, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'u');
      Beep(400, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nu pressed";
    } else if (input == 105) {
      exec(a, 1, 'i');
      Beep(450, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'i');
      Beep(450, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\ni pressed";
    } else if (input == 111) {
      exec(a, 1, 'o');
      Beep(500, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'o');
      Beep(500, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\no pressed";
    } else if (input == 112) {
      exec(a, 1, 'p');
      Beep(550, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'p');
      Beep(550, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\np pressed";
    } else if (input == 97) {
      exec(a, 1, 'a');
      Beep(600, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'a');
      Beep(600, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\na pressed";
    } else if (input == 115) {
      exec(a, 1, 's');
      Beep(650, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 's');
      Beep(650, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\ns pressed";
    } else if (input == 100) {
      exec(a, 1, 'd');
      Beep(700, 100);
      Sleep(500);
      exec(b, 0, 0);
      Beep(0, 0);
      Sleep(10);
      exec(a, 1, 'd');

      Beep(700, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nd pressed";
    } else if (input == 102) {
      exec(a, 1, 'f');
      Beep(750, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'f');
      Beep(750, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nf pressed";
    }

    else if (input == 103) {
      exec(a, 1, 'g');
      Beep(800, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'g');
      Beep(800, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\ng pressed";
    } else if (input == 104) {
      exec(a, 1, 'h');
      Beep(850, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'h');
      Beep(850, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nh pressed";
    } else if (input == 106) {
      exec(a, 1, 'j');
      Beep(900, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'j');
      Beep(900, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nj pressed";
    } else if (input == 107) {
      exec(a, 1, 'k');
      Beep(950, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'k');
      Beep(950, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nk pressed";
    } else if (input == 108) {
      exec(a, 1, 'l');
      Beep(1000, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'l');
      Beep(1000, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nl pressed";
    } else if (input == 122) {
      exec(a, 1, 'z');
      Beep(1050, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'z');
      Beep(1050, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nz pressed";
    } else if (input == 120) {
      exec(a, 1, 'x');
      Beep(1100, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'x');
      Beep(1100, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nx pressed";
    } else if (input == 99) {
      exec(a, 1, 'c');
      Beep(1150, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'c');
      Beep(1150, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nc pressed";
    } else if (input == 118) {
      exec(a, 1, 'v');
      Beep(1200, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'v');
      Beep(1200, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nv pressed";
    } else if (input == 98) {
      exec(a, 1, 'b');
      Beep(1250, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'b');
      Beep(1250, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);

      // cout<<"\nb pressed";
    } else if (input == 110) {
      exec(a, 1, 'n');
      Beep(1300, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'n');
      Beep(1300, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nn pressed";
    } else if (input == 109) {
      exec(a, 1, 'm');
      Beep(1350, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      Sleep(10);
      exec(a, 1, 'm');
      Beep(1350, 100);
      Beep(0, 0);
      Sleep(500);
      exec(b, 0, 0);
      // cout<<"\nm pressed";
    }
    cz++;
  } while (cz < 3000);
} // Fun ends//

int main() {
  int choice;
  system("CLS");

  char a[30] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o',
                'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k',
                'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};
  exec(a, 0, 0);

  cout << "\t\t **********Welcome to Electronic Music**********";
  cout << "\n\n\t\t\t\tChoose Piano type";
  cout << "\n\n\t\t\t\t1.Discrete\n\t\t\t\t2.Continuous\n\t\t\t\t3."
          "Interrupted\nEnter your choice : ";

  cin >> choice;
  switch (choice) {
  case 1:
    discrete(a);
    break;
  case 2:
    continuous(a);
    break;
  case 3:
    fun(a);
  default:
    break;
  }

  cout << "Invalid keyword, try again!";
  return 0;
}
