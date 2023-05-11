
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplLiveObjectChartSource")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplLiveObjectChartSource
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplLiveObjectChartSource 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplLiveObjectChartSource 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplLiveObjectChartSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETLiveObjectChartSource_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplLiveObjectChartSource || defined(INCLUDE_DXMARKETLiveObjectChartSource))
#define DXMARKETLiveObjectChartSource_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartChartDataSource 1
#define INCLUDE_DXMARKETChartDataSource 1
#include "DXMARKETChartDataSource.h"

@class DXChartAggregationPeriodEnum;
@class DXInstrumentTO;
@class DXQuoteDirection;
@protocol DXMARKETChartProvider;
@protocol DXMARKETChartStudyData;

@interface DXMARKETLiveObjectChartSource : NSObject < DXMARKETChartDataSource >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETChartProvider:(id<DXMARKETChartProvider>)provider;

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

- (jint)size;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETLiveObjectChartSource)

FOUNDATION_EXPORT void DXMARKETLiveObjectChartSource_initWithDXMARKETChartProvider_(DXMARKETLiveObjectChartSource *self, id<DXMARKETChartProvider> provider);

FOUNDATION_EXPORT DXMARKETLiveObjectChartSource *new_DXMARKETLiveObjectChartSource_initWithDXMARKETChartProvider_(id<DXMARKETChartProvider> provider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETLiveObjectChartSource *create_DXMARKETLiveObjectChartSource_initWithDXMARKETChartProvider_(id<DXMARKETChartProvider> provider);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETLiveObjectChartSource)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplLiveObjectChartSource DXMARKETLiveObjectChartSource;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplLiveObjectChartSource")
