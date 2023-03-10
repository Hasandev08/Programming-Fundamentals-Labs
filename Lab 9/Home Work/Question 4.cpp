
#include <iostream>
using namespace std;
int turtle(int, int, int);
int print();
int direction(int command);
unsigned char floor[20][20] = {'_'}; // initial empty floor
enum Direct {UP, RIGHT, DOWN, LEFT}; // possible turtle directions
Direct go = RIGHT;
int command;
int step;
int posY = 0;
int posX = 0;
bool pen = 0; // initial pen position is up

int main()
{
   // array initialization
   for(int i = 0; i < 20; i++)
   {
      for(int j = 0; j < 20; j++)
      {
         floor[i][j] = '.';
      }
   }

   // start program
   cout << "Please enter commands: ";
   cin >> command;

   // get commands
   while(command != 9)
   {
      // pen status update
      if(command == 2)
      {
         pen = 1;
         cout << "Pen down" << endl;
      }
      else
         if(command == 1)
         {
            pen = 0;
            cout << "Pen up" << endl;
         }

      // direction
      if(command == 3 || command == 4)
         direction(command);

      // check move
      if(command == 5)
      {
         cout << "Enter \",\" symbol and then step length" << endl;

         char com;
         cin >> com;

         while(com != ',')
         {
            cout << "\nPlease enter \",\" symbol and then step length";
            cin >> com;
         }
         cout << "\nStep length: ";
         cin >> step;

         if(go == RIGHT)
         {
            while((posX + step) > 20)
            {
               cout << "You are going out of floor(right)."
                  << "Please enter less number:" << endl;
               cin >> step;
            }
         }
         else if(go == DOWN)
         {
            while((posY + step) > 20)
            {
               cout << "You are going out of floor(down)."
                  << "Please enter less number:" << endl;
               cin >> step;
            }
         }
         else if(go == UP)
         {
            while((posY - step) <= 0)
            {
               cout << "You are going out of floor(up)."
                  << "Please enter less number:" << endl;
               cin >> step;
            }
         }
         else
         {
            while((posX - step) <= 0)
            {
               cout << "You are going out of floor(right)."
                  << "Please enter less number:" << endl;
               cin >> step;
            }
         }

         turtle(step, posY, posX);
         cout << "Your current position: " << posY << ":" << posX << endl;
      }

      // print result
      if(command == 6)
         print();

      cin >> command;

   }
   return 0;
}

// go turtle go
int turtle(int a, int posy, int posx)
{
   if(go == RIGHT)
   {
      for(int i = posy; i == posy; i++)
      {
         for(int j = posx; j < posx + step; j++)
         {
            if(pen == 1)
               floor[i][j] = 'X';
            else
               floor[i][j] = '-';
         }
      }
      posX += step - 1;
   }
   else if(go == DOWN)
   {
      for(int i = posy; i < posy + step; i++)
      {
         for(int j = posx; j == posx; j++)
         {
            if(pen == 1)
               floor[i][j] = 'X';
            else
               floor[i][j] = '-';
         }
      }
      posY += step - 1;
   }
   else if(go == LEFT)
   {
      for(int i = posy; i == posy; i++)
      {
         for(int j = posx; j > posx - step; j--)
         {
            if(pen == 1)
               floor[i][j] = 'X';
            else
               floor[i][j] = '-';
         }
      }
      posX -= step - 1;
   }
   else if(go == UP)
   {
      for(int i = posy; i > posy - step; i--)
      {
         for(int j = posx; j == posx; j++)
         {
            if(pen == 1)
               floor[i][j] = 'X';
            else
               floor[i][j] = '-';
         }
      }
      posY -= step - 1;
   }

}

// Print the 20-by-20 array
int print()
{
   for(int i = 0; i < 20; i++)
   {
      for(int j = 0; j < 20; j++)
      {
         cout << floor[i][j];
      }
      cout << endl;
   }
}

// determine directions
int direction(int command)
{
   if(go == RIGHT)
   {
      if(command == 3)
      {
         go = DOWN;
         cout << "Right turn.\Your direction: " << go << endl;
      }
      else
         if(command == 4)
         {
            go = UP;
            cout << "Left turn.\Your direction: " << go << endl;
         }
   }
   else if(go == DOWN)
   {
      if(command == 3)
      {
         go = LEFT;
         cout << "Right turn.\Your direction: " << go << endl;
      }
      else
         if(command == 4)
         {
            go = RIGHT;
            cout << "Left turn.\Your direction: " << go << endl;
         }
   }
   else if(go == LEFT)
   {
      if(command == 3)
      {
         go = UP;
         cout << "Right turn.\Your direction: " << go << endl;
      }
      else
         if(command == 4)
         {
            go = DOWN;
            cout << "Left turn.\Your direction: " << go << endl;
         }
   }
   else
   {
      if(command == 3)
      {
         go = RIGHT;
         cout << "Right turn.\Your direction: " << go << endl;
      }
      else
         if(command == 4)
         {
            go = LEFT;
            cout << "Left turn.\Your direction: " << go << endl;
         }
   }
}
