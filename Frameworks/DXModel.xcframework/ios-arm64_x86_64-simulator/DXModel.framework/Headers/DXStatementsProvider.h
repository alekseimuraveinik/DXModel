
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserStatementsProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserStatementsProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStatementsProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsProvider || defined(INCLUDE_DXStatementsProvider))
#define DXStatementsProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXStatementsProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXStatementsProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXStatementsProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXStatementsProvider)

inline DXStatementsProvider *DXStatementsProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStatementsProvider *DXStatementsProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStatementsProvider, INSTANCE, DXStatementsProvider *)

FOUNDATION_EXPORT void DXStatementsProvider_init(DXStatementsProvider *self);

FOUNDATION_EXPORT DXStatementsProvider *new_DXStatementsProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStatementsProvider *create_DXStatementsProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStatementsProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserStatementsProvider DXStatementsProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsProvider")
