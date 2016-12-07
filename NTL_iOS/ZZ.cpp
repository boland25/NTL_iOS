//
//  ZZ.cpp
//  NTL_iOS
//
//  Created by Steve Brenneis on 12/7/16.
//

#include "ZZ.hpp"

namespace NTL {

    ZZ::ZZ() {
    }

    ZZ::ZZ(long a) {

        _ntl_zintoz1(a, &rep);

    }

}
