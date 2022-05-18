//
// Created by tobias on 5/17/22.
//
#include <bits/stdc++.h>
#ifndef COUNTINGTILINGS_TILES_H
#define COUNTINGTILINGS_TILES_H
void displayMatrix(int mat[3][3]);
class Tile{
    public:
        int grid[3][3];
};


void displayMatrix(int mat[3][3])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%2d ", mat[i][j]);
        printf("\n");
    }
    printf("\n");
}

Tile s = {{
                  {0, 0, 0},
                  {0, 1, 0},
                  {0, 0, 0}
          }};
Tile a = {{
                  {0, 0, 0},
                  {0, 1, 1},
                  {0, 1, 0}
          }};
Tile b = {{
                  {0, 0, 0},
                  {1, 1, 0},
                  {0, 1, 0}
          }};
Tile c = {{
                  {0, 1, 0},
                  {0, 1, 1},
                  {0, 0, 0}
          }};
Tile d = {{
                  {0, 1, 0},
                  {1, 1, 0},
                  {0, 0, 0}
          }};
Tile V = {{
                  {0, 1, 0},
                  {0, 1, 0},
                  {0, 1, 0}
          }};
Tile v = {{
                  {0, 1, 0},
                  {0, 1, 0},
                  {0, 0, 0}
          }};
Tile H = {{
                  {0, 0, 0},
                  {1, 1, 1},
                  {0, 0, 0}
          }};
Tile h = {{
                  {0, 0, 0},
                  {1, 1, 0},
                  {0, 0, 0}
          }};

#endif //COUNTINGTILINGS_TILES_H
