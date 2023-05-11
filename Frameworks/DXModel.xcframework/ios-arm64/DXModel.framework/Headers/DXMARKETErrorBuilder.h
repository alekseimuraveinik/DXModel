
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueErrorBuilder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueErrorBuilder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueErrorBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueErrorBuilder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueErrorBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETErrorBuilder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueErrorBuilder || defined(INCLUDE_DXMARKETErrorBuilder))
#define DXMARKETErrorBuilder_

@class DXMARKETOrderEntryValue;

@protocol DXMARKETErrorBuilder < JavaObject >

- (NSString *)buildErrorWithBoundsWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                 withNSString:(NSString *)bounds;

- (NSString *)buildHintWithBoundsWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                withNSString:(NSString *)bounds;

- (NSString *)buildErrorWithMinIncrementWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                       withNSString:(NSString *)increment;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETErrorBuilder)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETErrorBuilder)

#define ComDevexpertsDxmarketClientModelOrderBaseValueErrorBuilder DXMARKETErrorBuilder

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueErrorBuilder")
