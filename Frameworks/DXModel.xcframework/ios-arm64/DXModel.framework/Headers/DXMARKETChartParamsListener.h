
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsListener
#ifdef INCLUDE_DXMARKETChartParamsListener_Template
#define INCLUDE_DXMARKETChartParamsListener 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartParamsListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsListener || defined(INCLUDE_DXMARKETChartParamsListener))
#define DXMARKETChartParamsListener_

@class DXMARKETChartParams_PortfolioViewMode;

@protocol DXMARKETChartParamsListener < JavaObject >

- (void)fullscreenChanged;

- (void)profileChanged;

- (void)indicatorsChanged;

- (void)candleTypeChanged;

- (void)showIndicatorsChanged;

- (void)portfolioViewModeChangedWithDXMARKETChartParams_PortfolioViewMode:(DXMARKETChartParams_PortfolioViewMode * __nonnull)mode;

- (void)zoomToFitChanged;

- (void)chartConfigurationChanged;

- (void)dataStateChanged;

- (void)compactModeChanged;

- (void)showTipsChanged;

- (void)beforeRequestChange;

- (void)showLegendChanged;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartParamsListener)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartParamsListener)

#define ComDevexpertsDxmarketClientModelChartDataChartParamsListener DXMARKETChartParamsListener

#endif

#if !defined (DXMARKETChartParamsListener_Template_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsListener || defined(INCLUDE_DXMARKETChartParamsListener_Template))
#define DXMARKETChartParamsListener_Template_

@class DXMARKETChartParams_PortfolioViewMode;

@interface DXMARKETChartParamsListener_Template : NSObject < DXMARKETChartParamsListener >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)beforeRequestChange;

- (void)candleTypeChanged;

- (void)chartConfigurationChanged;

- (void)compactModeChanged;

- (void)dataStateChanged;

- (void)fullscreenChanged;

- (void)indicatorsChanged;

- (void)portfolioViewModeChangedWithDXMARKETChartParams_PortfolioViewMode:(DXMARKETChartParams_PortfolioViewMode * __nonnull)mode;

- (void)profileChanged;

- (void)showIndicatorsChanged;

- (void)showLegendChanged;

- (void)showTipsChanged;

- (void)zoomToFitChanged;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartParamsListener_Template)

FOUNDATION_EXPORT void DXMARKETChartParamsListener_Template_init(DXMARKETChartParamsListener_Template *self);

FOUNDATION_EXPORT DXMARKETChartParamsListener_Template *new_DXMARKETChartParamsListener_Template_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETChartParamsListener_Template *create_DXMARKETChartParamsListener_Template_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartParamsListener_Template)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataChartParamsListener")
