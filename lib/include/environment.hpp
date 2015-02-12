#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

#include "environmentdataprovider.hpp"

namespace enayfay
{
    class Environment
    {
    public:
        Environment(){}
        virtual ~Environment(){}

        void addDataProvider( EnvironmentDataProvider* provider )
        {
            _dataProviders.push_back( provider );
        }

    private:
        // Data providers
        std::vector< EnvironmentDataProvider* > _dataProviders;
        void updateDataProviders();

    protected:

    };
}
#endif // ENVIRONMENT_HPP

