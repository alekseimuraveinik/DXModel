
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMockStudyChartDataSource")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplMockStudyChartDataSource
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMockStudyChartDataSource 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMockStudyChartDataSource 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplMockStudyChartDataSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETMockStudyChartDataSource_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMockStudyChartDataSource || defined(INCLUDE_DXMARKETMockStudyChartDataSource))
#define DXMARKETMockStudyChartDataSource_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartChartDataSource 1
#define INCLUDE_DXMARKETChartDataSource 1
#include "DXMARKETChartDataSource.h"

@class DXChartAggregationPeriodEnum;
@class DXInstrumentTO;
@class DXQuoteDirection;
@class DXStudyDescriptionTO;
@class DXStudyPlotTO;
@protocol DXMARKETChartStudyData;

@interface DXMARKETMockStudyChartDataSource : NSObject < DXMARKETChartDataSource >

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

- (DXStudyDescriptionTO *)getStudyDescription;

- (id<DXMARKETChartStudyData>)getStudyWithIndexWithInt:(jint)index;

- (jlong)getTimestampWithInt:(jint)index;

- (jdouble)getVolumeWithInt:(jint)index;

- (void)setStudyDescriptionWithDXStudyDescriptionTO:(DXStudyDescriptionTO *)studyDescription;

- (jint)size;

- (void)updateStudyPlotWithDXStudyPlotTO:(DXStudyPlotTO *)plotTO
                                 withInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETMockStudyChartDataSource)

FOUNDATION_EXPORT void DXMARKETMockStudyChartDataSource_init(DXMARKETMockStudyChartDataSource *self);

FOUNDATION_EXPORT DXMARKETMockStudyChartDataSource *new_DXMARKETMockStudyChartDataSource_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETMockStudyChartDataSource *create_DXMARKETMockStudyChartDataSource_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETMockStudyChartDataSource)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplMockStudyChartDataSource DXMARKETMockStudyChartDataSource;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplMockStudyChartDataSource")
