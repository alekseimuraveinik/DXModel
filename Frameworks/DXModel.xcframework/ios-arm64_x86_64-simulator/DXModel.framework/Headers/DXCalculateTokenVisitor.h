
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationCalculateTokenVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationCalculateTokenVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationCalculateTokenVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationCalculateTokenVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationCalculateTokenVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCalculateTokenVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationCalculateTokenVisitor || defined(INCLUDE_DXCalculateTokenVisitor))
#define DXCalculateTokenVisitor_

#define RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationTokenVisitor 1
#define INCLUDE_DXTokenVisitor 1
#include "DXTokenVisitor.h"

@class IOSDoubleArray;

@interface DXCalculateTokenVisitor : NSObject < DXTokenVisitor >

#pragma mark Public

- (instancetype __nonnull)initWithDoubleArray:(IOSDoubleArray *)params;

- (id)getEmptyValue;

- (id)getResult;

- (void)visitOperationWithInt:(jint)opNum;

- (void)visitValueWithLong:(jlong)value;

- (void)visitVariableWithInt:(jint)varNum;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXCalculateTokenVisitor)

FOUNDATION_EXPORT void DXCalculateTokenVisitor_initWithDoubleArray_(DXCalculateTokenVisitor *self, IOSDoubleArray *params);

FOUNDATION_EXPORT DXCalculateTokenVisitor *new_DXCalculateTokenVisitor_initWithDoubleArray_(IOSDoubleArray *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCalculateTokenVisitor *create_DXCalculateTokenVisitor_initWithDoubleArray_(IOSDoubleArray *params);

J2OBJC_TYPE_LITERAL_HEADER(DXCalculateTokenVisitor)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderValidationCalculateTokenVisitor DXCalculateTokenVisitor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationCalculateTokenVisitor")
