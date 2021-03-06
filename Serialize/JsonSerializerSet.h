
#ifndef THORSANVIL_SERIALIZE_JSON_SERIAlIZE_SET_H
#define THORSANVIL_SERIALIZE_JSON_SERIAlIZE_SET_H

#include "JsonSerializerContainer.h"
#include <set>

namespace ThorsAnvil
{
    namespace Serialize
    {
        namespace Json
        {

template<typename T>
struct ContainerTraits<std::set<T> >
{
    static bool const isConstContainer  = true;
    typedef     T               DataType;
    typedef     T               ValueType;
};


template<typename T>
struct JsonSerializeTraits<std::set<T> >
{
    typedef std::set<T>                                 LocalType;
    typedef void                                        ParentType;
    static JsonSerializeType const  type    = Array;

    typedef JsonContainerAttributeAccessor<LocalType>   Accessor;
    THORSANVIL_SERIALIZE_JsonGenericArrAttributeAccess(Accessor);
    typedef boost::mpl::vector<genericAccessor>         SerializeInfo;
};



        }
    }
}

#endif




