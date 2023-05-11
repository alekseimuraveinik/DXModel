
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueValueValidationResult")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueValueValidationResult
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueValueValidationResult 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueValueValidationResult 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueValueValidationResult

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETValueValidationResult_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueValueValidationResult || defined(INCLUDE_DXMARKETValueValidationResult))
#define DXMARKETValueValidationResult_

@interface DXMARKETValueValidationResult : NSObject {
 @public
  jboolean validated_;
  jlong value_;
}

#pragma mark Public

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETValueValidationResult)

FOUNDATION_EXPORT void DXMARKETValueValidationResult_init(DXMARKETValueValidationResult *self);

FOUNDATION_EXPORT DXMARKETValueValidationResult *new_DXMARKETValueValidationResult_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETValueValidationResult *create_DXMARKETValueValidationResult_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETValueValidationResult)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseValueValueValidationResult DXMARKETValueValidationResult;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueValueValidationResult")
