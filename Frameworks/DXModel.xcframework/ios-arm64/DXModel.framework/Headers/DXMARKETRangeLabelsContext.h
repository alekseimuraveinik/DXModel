
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartRangeLabelsContext")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartRangeLabelsContext
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartRangeLabelsContext 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartRangeLabelsContext 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartRangeLabelsContext

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETRangeLabelsContext_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartRangeLabelsContext || defined(INCLUDE_DXMARKETRangeLabelsContext))
#define DXMARKETRangeLabelsContext_

@interface DXMARKETRangeLabelsContext : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithDouble:(jdouble)lowestLabel
                              withDouble:(jdouble)labelStep;

- (jdouble)getLabelStep;

- (jdouble)getLowestLabel;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETRangeLabelsContext)

FOUNDATION_EXPORT void DXMARKETRangeLabelsContext_initWithDouble_withDouble_(DXMARKETRangeLabelsContext *self, jdouble lowestLabel, jdouble labelStep);

FOUNDATION_EXPORT DXMARKETRangeLabelsContext *new_DXMARKETRangeLabelsContext_initWithDouble_withDouble_(jdouble lowestLabel, jdouble labelStep) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETRangeLabelsContext *create_DXMARKETRangeLabelsContext_initWithDouble_withDouble_(jdouble lowestLabel, jdouble labelStep);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETRangeLabelsContext)

@compatibility_alias ComDevexpertsDxmarketClientModelChartRangeLabelsContext DXMARKETRangeLabelsContext;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartRangeLabelsContext")
