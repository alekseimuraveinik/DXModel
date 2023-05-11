
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartTimeAxis")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartTimeAxis
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartTimeAxis 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartTimeAxis 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartTimeAxis

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETTimeAxis_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartTimeAxis || defined(INCLUDE_DXMARKETTimeAxis))
#define DXMARKETTimeAxis_

@class IOSLongArray;
@class IOSObjectArray;
@class JavaUtilCalendar;
@protocol DXMARKETChartGraphics;
@protocol JavaUtilList;

@interface DXMARKETTimeAxis : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (DXMARKETTimeAxis *)buildAxisWithLongArray:(IOSLongArray *)timestamps;

- (id<JavaUtilList>)buildVisibleLabelsWithInt:(jint)firstIndex
                                      withInt:(jint)lastIndex
                                      withInt:(jint)aggregationPeriod
                                      withInt:(jint)candleWidth
                                      withInt:(jint)labelWidth;

+ (void)drawAxisWithJavaUtilList:(id<JavaUtilList>)labels
       withDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer
                         withInt:(jint)labelsColor;

+ (void)drawDotsWithJavaUtilList:(id<JavaUtilList>)labels
       withDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer
                         withInt:(jint)dotsColor;

+ (void)drawVerticalsWithJavaUtilList:(id<JavaUtilList>)labels
            withDXMARKETChartGraphics:(id<DXMARKETChartGraphics>)drawer
                              withInt:(jint)color
                              withInt:(jint)from
                              withInt:(jint)to;

+ (void)setDaysLabelsWithNSStringArray:(IOSObjectArray *)DAYS_OF_WEEK;

+ (void)setMonthsLabelsWithNSStringArray:(IOSObjectArray *)MONTHS;

#pragma mark Package-Private

+ (NSString *)addZerosWithNSString:(NSString *)str;

+ (NSString *)calculateHourStringWithJavaUtilCalendar:(JavaUtilCalendar *)date;

+ (jint)getHourWithJavaUtilCalendar:(JavaUtilCalendar *)date;

@end

J2OBJC_STATIC_INIT(DXMARKETTimeAxis)

FOUNDATION_EXPORT void DXMARKETTimeAxis_init(DXMARKETTimeAxis *self);

FOUNDATION_EXPORT DXMARKETTimeAxis *new_DXMARKETTimeAxis_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETTimeAxis *create_DXMARKETTimeAxis_init(void);

FOUNDATION_EXPORT NSString *DXMARKETTimeAxis_calculateHourStringWithJavaUtilCalendar_(JavaUtilCalendar *date);

FOUNDATION_EXPORT jint DXMARKETTimeAxis_getHourWithJavaUtilCalendar_(JavaUtilCalendar *date);

FOUNDATION_EXPORT NSString *DXMARKETTimeAxis_addZerosWithNSString_(NSString *str);

FOUNDATION_EXPORT DXMARKETTimeAxis *DXMARKETTimeAxis_buildAxisWithLongArray_(IOSLongArray *timestamps);

FOUNDATION_EXPORT void DXMARKETTimeAxis_drawVerticalsWithJavaUtilList_withDXMARKETChartGraphics_withInt_withInt_withInt_(id<JavaUtilList> labels, id<DXMARKETChartGraphics> drawer, jint color, jint from, jint to);

FOUNDATION_EXPORT void DXMARKETTimeAxis_drawDotsWithJavaUtilList_withDXMARKETChartGraphics_withInt_(id<JavaUtilList> labels, id<DXMARKETChartGraphics> drawer, jint dotsColor);

FOUNDATION_EXPORT void DXMARKETTimeAxis_drawAxisWithJavaUtilList_withDXMARKETChartGraphics_withInt_(id<JavaUtilList> labels, id<DXMARKETChartGraphics> drawer, jint labelsColor);

FOUNDATION_EXPORT void DXMARKETTimeAxis_setDaysLabelsWithNSStringArray_(IOSObjectArray *DAYS_OF_WEEK);

FOUNDATION_EXPORT void DXMARKETTimeAxis_setMonthsLabelsWithNSStringArray_(IOSObjectArray *MONTHS);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETTimeAxis)

@compatibility_alias ComDevexpertsDxmarketClientModelChartTimeAxis DXMARKETTimeAxis;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartTimeAxis")
