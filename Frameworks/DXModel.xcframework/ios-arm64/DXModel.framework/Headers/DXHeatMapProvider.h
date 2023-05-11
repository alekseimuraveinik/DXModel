
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiHeatmapHeatMapProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiHeatmapHeatMapProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXHeatMapProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapProvider || defined(INCLUDE_DXHeatMapProvider))
#define DXHeatMapProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXHeatMapProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXHeatMapProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXHeatMapProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXHeatMapProvider)

inline DXHeatMapProvider *DXHeatMapProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapProvider *DXHeatMapProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapProvider, INSTANCE, DXHeatMapProvider *)

FOUNDATION_EXPORT void DXHeatMapProvider_init(DXHeatMapProvider *self);

FOUNDATION_EXPORT DXHeatMapProvider *new_DXHeatMapProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXHeatMapProvider *create_DXHeatMapProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXHeatMapProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiHeatmapHeatMapProvider DXHeatMapProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapProvider")
