
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteMiniChartProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteMiniChartProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMiniChartProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartProvider || defined(INCLUDE_DXMiniChartProvider))
#define DXMiniChartProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXMiniChartProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXMiniChartProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXMiniChartProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXMiniChartProvider)

inline DXMiniChartProvider *DXMiniChartProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMiniChartProvider *DXMiniChartProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMiniChartProvider, INSTANCE, DXMiniChartProvider *)

FOUNDATION_EXPORT void DXMiniChartProvider_init(DXMiniChartProvider *self);

FOUNDATION_EXPORT DXMiniChartProvider *new_DXMiniChartProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMiniChartProvider *create_DXMiniChartProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMiniChartProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteMiniChartProvider DXMiniChartProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartProvider")
