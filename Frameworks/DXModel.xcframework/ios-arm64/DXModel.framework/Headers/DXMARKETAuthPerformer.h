
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthPerformer")
#ifdef RESTRICT_ComDevexpertsDxmarketClientApplicationAuthAuthPerformer
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthPerformer 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthPerformer 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientApplicationAuthAuthPerformer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAuthPerformer_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthPerformer || defined(INCLUDE_DXMARKETAuthPerformer))
#define DXMARKETAuthPerformer_

@class DXAbstractAuthorizationDataTO;

@protocol DXMARKETAuthPerformer < JavaObject >

- (void)loginWithDXAbstractAuthorizationDataTO:(DXAbstractAuthorizationDataTO *)authData;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAuthPerformer)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAuthPerformer)

#define ComDevexpertsDxmarketClientApplicationAuthAuthPerformer DXMARKETAuthPerformer

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthPerformer")
