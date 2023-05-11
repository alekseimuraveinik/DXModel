
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataEnabledStudyPredicate")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataEnabledStudyPredicate
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataEnabledStudyPredicate 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataEnabledStudyPredicate 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataEnabledStudyPredicate

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETEnabledStudyPredicate_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataEnabledStudyPredicate || defined(INCLUDE_DXMARKETEnabledStudyPredicate))
#define DXMARKETEnabledStudyPredicate_

#define RESTRICT_ComDevexpertsDxmarketClientUtilPredicate 1
#define INCLUDE_DXMARKETPredicate 1
#include "DXMARKETPredicate.h"

@class DXMARKETStudy;

@interface DXMARKETEnabledStudyPredicate : NSObject < DXMARKETPredicate >

#pragma mark Public

- (instancetype __nonnull)init;

- (jboolean)applyWithId:(DXMARKETStudy *)object;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETEnabledStudyPredicate)

FOUNDATION_EXPORT void DXMARKETEnabledStudyPredicate_init(DXMARKETEnabledStudyPredicate *self);

FOUNDATION_EXPORT DXMARKETEnabledStudyPredicate *new_DXMARKETEnabledStudyPredicate_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETEnabledStudyPredicate *create_DXMARKETEnabledStudyPredicate_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETEnabledStudyPredicate)

@compatibility_alias ComDevexpertsDxmarketClientModelChartDataEnabledStudyPredicate DXMARKETEnabledStudyPredicate;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataEnabledStudyPredicate")
