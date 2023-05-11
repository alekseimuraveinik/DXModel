
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionPositionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionPositionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionProvider || defined(INCLUDE_DXPositionProvider))
#define DXPositionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXPositionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXPositionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXPositionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXPositionProvider)

inline DXPositionProvider *DXPositionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionProvider *DXPositionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionProvider, INSTANCE, DXPositionProvider *)

FOUNDATION_EXPORT void DXPositionProvider_init(DXPositionProvider *self);

FOUNDATION_EXPORT DXPositionProvider *new_DXPositionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionProvider *create_DXPositionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionPositionProvider DXPositionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionPositionProvider")
