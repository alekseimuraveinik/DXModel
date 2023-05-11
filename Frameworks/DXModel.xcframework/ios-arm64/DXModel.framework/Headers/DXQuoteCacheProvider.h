
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteCacheProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuoteCacheProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteCacheProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteCacheProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuoteCacheProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuoteCacheProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteCacheProvider || defined(INCLUDE_DXQuoteCacheProvider))
#define DXQuoteCacheProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXQuoteCacheProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXQuoteCacheProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXQuoteCacheProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXQuoteCacheProvider)

inline DXQuoteCacheProvider *DXQuoteCacheProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuoteCacheProvider *DXQuoteCacheProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuoteCacheProvider, INSTANCE, DXQuoteCacheProvider *)

FOUNDATION_EXPORT void DXQuoteCacheProvider_init(DXQuoteCacheProvider *self);

FOUNDATION_EXPORT DXQuoteCacheProvider *new_DXQuoteCacheProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuoteCacheProvider *create_DXQuoteCacheProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuoteCacheProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuoteCacheProvider DXQuoteCacheProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteCacheProvider")
