
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartViewModel")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartViewModel
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartViewModel 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartViewModel 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartViewModel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartViewModel_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartViewModel || defined(INCLUDE_DXMARKETChartViewModel))
#define DXMARKETChartViewModel_

@class DXMARKETPreparedPortfolioItem;
@class DXPositionTO;
@protocol DXMARKETChartMetrics;

@protocol DXMARKETChartViewModel < JavaObject >

- (void)lastVisibleCandleUpdatedWithInt:(jint)lastVisibleCandle;

- (jint)checkCandleWidthWithInt:(jint)suggestedCandleWidth
       withDXMARKETChartMetrics:(id<DXMARKETChartMetrics>)metrics
                        withInt:(jint)gridWidth
                    withBoolean:(jboolean)byUser;

- (void)startModifyOrderWithDXMARKETPreparedPortfolioItem:(DXMARKETPreparedPortfolioItem *)order
                                               withDouble:(jdouble)price;

- (void)updateOrderPriceWithDXMARKETPreparedPortfolioItem:(DXMARKETPreparedPortfolioItem *)order
                                               withDouble:(jdouble)price;

- (void)confirmModifyOrderWithDXMARKETPreparedPortfolioItem:(DXMARKETPreparedPortfolioItem *)order
                                                 withDouble:(jdouble)price;

- (void)modifyPositionWithDXPositionTO:(DXPositionTO *)position;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartViewModel)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartViewModel)

#define ComDevexpertsDxmarketClientModelChartDataChartViewModel DXMARKETChartViewModel

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartViewModel")
