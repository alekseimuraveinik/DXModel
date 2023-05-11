
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrdersByInstrumentCounter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrdersByInstrumentCounter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrdersByInstrumentCounter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrdersByInstrumentCounter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrdersByInstrumentCounter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrdersByInstrumentCounter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrdersByInstrumentCounter || defined(INCLUDE_DXMARKETOrdersByInstrumentCounter))
#define DXMARKETOrdersByInstrumentCounter_

@class DXInstrumentTO;
@class DXOrderResponseTO;

@interface DXMARKETOrdersByInstrumentCounter : NSObject

#pragma mark Public

+ (jint)getOrdersCountWithDXOrderResponseTO:(DXOrderResponseTO *)ordersResponse
                         withDXInstrumentTO:(DXInstrumentTO *)instrumentTO;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrdersByInstrumentCounter)

FOUNDATION_EXPORT jint DXMARKETOrdersByInstrumentCounter_getOrdersCountWithDXOrderResponseTO_withDXInstrumentTO_(DXOrderResponseTO *ordersResponse, DXInstrumentTO *instrumentTO);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrdersByInstrumentCounter)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderOrdersByInstrumentCounter DXMARKETOrdersByInstrumentCounter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrdersByInstrumentCounter")
