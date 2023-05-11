
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartIStudyParameterTO")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartIStudyParameterTO
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartIStudyParameterTO 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartIStudyParameterTO 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartIStudyParameterTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETIStudyParameterTO_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartIStudyParameterTO || defined(INCLUDE_DXMARKETIStudyParameterTO))
#define DXMARKETIStudyParameterTO_

@class DXStudyParameterTypeEnum;

@protocol DXMARKETIStudyParameterTO < JavaObject >

- (NSString *)getName;

- (DXStudyParameterTypeEnum *)getType;

- (NSString *)getValue;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETIStudyParameterTO)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETIStudyParameterTO)

#define ComDevexpertsDxmarketClientModelChartIStudyParameterTO DXMARKETIStudyParameterTO

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartIStudyParameterTO")
