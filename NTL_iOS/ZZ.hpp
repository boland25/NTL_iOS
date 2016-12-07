//
//  ZZ.hpp
//  NTL_iOS
//
//  Created by Steve Brenneis on 12/7/16.
//

#ifndef ZZ_hpp
#define ZZ_hpp

#include "WrappedPtr.hpp"
#include "lip.h"

namespace NTL {
    
    class ZZ {
        
    public:
        ZZ();
        ZZ(long a);
        
    private:
        class Deleter {
        public:
            static void apply(NTL_verylong& p) { NTL_zfree(&p); }
        };
    
    private:
        WrappedPtr<NTL_verylong_body, Deleter> rep;

    };

    
}

#endif /* ZZ_hpp */
