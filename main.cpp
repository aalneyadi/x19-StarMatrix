/*
 * Ali Alneyadi
 * x19 - Star Matrix
 * CSCI 111
 *
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector< vector<char> > starMatrix;
  int numRows,numCols;

  cout<<"Enter rows and columns of stars:"<<endl;
  cin>>numRows;
  cin>>numCols;

  starMatrix.resize(numRows);

  for (int i = 0; i < numRows; i++)
  {
    starMatrix[i].resize(numCols);
    for (int j = 0; j < numCols; j++)
      starMatrix[i][j] = '*';
  }

  for (int i = 0; i < numRows; i++)
  {
    for (int j = 0; j < numCols; j++)
      cout<<starMatrix[i][j];
    cout<<endl;
  }

  return 0;
}
