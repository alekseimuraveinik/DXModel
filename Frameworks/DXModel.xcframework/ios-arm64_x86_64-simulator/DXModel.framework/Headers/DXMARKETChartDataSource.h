
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartDataSource")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartChartDataSource
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartDataSource 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartDataSource 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartChartDataSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartDataSource_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartDataSource || defined(INCLUDE_DXMARKETChartDataSource))
#define DXMARKETChartDataSource_

@class DXChartAggregationPeriodEnum;
@class DXInstrumentTO;
@class DXQuoteDirection;
@protocol DXMARKETChartStudyData;

@protocol DXMARKETChartDataSource < JavaObject >

- (jint)size;

- (jdouble)getOpenWithInt:(jint)index;

- (jdouble)getHighWithInt:(jint)index;

- (jdouble)getLowWithInt:(jint)index;

- (jdouble)getCloseWithInt:(jint)index;

- (jdouble)getVolumeWithInt:(jint)index;

- (jlong)getTimestampWithInt:(jint)index;

- (jint)getStudyCount;

- (id<DXMARKETChartStudyData>)getStudyWithIndexWithInt:(jint)index;

- (DXChartAggregationPeriodEnum *)getAggregationPeriod;

- (DXInstrumentTO *)getInstrument;

- (jdouble)getLast;

- (DXQuoteDirection *)getLastDirection;

- (NSString *)getError;

- (jint)getInstrumentPrecision;

@end

@interface DXMARKETChartDataSource : NSObject
@property (readonly, class) jint DIRECTION_UP NS_SWIFT_NAME(DIRECTION_UP);
@property (readonly, class) jint DIRECTION_NONE NS_SWIFT_NAME(DIRECTION_NONE);
@property (readonly, class) jint DIRECTION_DOWN NS_SWIFT_NAME(DIRECTION_DOWN);

+ (jint)DIRECTION_UP;

+ (jint)DIRECTION_NONE;

+ (jint)DIRECTION_DOWN;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartDataSource)

inline jint DXMARKETChartDataSource_get_DIRECTION_UP(void);
#define DXMARKETChartDataSource_DIRECTION_UP 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartDataSource, DIRECTION_UP, jint)

inline jint DXMARKETChartDataSource_get_DIRECTION_NONE(void);
#define DXMARKETChartDataSource_DIRECTION_NONE 0
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartDataSource, DIRECTION_NONE, jint)

inline jint DXMARKETChartDataSource_get_DIRECTION_DOWN(void);
#define DXMARKETChartDataSource_DIRECTION_DOWN -1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETChartDataSource, DIRECTION_DOWN, jint)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartDataSource)

#define ComDevexpertsDxmarketClientModelChartChartDataSource DXMARKETChartDataSource

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartChartDataSource")
