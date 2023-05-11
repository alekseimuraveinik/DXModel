
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelIndicatorIndicatorsCallback")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelIndicatorIndicatorsCallback
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelIndicatorIndicatorsCallback 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelIndicatorIndicatorsCallback 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelIndicatorIndicatorsCallback

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETIndicatorsCallback_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelIndicatorIndicatorsCallback || defined(INCLUDE_DXMARKETIndicatorsCallback))
#define DXMARKETIndicatorsCallback_

@class PSListTO;

@protocol DXMARKETIndicatorsCallback < JavaObject >

- (void)onIndicatorsReceivedWithPSListTO:(PSListTO *)indicators;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETIndicatorsCallback)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETIndicatorsCallback)

#define ComDevexpertsDxmarketClientModelIndicatorIndicatorsCallback DXMARKETIndicatorsCallback

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelIndicatorIndicatorsCallback")
