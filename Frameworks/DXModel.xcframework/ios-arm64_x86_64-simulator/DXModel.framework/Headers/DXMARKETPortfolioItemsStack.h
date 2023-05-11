
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemsStack")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemsStack
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemsStack 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemsStack 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemsStack

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPortfolioItemsStack_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemsStack || defined(INCLUDE_DXMARKETPortfolioItemsStack))
#define DXMARKETPortfolioItemsStack_

@class DXMARKETPreparedPortfolioItem;
@class JavaUtilArrayList;

@interface DXMARKETPortfolioItemsStack : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETPreparedPortfolioItem:(DXMARKETPreparedPortfolioItem *)item;

- (void)addWithDXMARKETPreparedPortfolioItem:(DXMARKETPreparedPortfolioItem *)item;

- (jint)getFrom;

- (JavaUtilArrayList *)getItems;

- (jint)getTo;

- (jboolean)isExpanded;

- (void)setExpandedWithBoolean:(jboolean)expanded;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPortfolioItemsStack)

FOUNDATION_EXPORT void DXMARKETPortfolioItemsStack_initWithDXMARKETPreparedPortfolioItem_(DXMARKETPortfolioItemsStack *self, DXMARKETPreparedPortfolioItem *item);

FOUNDATION_EXPORT DXMARKETPortfolioItemsStack *new_DXMARKETPortfolioItemsStack_initWithDXMARKETPreparedPortfolioItem_(DXMARKETPreparedPortfolioItem *item) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPortfolioItemsStack *create_DXMARKETPortfolioItemsStack_initWithDXMARKETPreparedPortfolioItem_(DXMARKETPreparedPortfolioItem *item);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPortfolioItemsStack)

@compatibility_alias ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemsStack DXMARKETPortfolioItemsStack;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemsStack")
