#include <iostream>
using namespace std;

typedef enum{wood, stone} material;

struct tile{
  int x,y;
  bool isWall;
  material type;
};

#define NROWS 12
#define NCOLS 16

tile playground[NROWS][NCOLS];
int x=5;
int y=5;

void plotmap(){
  for (int i=0; i<NROWS; i++){
    for (int j=0; j<NCOLS; j++){
      if (playground[i][j].isWall) cout << "*";
      else if (i==x && j==y) cout << "O";
      else cout << " ";
    }
    cout << endl;
  }
}


int main(){

  for (int i=0; i<NROWS; i++){
    for (int j=0; j<NCOLS; j++){
      playground[i][j].x = j;
      playground[i][j].y = i;
      playground[i][j].isWall = (j==0 || i==(NROWS-1) || (i==0 && j!=3) || j==(NCOLS-1));
      if (playground[i][j].isWall){
        playground[i][j].type = stone;
      } else{
        playground[i][j].type = wood;
      }
    }
  }


  plotmap();
  char action;
  cin >> action;

  while (action != 'q'){
    if (action=='l' && y>0 && !playground[x][y-1].isWall) y--;
    else if (action=='r' && y<NCOLS-1 && !playground[x][y+1].isWall) y++;
    else if (action=='u' && x>0 && !playground[x-1][y].isWall) x--;
    else if (action=='d' && x<NROWS-1 && !playground[x+1][y].isWall) x++;
    plotmap();
    cin >> action;
  }


}
