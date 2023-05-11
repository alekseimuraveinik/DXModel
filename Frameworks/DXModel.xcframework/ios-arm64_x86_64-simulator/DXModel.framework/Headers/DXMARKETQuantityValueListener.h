
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseQuantityValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseQuantityValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseQuantityValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseQuantityValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseQuantityValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETQuantityValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseQuantityValueListener || defined(INCLUDE_DXMARKETQuantityValueListener))
#define DXMARKETQuantityValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETAbstractOrder;
@class DXMARKETValidationInfo;

@interface DXMARKETQuantityValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETAbstractOrder:(DXMARKETAbstractOrder *)abstractOrder;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETQuantityValueListener)

FOUNDATION_EXPORT void DXMARKETQuantityValueListener_initWithDXMARKETAbstractOrder_(DXMARKETQuantityValueListener *self, DXMARKETAbstractOrder *abstractOrder);

FOUNDATION_EXPORT DXMARKETQuantityValueListener *new_DXMARKETQuantityValueListener_initWithDXMARKETAbstractOrder_(DXMARKETAbstractOrder *abstractOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETQuantityValueListener *create_DXMARKETQuantityValueListener_initWithDXMARKETAbstractOrder_(DXMARKETAbstractOrder *abstractOrder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETQuantityValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseQuantityValueListener DXMARKETQuantityValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseQuantityValueListener")
