
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyParameterTOAdapter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplStudyParameterTOAdapter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyParameterTOAdapter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyParameterTOAdapter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplStudyParameterTOAdapter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETStudyParameterTOAdapter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyParameterTOAdapter || defined(INCLUDE_DXMARKETStudyParameterTOAdapter))
#define DXMARKETStudyParameterTOAdapter_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartIStudyParameterTO 1
#define INCLUDE_DXMARKETIStudyParameterTO 1
#include "DXMARKETIStudyParameterTO.h"

@class DXStudyParameterTO;
@class DXStudyParameterTypeEnum;

@interface DXMARKETStudyParameterTOAdapter : NSObject < DXMARKETIStudyParameterTO >

#pragma mark Public

- (instancetype __nonnull)initWithDXStudyParameterTO:(DXStudyParameterTO *)parameterTO;

- (NSString *)getName;

- (DXStudyParameterTypeEnum *)getType;

- (NSString *)getValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETStudyParameterTOAdapter)

FOUNDATION_EXPORT void DXMARKETStudyParameterTOAdapter_initWithDXStudyParameterTO_(DXMARKETStudyParameterTOAdapter *self, DXStudyParameterTO *parameterTO);

FOUNDATION_EXPORT DXMARKETStudyParameterTOAdapter *new_DXMARKETStudyParameterTOAdapter_initWithDXStudyParameterTO_(DXStudyParameterTO *parameterTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETStudyParameterTOAdapter *create_DXMARKETStudyParameterTOAdapter_initWithDXStudyParameterTO_(DXStudyParameterTO *parameterTO);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETStudyParameterTOAdapter)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplStudyParameterTOAdapter DXMARKETStudyParameterTOAdapter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplStudyParameterTOAdapter")
