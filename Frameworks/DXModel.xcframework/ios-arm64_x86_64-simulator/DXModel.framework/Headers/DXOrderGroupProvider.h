
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderGroupProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupProvider || defined(INCLUDE_DXOrderGroupProvider))
#define DXOrderGroupProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXOrderGroupProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXOrderGroupProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXOrderGroupProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXOrderGroupProvider)

inline DXOrderGroupProvider *DXOrderGroupProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderGroupProvider *DXOrderGroupProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderGroupProvider, INSTANCE, DXOrderGroupProvider *)

FOUNDATION_EXPORT void DXOrderGroupProvider_init(DXOrderGroupProvider *self);

FOUNDATION_EXPORT DXOrderGroupProvider *new_DXOrderGroupProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderGroupProvider *create_DXOrderGroupProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderGroupProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupProvider DXOrderGroupProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupProvider")
