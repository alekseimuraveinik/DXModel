
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataStudy")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataStudy
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataStudy 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataStudy 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataStudy

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETStudy_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataStudy || defined(INCLUDE_DXMARKETStudy))
#define DXMARKETStudy_

@class DXStudyDescriptionTO;

@interface DXMARKETStudy : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETStudy:(DXMARKETStudy *)other;

- (instancetype __nonnull)initWithDXStudyDescriptionTO:(DXStudyDescriptionTO *)study;

- (NSString *)getParameterString;

- (DXStudyDescriptionTO *)getStudyDescription;

- (jboolean)isEnabled;

- (void)setEnabledWithBoolean:(jboolean)enabled;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETStudy)

FOUNDATION_EXPORT void DXMARKETStudy_initWithDXStudyDescriptionTO_(DXMARKETStudy *self, DXStudyDescriptionTO *study);

FOUNDATION_EXPORT DXMARKETStudy *new_DXMARKETStudy_initWithDXStudyDescriptionTO_(DXStudyDescriptionTO *study) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETStudy *create_DXMARKETStudy_initWithDXStudyDescriptionTO_(DXStudyDescriptionTO *study);

FOUNDATION_EXPORT void DXMARKETStudy_initWithDXMARKETStudy_(DXMARKETStudy *self, DXMARKETStudy *other);

FOUNDATION_EXPORT DXMARKETStudy *new_DXMARKETStudy_initWithDXMARKETStudy_(DXMARKETStudy *other) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETStudy *create_DXMARKETStudy_initWithDXMARKETStudy_(DXMARKETStudy *other);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETStudy)

@compatibility_alias ComDevexpertsDxmarketClientModelChartDataStudy DXMARKETStudy;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataStudy")
