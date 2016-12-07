//
//  c_lip.h
//  NTL_iOS
//
//  Created by Steve Brenneis on 12/7/16.
//  Copyright © 2016 CryptoKitty. All rights reserved.
//

#ifndef c_lip_h
#define c_lip_h

// Macros. Look out!
#define NTL_verylong _ntl_verylong
#define NTL_verylong_body _ntl_verylong_body
#define NTL_zfree _ntl_zfree
#define NTL_zintoz _ntl_zintoz1

// Types.
typedef long *_ntl_verylong;
typedef long _ntl_verylong_body;

// Forward declarations
void _ntl_zfree(_ntl_verylong *x);
void _ntl_zintoz1(long d, _ntl_verylong *a);

#endif /* c_lip_h */
