
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAggregatedOrderProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderProvider || defined(INCLUDE_DXAggregatedOrderProvider))
#define DXAggregatedOrderProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXAggregatedOrderProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXAggregatedOrderProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXAggregatedOrderProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXAggregatedOrderProvider)

inline DXAggregatedOrderProvider *DXAggregatedOrderProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAggregatedOrderProvider *DXAggregatedOrderProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAggregatedOrderProvider, INSTANCE, DXAggregatedOrderProvider *)

FOUNDATION_EXPORT void DXAggregatedOrderProvider_init(DXAggregatedOrderProvider *self);

FOUNDATION_EXPORT DXAggregatedOrderProvider *new_DXAggregatedOrderProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAggregatedOrderProvider *create_DXAggregatedOrderProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAggregatedOrderProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderAggregatedOrderProvider DXAggregatedOrderProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderProvider")
