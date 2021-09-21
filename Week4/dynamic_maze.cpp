#include <iostream>
#include <cmath>

using namespace std;

typedef enum{wood, stone} material;

struct tile{
  int x,y;
  bool isWall;
  material type;
};

int main(){

  int nrows;
  int ncols;
  cin >> nrows >> ncols;

  tile **playground = new tile*[nrows];
  for(int i = 0; i < nrows; ++i) {
    playground[i] = new tile[ncols];
  }


  int x=round(static_cast<float>(nrows)/2.);
  int y=round(static_cast<float>(ncols)/2.);
  if (nrows%2 != 0) x = x-1;
  if (ncols%2 != 0) y = y-1;


  for (int i=0; i<nrows; i++){
    for (int j=0; j<ncols; j++){
      playground[i][j].x = j;
      playground[i][j].y = i;
      playground[i][j].isWall = (j==0 || i==(nrows-1) || (i==0 && j!=3) || j==(ncols-1));
      if (playground[i][j].isWall){
        playground[i][j].type = stone;
      } else{
        playground[i][j].type = wood;
      }
    }
  }

  //plotting
  for (int i=0; i<nrows; i++){
    for (int j=0; j<ncols; j++){
      if (playground[i][j].isWall) cout << "*";
      else if (i==x && j==y) cout << "O";
      else cout << " ";
    }
    cout << endl;
  }

  char action;
  cin >> action;

  while (action != 'q'){
    if (action=='l' && y>0 && !playground[x][y-1].isWall) y--;
    else if (action=='r' && y<ncols-1 && !playground[x][y+1].isWall) y++;
    else if (action=='u' && x>0 && !playground[x-1][y].isWall) x--;
    else if (action=='d' && x<nrows-1 && !playground[x+1][y].isWall) x++;
    
    //plotting
    for (int i=0; i<nrows; i++){
      for (int j=0; j<ncols; j++){
        if (playground[i][j].isWall) cout << "*";
        else if (i==x && j==y) cout << "O";
        else cout << " ";
      }
      cout << endl;
    }


    cin >> action;
  }


}
