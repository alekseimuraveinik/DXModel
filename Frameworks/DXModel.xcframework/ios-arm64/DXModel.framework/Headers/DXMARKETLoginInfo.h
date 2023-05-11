
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationLoginInfo")
#ifdef RESTRICT_ComDevexpertsDxmarketClientApplicationLoginInfo
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationLoginInfo 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationLoginInfo 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientApplicationLoginInfo

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETLoginInfo_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationLoginInfo || defined(INCLUDE_DXMARKETLoginInfo))
#define DXMARKETLoginInfo_

@class DXAbstractAuthorizationDataTO;
@class DXLoginRequestTO;
@class DXLoginResultTO;

@protocol DXMARKETLoginInfo < JavaObject >

- (jboolean)isTrusted;

- (DXAbstractAuthorizationDataTO *)getAuthorizationData;

- (void)loginActionPerformedWithDXLoginRequestTO:(DXLoginRequestTO *)request
                             withDXLoginResultTO:(DXLoginResultTO *)result;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETLoginInfo)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETLoginInfo)

#define ComDevexpertsDxmarketClientApplicationLoginInfo DXMARKETLoginInfo

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationLoginInfo")
