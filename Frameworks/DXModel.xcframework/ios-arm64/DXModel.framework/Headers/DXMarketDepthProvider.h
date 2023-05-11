
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketDepthProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthProvider || defined(INCLUDE_DXMarketDepthProvider))
#define DXMarketDepthProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXMarketDepthProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXMarketDepthProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXMarketDepthProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXMarketDepthProvider)

inline DXMarketDepthProvider *DXMarketDepthProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketDepthProvider *DXMarketDepthProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketDepthProvider, INSTANCE, DXMarketDepthProvider *)

FOUNDATION_EXPORT void DXMarketDepthProvider_init(DXMarketDepthProvider *self);

FOUNDATION_EXPORT DXMarketDepthProvider *new_DXMarketDepthProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketDepthProvider *create_DXMarketDepthProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketDepthProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthProvider DXMarketDepthProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthProvider")
