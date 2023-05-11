
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartStudyDataImpl")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplChartStudyDataImpl
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartStudyDataImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartStudyDataImpl 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplChartStudyDataImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETChartStudyDataImpl_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartStudyDataImpl || defined(INCLUDE_DXMARKETChartStudyDataImpl))
#define DXMARKETChartStudyDataImpl_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartChartStudyData 1
#define INCLUDE_DXMARKETChartStudyData 1
#include "DXMARKETChartStudyData.h"

@class DXStudyTO;
@class PSListTO;
@protocol DXMARKETIStudyCloudTO;
@protocol DXMARKETIStudyParameterTO;
@protocol DXMARKETIStudyPlotTO;

@interface DXMARKETChartStudyDataImpl : NSObject < DXMARKETChartStudyData >

#pragma mark Public

- (instancetype __nonnull)initWithDXStudyTO:(DXStudyTO *)study
                               withPSListTO:(PSListTO *)studiesValues;

- (id<DXMARKETIStudyCloudTO>)getCloudWithInt:(jint)i;

- (jint)getCloudCount;

- (NSString *)getName;

- (id<DXMARKETIStudyParameterTO>)getParameterWithInt:(jint)i;

- (jint)getParameterCount;

- (id<DXMARKETIStudyPlotTO>)getPlotWithInt:(jint)i;

- (jint)getPlotCount;

- (jdouble)getPlotValueWithInt:(jint)plot
                       withInt:(jint)i;

- (jint)getPlotWidth;

- (jint)getStudyScale;

- (jboolean)isEmpty;

- (jboolean)isOverlaying;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETChartStudyDataImpl)

FOUNDATION_EXPORT void DXMARKETChartStudyDataImpl_initWithDXStudyTO_withPSListTO_(DXMARKETChartStudyDataImpl *self, DXStudyTO *study, PSListTO *studiesValues);

FOUNDATION_EXPORT DXMARKETChartStudyDataImpl *new_DXMARKETChartStudyDataImpl_initWithDXStudyTO_withPSListTO_(DXStudyTO *study, PSListTO *studiesValues) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETChartStudyDataImpl *create_DXMARKETChartStudyDataImpl_initWithDXStudyTO_withPSListTO_(DXStudyTO *study, PSListTO *studiesValues);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETChartStudyDataImpl)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplChartStudyDataImpl DXMARKETChartStudyDataImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplChartStudyDataImpl")
