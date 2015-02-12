#ifndef ENVIRONMENTDATAPROVIDER_HPP
#define ENVIRONMENTDATAPROVIDER_HPP

#include <vector>
#include <string>

namespace enayfay
{
    class EnvironmentDataProvider
    {
    public:
        EnvironmentDataProvider(){}
        virtual ~EnvironmentDataProvider(){}

        virtual std::vector< std::string > getCurrentData()=0;

    private:

    protected:

    };
}
#endif // ENVIRONMENTDATAPROVIDER_HPP

