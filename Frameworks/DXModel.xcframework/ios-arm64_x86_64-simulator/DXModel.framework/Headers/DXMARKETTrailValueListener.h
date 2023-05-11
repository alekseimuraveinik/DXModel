
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseTrailValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseTrailValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseTrailValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseTrailValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseTrailValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETTrailValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseTrailValueListener || defined(INCLUDE_DXMARKETTrailValueListener))
#define DXMARKETTrailValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETStopOrder;
@class DXMARKETValidationInfo;

@interface DXMARKETTrailValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETStopOrder:(DXMARKETStopOrder *)stopOrder;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETTrailValueListener)

FOUNDATION_EXPORT void DXMARKETTrailValueListener_initWithDXMARKETStopOrder_(DXMARKETTrailValueListener *self, DXMARKETStopOrder *stopOrder);

FOUNDATION_EXPORT DXMARKETTrailValueListener *new_DXMARKETTrailValueListener_initWithDXMARKETStopOrder_(DXMARKETStopOrder *stopOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETTrailValueListener *create_DXMARKETTrailValueListener_initWithDXMARKETStopOrder_(DXMARKETStopOrder *stopOrder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETTrailValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseTrailValueListener DXMARKETTrailValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseTrailValueListener")
