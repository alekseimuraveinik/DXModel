
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMenuProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuProvider || defined(INCLUDE_DXMenuProvider))
#define DXMenuProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXMenuProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXMenuProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXMenuProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXMenuProvider)

inline DXMenuProvider *DXMenuProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuProvider *DXMenuProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuProvider, INSTANCE, DXMenuProvider *)

FOUNDATION_EXPORT void DXMenuProvider_init(DXMenuProvider *self);

FOUNDATION_EXPORT DXMenuProvider *new_DXMenuProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMenuProvider *create_DXMenuProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMenuProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiMenuMenuProvider DXMenuProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuProvider")
