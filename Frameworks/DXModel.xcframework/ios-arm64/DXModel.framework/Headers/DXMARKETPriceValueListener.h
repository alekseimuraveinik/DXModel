
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePriceValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBasePriceValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePriceValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePriceValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBasePriceValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPriceValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePriceValueListener || defined(INCLUDE_DXMARKETPriceValueListener))
#define DXMARKETPriceValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETPriceOrder;
@class DXMARKETValidationInfo;

@interface DXMARKETPriceValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETPriceOrder:(DXMARKETPriceOrder *)priceOrder;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPriceValueListener)

FOUNDATION_EXPORT void DXMARKETPriceValueListener_initWithDXMARKETPriceOrder_(DXMARKETPriceValueListener *self, DXMARKETPriceOrder *priceOrder);

FOUNDATION_EXPORT DXMARKETPriceValueListener *new_DXMARKETPriceValueListener_initWithDXMARKETPriceOrder_(DXMARKETPriceOrder *priceOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPriceValueListener *create_DXMARKETPriceValueListener_initWithDXMARKETPriceOrder_(DXMARKETPriceOrder *priceOrder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPriceValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBasePriceValueListener DXMARKETPriceValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePriceValueListener")
