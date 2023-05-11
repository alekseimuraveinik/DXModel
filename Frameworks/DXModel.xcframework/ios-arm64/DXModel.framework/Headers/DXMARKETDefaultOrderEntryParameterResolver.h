
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseDefaultOrderEntryParameterResolver")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseDefaultOrderEntryParameterResolver
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseDefaultOrderEntryParameterResolver 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseDefaultOrderEntryParameterResolver 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseDefaultOrderEntryParameterResolver

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETDefaultOrderEntryParameterResolver_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseDefaultOrderEntryParameterResolver || defined(INCLUDE_DXMARKETDefaultOrderEntryParameterResolver))
#define DXMARKETDefaultOrderEntryParameterResolver_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueParamsResolver 1
#define INCLUDE_DXMARKETOrderEntryValueParamsResolver 1
#include "DXMARKETOrderEntryValueParamsResolver.h"

@class DXMARKETAbstractOrder;
@class DXOrderValidationDetailsTO;
@class IOSLongArray;
@protocol DXMARKETErrorBuilder;

@interface DXMARKETDefaultOrderEntryParameterResolver : NSObject < DXMARKETOrderEntryValueParamsResolver > {
 @public
  DXMARKETAbstractOrder *order_;
}

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETAbstractOrder:(DXMARKETAbstractOrder *)order;

- (IOSLongArray *)buildParamsWithLong:(jlong)value;

- (id<DXMARKETErrorBuilder>)resolveErrorBuilder;

- (void)updateWithWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

#pragma mark Protected

- (jlong)resolveAttachValidationDistance;

- (jlong)resolveAttachValidationPrice;

- (jlong)resolveFee;

- (jlong)resolveOffset;

- (jlong)resolveParentPrice;

- (jlong)resolvePercentOfBalance;

- (jlong)resolvePl;

- (jlong)resolvePrice;

- (jlong)resolveQuantity;

- (jlong)resolveReceive;

- (jlong)resolveSide;

- (jlong)resolveSpend;

- (jlong)resolveTrailingOffset;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETDefaultOrderEntryParameterResolver)

J2OBJC_FIELD_SETTER(DXMARKETDefaultOrderEntryParameterResolver, order_, DXMARKETAbstractOrder *)

FOUNDATION_EXPORT void DXMARKETDefaultOrderEntryParameterResolver_initWithDXMARKETAbstractOrder_(DXMARKETDefaultOrderEntryParameterResolver *self, DXMARKETAbstractOrder *order);

FOUNDATION_EXPORT DXMARKETDefaultOrderEntryParameterResolver *new_DXMARKETDefaultOrderEntryParameterResolver_initWithDXMARKETAbstractOrder_(DXMARKETAbstractOrder *order) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETDefaultOrderEntryParameterResolver *create_DXMARKETDefaultOrderEntryParameterResolver_initWithDXMARKETAbstractOrder_(DXMARKETAbstractOrder *order);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETDefaultOrderEntryParameterResolver)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseDefaultOrderEntryParameterResolver DXMARKETDefaultOrderEntryParameterResolver;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseDefaultOrderEntryParameterResolver")
