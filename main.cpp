//Author:Masten Leonard
#include <vector>
#include <iostream>
using namespace std;

int main()
{
  int num;
  int lines;
  int rows;
  rows=0;
  vector<vector< int> > timesTable;
  num = 0;

timesTable.resize(13);
for(int a=0; a < timesTable.size(); a++)
{
  timesTable[a].resize(13);
  timesTable[a][0] = num;
  num++;
  timesTable[0][num] = num;
}

for(int a = 1; a < timesTable.size() ;a++)
{
      for(int b = 1; b < timesTable[a].size() ;b++)
      {
        timesTable[a][b] = timesTable[a][0]*timesTable[0][b];
      }
}


for(int a = 0; a < timesTable.size() ;a++)
{
    for(int b = 0; b < timesTable[a].size() ;b++)
    {
      cout<<timesTable[a][b]<<" ";

          cout<<"|";
            if (timesTable[a][b] < 10)
         {
              cout<<" ";
            }

            rows++;
             if (rows == 13)
             {
            cout<<endl;
            rows = 0;
        }
    }
  }
  return 0;
}
