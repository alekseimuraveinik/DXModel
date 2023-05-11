
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplLiveObjectMultiChartSource")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplLiveObjectMultiChartSource
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplLiveObjectMultiChartSource 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplLiveObjectMultiChartSource 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplLiveObjectMultiChartSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETLiveObjectMultiChartSource_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplLiveObjectMultiChartSource || defined(INCLUDE_DXMARKETLiveObjectMultiChartSource))
#define DXMARKETLiveObjectMultiChartSource_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartChartDataSource 1
#define INCLUDE_DXMARKETChartDataSource 1
#include "DXMARKETChartDataSource.h"

@class DXChartAggregationPeriodEnum;
@class DXInstrumentTO;
@class DXQuoteDirection;
@class DXSymbolDetailsResultTO;
@protocol DXMARKETChartStudyData;

@interface DXMARKETLiveObjectMultiChartSource : NSObject < DXMARKETChartDataSource >

#pragma mark Public

- (instancetype __nonnull)init;

- (DXChartAggregationPeriodEnum *)getAggregationPeriod;

- (jdouble)getCloseWithInt:(jint)index;

- (NSString *)getError;

- (jdouble)getHighWithInt:(jint)index;

- (DXInstrumentTO *)getInstrument;

- (jint)getInstrumentPrecision;

- (jdouble)getLast;

- (DXQuoteDirection *)getLastDirection;

- (jdouble)getLowWithInt:(jint)index;

- (jdouble)getOpenWithInt:(jint)index;

- (jint)getStudyCount;

- (id<DXMARKETChartStudyData>)getStudyWithIndexWithInt:(jint)index;

- (jlong)getTimestampWithInt:(jint)index;

- (jdouble)getVolumeWithInt:(jint)index;

- (void)setSymbolDetailsResultWithDXSymbolDetailsResultTO:(DXSymbolDetailsResultTO *)result;

- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETLiveObjectMultiChartSource)

FOUNDATION_EXPORT void DXMARKETLiveObjectMultiChartSource_init(DXMARKETLiveObjectMultiChartSource *self);

FOUNDATION_EXPORT DXMARKETLiveObjectMultiChartSource *new_DXMARKETLiveObjectMultiChartSource_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETLiveObjectMultiChartSource *create_DXMARKETLiveObjectMultiChartSource_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETLiveObjectMultiChartSource)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplLiveObjectMultiChartSource DXMARKETLiveObjectMultiChartSource;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplLiveObjectMultiChartSource")
