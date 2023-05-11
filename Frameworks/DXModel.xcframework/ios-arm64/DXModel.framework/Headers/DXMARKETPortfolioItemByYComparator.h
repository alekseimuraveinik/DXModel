
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByYComparator")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByYComparator
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByYComparator 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByYComparator 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByYComparator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPortfolioItemByYComparator_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByYComparator || defined(INCLUDE_DXMARKETPortfolioItemByYComparator))
#define DXMARKETPortfolioItemByYComparator_

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "java/util/Comparator.h"

@class DXMARKETPreparedPortfolioItem;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

@interface DXMARKETPortfolioItemByYComparator : NSObject < JavaUtilComparator >

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)compareWithId:(DXMARKETPreparedPortfolioItem *)pi
               withId:(DXMARKETPreparedPortfolioItem *)pi2;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPortfolioItemByYComparator)

FOUNDATION_EXPORT void DXMARKETPortfolioItemByYComparator_init(DXMARKETPortfolioItemByYComparator *self);

FOUNDATION_EXPORT DXMARKETPortfolioItemByYComparator *new_DXMARKETPortfolioItemByYComparator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPortfolioItemByYComparator *create_DXMARKETPortfolioItemByYComparator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPortfolioItemByYComparator)

@compatibility_alias ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByYComparator DXMARKETPortfolioItemByYComparator;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByYComparator")
