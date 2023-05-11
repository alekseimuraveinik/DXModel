
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionCloseByProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByProvider || defined(INCLUDE_DXPositionCloseByProvider))
#define DXPositionCloseByProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXPositionCloseByProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXPositionCloseByProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXPositionCloseByProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXPositionCloseByProvider)

inline DXPositionCloseByProvider *DXPositionCloseByProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionCloseByProvider *DXPositionCloseByProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionCloseByProvider, INSTANCE, DXPositionCloseByProvider *)

FOUNDATION_EXPORT void DXPositionCloseByProvider_init(DXPositionCloseByProvider *self);

FOUNDATION_EXPORT DXPositionCloseByProvider *new_DXPositionCloseByProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionCloseByProvider *create_DXPositionCloseByProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionCloseByProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByProvider DXPositionCloseByProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByProvider")
