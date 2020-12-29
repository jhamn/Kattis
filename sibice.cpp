
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int pcs, dimx, dimy;

    cin >> pcs >> dimx >> dimy;

    double hyp = sqrt(dimx*dimx + dimy*dimy);

    int *dim_tot;
    dim_tot = new int[pcs];



    for(int i = 0; i < pcs; i++)
    {
        cin >> dim_tot[i];
        if(dim_tot[i] <= dimx || dim_tot[i] <= dimy || dim_tot[i] <= hyp)
        {
            cout << "DA\n";
        } else
        {
            cout << "NE\n";
        }
    }

    delete []dim_tot;
    return 0;
}
