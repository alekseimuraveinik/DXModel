
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataIndicatorsHolder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataIndicatorsHolder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataIndicatorsHolder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataIndicatorsHolder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataIndicatorsHolder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETIndicatorsHolder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataIndicatorsHolder || defined(INCLUDE_DXMARKETIndicatorsHolder))
#define DXMARKETIndicatorsHolder_

@class DXMARKETStudy;
@protocol DXMARKETChartParamsListener;
@protocol DXMARKETChartParamsSerializer;
@protocol DXMARKETIndicatorHolderUpdateListener;
@protocol JavaUtilList;

@interface DXMARKETIndicatorsHolder : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETIndicatorHolderUpdateListener:(id<DXMARKETIndicatorHolderUpdateListener>)updateListener
                                        withDXMARKETChartParamsListener:(id<DXMARKETChartParamsListener>)listener;

- (void)addWithDXMARKETStudy:(DXMARKETStudy *)indicator;

- (void)commitWithDXMARKETStudy:(DXMARKETStudy *)indicator;

- (DXMARKETStudy *)editWithInt:(jint)index;

- (jint)getEditIndex;

- (id<JavaUtilList>)getIndicators;

- (jint)getMaxIndicatorsCount;

- (jboolean)isEnabledWithInt:(jint)index;

- (jboolean)isInEditMode;

- (jboolean)isMoreIndicatorsAllowed;

- (void)removeWithInt:(jint)index;

- (void)removeAtEditIndex;

- (void)setMaxIndicatorsCountWithInt:(jint)maxIndicatorsCount;

#pragma mark Package-Private

- (void)load__WithDXMARKETChartParamsSerializer:(id<DXMARKETChartParamsSerializer>)serializer;

- (void)saveWithDXMARKETChartParamsSerializer:(id<DXMARKETChartParamsSerializer>)serializer;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETIndicatorsHolder)

FOUNDATION_EXPORT void DXMARKETIndicatorsHolder_initWithDXMARKETIndicatorHolderUpdateListener_withDXMARKETChartParamsListener_(DXMARKETIndicatorsHolder *self, id<DXMARKETIndicatorHolderUpdateListener> updateListener, id<DXMARKETChartParamsListener> listener);

FOUNDATION_EXPORT DXMARKETIndicatorsHolder *new_DXMARKETIndicatorsHolder_initWithDXMARKETIndicatorHolderUpdateListener_withDXMARKETChartParamsListener_(id<DXMARKETIndicatorHolderUpdateListener> updateListener, id<DXMARKETChartParamsListener> listener) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETIndicatorsHolder *create_DXMARKETIndicatorsHolder_initWithDXMARKETIndicatorHolderUpdateListener_withDXMARKETChartParamsListener_(id<DXMARKETIndicatorHolderUpdateListener> updateListener, id<DXMARKETChartParamsListener> listener);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETIndicatorsHolder)

@compatibility_alias ComDevexpertsDxmarketClientModelChartDataIndicatorsHolder DXMARKETIndicatorsHolder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataIndicatorsHolder")
