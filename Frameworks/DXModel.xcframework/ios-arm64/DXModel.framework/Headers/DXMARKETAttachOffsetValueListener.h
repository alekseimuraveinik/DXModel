
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachOffsetValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachOffsetValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachOffsetValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachOffsetValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachOffsetValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAttachOffsetValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachOffsetValueListener || defined(INCLUDE_DXMARKETAttachOffsetValueListener))
#define DXMARKETAttachOffsetValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETAttachedOrder;
@class DXMARKETValidationInfo;

@interface DXMARKETAttachOffsetValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)attachedOrder;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAttachOffsetValueListener)

FOUNDATION_EXPORT void DXMARKETAttachOffsetValueListener_initWithDXMARKETAttachedOrder_(DXMARKETAttachOffsetValueListener *self, DXMARKETAttachedOrder *attachedOrder);

FOUNDATION_EXPORT DXMARKETAttachOffsetValueListener *new_DXMARKETAttachOffsetValueListener_initWithDXMARKETAttachedOrder_(DXMARKETAttachedOrder *attachedOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAttachOffsetValueListener *create_DXMARKETAttachOffsetValueListener_initWithDXMARKETAttachedOrder_(DXMARKETAttachedOrder *attachedOrder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAttachOffsetValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseAttachOffsetValueListener DXMARKETAttachOffsetValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachOffsetValueListener")
