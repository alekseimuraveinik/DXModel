
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelPositionPositionsByInstrumentCounter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelPositionPositionsByInstrumentCounter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelPositionPositionsByInstrumentCounter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelPositionPositionsByInstrumentCounter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelPositionPositionsByInstrumentCounter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPositionsByInstrumentCounter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelPositionPositionsByInstrumentCounter || defined(INCLUDE_DXMARKETPositionsByInstrumentCounter))
#define DXMARKETPositionsByInstrumentCounter_

@class DXInstrumentTO;
@class DXPositionResponseTO;

@interface DXMARKETPositionsByInstrumentCounter : NSObject

#pragma mark Public

+ (jint)getPositionsCountWithDXPositionResponseTO:(DXPositionResponseTO *)positionsResponse
                               withDXInstrumentTO:(DXInstrumentTO *)instrumentTO;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPositionsByInstrumentCounter)

FOUNDATION_EXPORT jint DXMARKETPositionsByInstrumentCounter_getPositionsCountWithDXPositionResponseTO_withDXInstrumentTO_(DXPositionResponseTO *positionsResponse, DXInstrumentTO *instrumentTO);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPositionsByInstrumentCounter)

@compatibility_alias ComDevexpertsDxmarketClientModelPositionPositionsByInstrumentCounter DXMARKETPositionsByInstrumentCounter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelPositionPositionsByInstrumentCounter")
