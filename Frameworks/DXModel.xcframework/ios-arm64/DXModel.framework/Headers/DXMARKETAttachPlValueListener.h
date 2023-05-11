
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachPlValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachPlValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachPlValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachPlValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachPlValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAttachPlValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachPlValueListener || defined(INCLUDE_DXMARKETAttachPlValueListener))
#define DXMARKETAttachPlValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETAttachedOrder;
@class DXMARKETValidationInfo;

@interface DXMARKETAttachPlValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)attachedOrder;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAttachPlValueListener)

FOUNDATION_EXPORT void DXMARKETAttachPlValueListener_initWithDXMARKETAttachedOrder_(DXMARKETAttachPlValueListener *self, DXMARKETAttachedOrder *attachedOrder);

FOUNDATION_EXPORT DXMARKETAttachPlValueListener *new_DXMARKETAttachPlValueListener_initWithDXMARKETAttachedOrder_(DXMARKETAttachedOrder *attachedOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAttachPlValueListener *create_DXMARKETAttachPlValueListener_initWithDXMARKETAttachedOrder_(DXMARKETAttachedOrder *attachedOrder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAttachPlValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseAttachPlValueListener DXMARKETAttachPlValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachPlValueListener")
