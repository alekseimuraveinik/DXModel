
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueParamsResolver")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueParamsResolver
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueParamsResolver 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueParamsResolver 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueParamsResolver

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEntryValueParamsResolver_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueParamsResolver || defined(INCLUDE_DXMARKETOrderEntryValueParamsResolver))
#define DXMARKETOrderEntryValueParamsResolver_

@class DXOrderValidationDetailsTO;
@class IOSLongArray;
@protocol DXMARKETErrorBuilder;

@protocol DXMARKETOrderEntryValueParamsResolver < JavaObject >

- (id<DXMARKETErrorBuilder>)resolveErrorBuilder;

- (IOSLongArray *)buildParamsWithLong:(jlong)value;

- (void)updateWithWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEntryValueParamsResolver)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEntryValueParamsResolver)

#define ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueParamsResolver DXMARKETOrderEntryValueParamsResolver

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueParamsResolver")
