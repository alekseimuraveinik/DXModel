
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSymbolDetailProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailProvider || defined(INCLUDE_DXSymbolDetailProvider))
#define DXSymbolDetailProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXSymbolDetailProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXSymbolDetailProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXSymbolDetailProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXSymbolDetailProvider)

inline DXSymbolDetailProvider *DXSymbolDetailProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSymbolDetailProvider *DXSymbolDetailProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSymbolDetailProvider, INSTANCE, DXSymbolDetailProvider *)

FOUNDATION_EXPORT void DXSymbolDetailProvider_init(DXSymbolDetailProvider *self);

FOUNDATION_EXPORT DXSymbolDetailProvider *new_DXSymbolDetailProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSymbolDetailProvider *create_DXSymbolDetailProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSymbolDetailProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteSymbolDetailProvider DXSymbolDetailProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSymbolDetailProvider")
