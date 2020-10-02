# include <iostream>
using namespace std;
int issafe(int a[5][5],int i, int j)
{
    if (i < 0 || i >= 5 || j <0|| j >=5 || a[i][j] == 0)
        return 0;
    else 
        return 1;
    return 1;
}
int slutil(int a[5][5],int i,int j,int s[5][5]){
    if (i ==4 && j == 4 && a[i][j] == 1)
    {
        s[i][j] =1;    
        return 1;
    }
    else if (issafe(a,i,j) == 1){
        s[i][j] = 1;
        if (slutil(a,i+1,j,s) == 1)
        {
            return 1;
        }
        else if (slutil(a,i,j+1,s) == 1)
        {
            return 1;
        }
        s[i][j] = 0;
        return 0;
    }
    return 0;
}
int main(){
    int  a [5] [5] = {{1,0,0,1,0},
                      {1,1,0,1,0},
                      {1,1,1,0,0},
                      {1,0,1,0,0},
                      {0,1,1,1,1}};
    int s [5][5] = {{0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0}};
    if (slutil(a,0,0,s) == 1)
    {
        for (int i = 0; i < 5; ++i)
        {
            for (int j =0 ; j < 5 ;++j)
                cout << s[i][j] << " ";
            cout << "\n";
        }
    }
}