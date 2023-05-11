
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAggregatedPositionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionProvider || defined(INCLUDE_DXAggregatedPositionProvider))
#define DXAggregatedPositionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXAggregatedPositionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXAggregatedPositionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXAggregatedPositionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXAggregatedPositionProvider)

inline DXAggregatedPositionProvider *DXAggregatedPositionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAggregatedPositionProvider *DXAggregatedPositionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAggregatedPositionProvider, INSTANCE, DXAggregatedPositionProvider *)

FOUNDATION_EXPORT void DXAggregatedPositionProvider_init(DXAggregatedPositionProvider *self);

FOUNDATION_EXPORT DXAggregatedPositionProvider *new_DXAggregatedPositionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAggregatedPositionProvider *create_DXAggregatedPositionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAggregatedPositionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionAggregatedPositionProvider DXAggregatedPositionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionProvider")
