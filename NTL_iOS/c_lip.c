//
//  c_lip.c
//  NTL_iOS
//
//  Created by Steve Brenneis on 12/7/16.
//

#include "c_lip.h"
#include "errors.h"
#include <stdlib.h>

void _ntl_zfree(_ntl_verylong *x) {
    
    _ntl_verylong y;
    
    if (*x != 0) {
        if ((*x)[-1] & 1) {
            LogicError("Internal error: can't free this _ntl_verylong");
        }
        
        y = (*x - 1);
        free(y);
        *x = 0;
    }
    
}
