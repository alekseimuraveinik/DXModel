
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventEventProcessor")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelEventEventProcessor
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventEventProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventEventProcessor 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelEventEventProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETEventProcessor_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventEventProcessor || defined(INCLUDE_DXMARKETEventProcessor))
#define DXMARKETEventProcessor_

@class PSListTO;

@protocol DXMARKETEventProcessor < JavaObject >

- (jlong)getPersistedTimestamp;

- (void)onNewEventsWithPSListTO:(PSListTO *)allEvents
                        withInt:(jint)from
                       withLong:(jlong)newTimestamp;

- (void)clear;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETEventProcessor)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETEventProcessor)

#define ComDevexpertsDxmarketClientModelEventEventProcessor DXMARKETEventProcessor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventEventProcessor")
