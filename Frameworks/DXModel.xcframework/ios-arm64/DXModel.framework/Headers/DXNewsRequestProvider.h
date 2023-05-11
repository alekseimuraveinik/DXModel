
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsRequestProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiNewsNewsRequestProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsRequestProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsRequestProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiNewsNewsRequestProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXNewsRequestProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsRequestProvider || defined(INCLUDE_DXNewsRequestProvider))
#define DXNewsRequestProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXNewsRequestProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXNewsRequestProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXNewsRequestProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXNewsRequestProvider)

inline DXNewsRequestProvider *DXNewsRequestProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXNewsRequestProvider *DXNewsRequestProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXNewsRequestProvider, INSTANCE, DXNewsRequestProvider *)

FOUNDATION_EXPORT void DXNewsRequestProvider_init(DXNewsRequestProvider *self);

FOUNDATION_EXPORT DXNewsRequestProvider *new_DXNewsRequestProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXNewsRequestProvider *create_DXNewsRequestProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXNewsRequestProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiNewsNewsRequestProvider DXNewsRequestProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsRequestProvider")
