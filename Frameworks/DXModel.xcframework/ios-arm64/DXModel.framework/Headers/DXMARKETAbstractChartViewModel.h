
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataAbstractChartViewModel")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataAbstractChartViewModel
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataAbstractChartViewModel 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataAbstractChartViewModel 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataAbstractChartViewModel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAbstractChartViewModel_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataAbstractChartViewModel || defined(INCLUDE_DXMARKETAbstractChartViewModel))
#define DXMARKETAbstractChartViewModel_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartViewModel 1
#define INCLUDE_DXMARKETChartViewModel 1
#include "DXMARKETChartViewModel.h"

@class DXMARKETChartParams;
@protocol DXMARKETChartDataSource;
@protocol DXMARKETChartMetrics;

@interface DXMARKETAbstractChartViewModel : NSObject < DXMARKETChartViewModel >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETChartParams:(DXMARKETChartParams *)params
                          withDXMARKETChartDataSource:(id<DXMARKETChartDataSource>)chartDataSource;

- (jint)checkCandleWidthWithInt:(jint)suggestedCandleWidth
       withDXMARKETChartMetrics:(id<DXMARKETChartMetrics>)metrics
                        withInt:(jint)gridWidth
                    withBoolean:(jboolean)byUser;

- (void)lastVisibleCandleUpdatedWithInt:(jint)lastVisibleCandle;

- (void)onDoubleTap;

#pragma mark Protected

- (id<DXMARKETChartDataSource>)getDataSource;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAbstractChartViewModel)

FOUNDATION_EXPORT void DXMARKETAbstractChartViewModel_initWithDXMARKETChartParams_withDXMARKETChartDataSource_(DXMARKETAbstractChartViewModel *self, DXMARKETChartParams *params, id<DXMARKETChartDataSource> chartDataSource);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAbstractChartViewModel)

@compatibility_alias ComDevexpertsDxmarketClientModelChartDataAbstractChartViewModel DXMARKETAbstractChartViewModel;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataAbstractChartViewModel")
