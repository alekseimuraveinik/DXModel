
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderProvider || defined(INCLUDE_DXOrderProvider))
#define DXOrderProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXOrderProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXOrderProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXOrderProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXOrderProvider)

inline DXOrderProvider *DXOrderProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderProvider *DXOrderProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderProvider, INSTANCE, DXOrderProvider *)

FOUNDATION_EXPORT void DXOrderProvider_init(DXOrderProvider *self);

FOUNDATION_EXPORT DXOrderProvider *new_DXOrderProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderProvider *create_DXOrderProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrderProvider DXOrderProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderProvider")
