//
//  c_lip.h
//  NTL_iOS
//
//  Created by Steve Brenneis on 12/7/16.
//

// Leading underscores removed. C++11 reserves identifiers
// with leading and trailing underscores in all scopes.
//

#ifndef c_lip_h
#define c_lip_h

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
