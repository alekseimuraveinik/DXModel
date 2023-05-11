
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioDescriptionBuilder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioDescriptionBuilder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioDescriptionBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioDescriptionBuilder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioDescriptionBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETDefaultPortfolioDescriptionBuilder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioDescriptionBuilder || defined(INCLUDE_DXMARKETDefaultPortfolioDescriptionBuilder))
#define DXMARKETDefaultPortfolioDescriptionBuilder_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemDescriptionBuilder 1
#define INCLUDE_DXMARKETPortfolioItemDescriptionBuilder 1
#include "DXMARKETPortfolioItemDescriptionBuilder.h"

@class DXMARKETPortfolioItem;
@protocol JavaUtilList;

@interface DXMARKETDefaultPortfolioDescriptionBuilder : NSObject < DXMARKETPortfolioItemDescriptionBuilder >

#pragma mark Public

- (instancetype __nonnull)init;

- (NSString *)toStackStringWithJavaUtilList:(id<JavaUtilList>)items;

- (NSString *)toStringWithDXMARKETPortfolioItem:(DXMARKETPortfolioItem *)item;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETDefaultPortfolioDescriptionBuilder)

FOUNDATION_EXPORT void DXMARKETDefaultPortfolioDescriptionBuilder_init(DXMARKETDefaultPortfolioDescriptionBuilder *self);

FOUNDATION_EXPORT DXMARKETDefaultPortfolioDescriptionBuilder *new_DXMARKETDefaultPortfolioDescriptionBuilder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETDefaultPortfolioDescriptionBuilder *create_DXMARKETDefaultPortfolioDescriptionBuilder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETDefaultPortfolioDescriptionBuilder)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioDescriptionBuilder DXMARKETDefaultPortfolioDescriptionBuilder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioDescriptionBuilder")
