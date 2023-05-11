
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudyProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyProvider || defined(INCLUDE_DXStudyProvider))
#define DXStudyProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXStudyProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXStudyProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXStudyProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXStudyProvider)

inline DXStudyProvider *DXStudyProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyProvider *DXStudyProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyProvider, INSTANCE, DXStudyProvider *)

FOUNDATION_EXPORT void DXStudyProvider_init(DXStudyProvider *self);

FOUNDATION_EXPORT DXStudyProvider *new_DXStudyProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyProvider *create_DXStudyProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudyProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudyProvider DXStudyProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyProvider")
