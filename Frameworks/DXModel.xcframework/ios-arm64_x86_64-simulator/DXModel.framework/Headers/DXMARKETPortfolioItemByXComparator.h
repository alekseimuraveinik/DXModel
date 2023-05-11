
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByXComparator")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByXComparator
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByXComparator 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByXComparator 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByXComparator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPortfolioItemByXComparator_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByXComparator || defined(INCLUDE_DXMARKETPortfolioItemByXComparator))
#define DXMARKETPortfolioItemByXComparator_

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "java/util/Comparator.h"

@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

@interface DXMARKETPortfolioItemByXComparator : NSObject < JavaUtilComparator >

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)compareWithId:(id)o
               withId:(id)o2;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPortfolioItemByXComparator)

FOUNDATION_EXPORT void DXMARKETPortfolioItemByXComparator_init(DXMARKETPortfolioItemByXComparator *self);

FOUNDATION_EXPORT DXMARKETPortfolioItemByXComparator *new_DXMARKETPortfolioItemByXComparator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPortfolioItemByXComparator *create_DXMARKETPortfolioItemByXComparator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPortfolioItemByXComparator)

@compatibility_alias ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByXComparator DXMARKETPortfolioItemByXComparator;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemByXComparator")
