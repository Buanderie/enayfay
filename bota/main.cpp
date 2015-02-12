
// STL
#include <iostream>
#include <vector>

// TSMODEL
#include <kclient.hpp>
#include <ktrade.hpp>

using namespace std;

int main( int argc, char** argv )
{
    //tsmodel::TimeSerieStream<double>* fs = new tsmodel::FileStream<double>( "/home/said/toto.txt");

    //while( fs->hasNext() )

    // initialize kraken lib's resources:
    Kraken::initialize();
    Kraken::KClient kc( "Pb+XhetDzK+9NB9JJJ4lJyE4QF8qDczVoChf1jaqGMF96PhGiSTB7mYc", "QBSio+cHJ+/KmTNXDr+mmdCLeYqEQDKzthHjKcttnO3rM/7TqMdYgSaF2osG13ssfL7d/IFVPmppU57/eNSklA==");


    std::vector<Kraken::KTrade> trades;
    kc.trades( "XBTEUR", "0", trades);
    {
        cout << "popopo" << endl;
    }

	return 0;
}
