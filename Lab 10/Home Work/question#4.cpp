#include <iostream>
using namespace std;
 
int main(void)
 { int n = 0;
  int sp = 0;
   int ep = 0;
    int hp = 0;
	int move (int n, int sp, int ep, int hp);
	int wait;
	cout<<"Enter number of disks";
	  cin>>n;
	 cout<<"Enter start peg (1, 2, or 3): ";
	cin>>sp;
	cout<<"Enter end peg number (1, 2, or 3): ";
	 cin>>ep; 
		if ( sp == ep ){ printf("Nice try");
	return 0; } 
	 if (( sp == 1 && ep ==2) || (sp ==2 && ep == 1)) hp = 3;
	  if (( sp == 1 && ep ==3) || (sp ==3 && ep == 1)) hp = 2;
	 if (( sp == 2 && ep ==3) || (sp ==3 && ep == 2)) hp = 1;
	 cout<<"Now to blow your mind as we move %d disks from peg %d to peg %d using %d as a holding peg never allowing a larger disk to be on top\n\n", n, sp , ep , hp;
	move (n , sp , ep , hp);
	cin>>wait; 
	  return 0;
	  }
	 int move ( int n, int sp, int ep, int hp )
	 {
	 if (n==1)
	 {
	cout<<"Move disk from %d--->%d", sp , ep;
		 }
	 else { move ( (n-1), sp, hp, ep );
	 cout<<"Move disk from %d--->%d", sp , ep;
	  move ( (n-1), hp, ep, sp ); 
	} 
	}


