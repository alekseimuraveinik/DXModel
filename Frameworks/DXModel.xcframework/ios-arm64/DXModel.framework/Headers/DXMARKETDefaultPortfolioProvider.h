
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETDefaultPortfolioProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioProvider || defined(INCLUDE_DXMARKETDefaultPortfolioProvider))
#define DXMARKETDefaultPortfolioProvider_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioProvider 1
#define INCLUDE_DXMARKETPortfolioProvider 1
#include "DXMARKETPortfolioProvider.h"

@class DXMARKETDrawChartContext;
@class DXMARKETHorizontalGridContext;
@class DXMARKETPortfolioItem;
@class DXMARKETPortfolioItemsStack;
@class DXMARKETPreparedPortfolioItem;
@class JavaUtilArrayList;
@protocol DXMARKETChartDataSource;
@protocol DXMARKETPortfolioDataSource;
@protocol JavaUtilComparator;

@interface DXMARKETDefaultPortfolioProvider : NSObject < DXMARKETPortfolioProvider >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETPortfolioDataSource:(id<DXMARKETPortfolioDataSource>)dataSource;

- (jboolean)isStateful;

- (JavaUtilArrayList *)prepareStacksWithDXMARKETDrawChartContext:(DXMARKETDrawChartContext *)chartContext
                               withDXMARKETHorizontalGridContext:(DXMARKETHorizontalGridContext *)context
                                                         withInt:(jint)itemSize;

#pragma mark Protected

- (jboolean)checkIfNewStackWithDXMARKETPortfolioItemsStack:(DXMARKETPortfolioItemsStack *)prevStack
                         withDXMARKETPreparedPortfolioItem:(DXMARKETPreparedPortfolioItem *)item
                                                   withInt:(jint)itemSize;

- (id<JavaUtilComparator>)newComparator OBJC_METHOD_FAMILY_NONE;

- (DXMARKETPreparedPortfolioItem *)newPreparedItemWithDXMARKETPortfolioItem:(DXMARKETPortfolioItem *)item
                                                                    withInt:(jint)x
                                                                    withInt:(jint)y
                                                                    withInt:(jint)xIndex OBJC_METHOD_FAMILY_NONE;

- (jdouble)resolvePriceWithDXMARKETChartDataSource:(id<DXMARKETChartDataSource>)source
                                           withInt:(jint)timestampIndex
                         withDXMARKETPortfolioItem:(DXMARKETPortfolioItem *)item;

- (jboolean)skipIfWrongX;

- (jboolean)skipIfWrongY;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETDefaultPortfolioProvider)

FOUNDATION_EXPORT void DXMARKETDefaultPortfolioProvider_initWithDXMARKETPortfolioDataSource_(DXMARKETDefaultPortfolioProvider *self, id<DXMARKETPortfolioDataSource> dataSource);

FOUNDATION_EXPORT DXMARKETDefaultPortfolioProvider *new_DXMARKETDefaultPortfolioProvider_initWithDXMARKETPortfolioDataSource_(id<DXMARKETPortfolioDataSource> dataSource) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETDefaultPortfolioProvider *create_DXMARKETDefaultPortfolioProvider_initWithDXMARKETPortfolioDataSource_(id<DXMARKETPortfolioDataSource> dataSource);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETDefaultPortfolioProvider)

@compatibility_alias ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioProvider DXMARKETDefaultPortfolioProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioProvider")
