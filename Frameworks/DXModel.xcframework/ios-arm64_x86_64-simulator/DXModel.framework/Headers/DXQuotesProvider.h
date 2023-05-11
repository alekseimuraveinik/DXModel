
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuotesProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuotesProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesProvider || defined(INCLUDE_DXQuotesProvider))
#define DXQuotesProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXQuotesProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXQuotesProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXQuotesProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXQuotesProvider)

inline DXQuotesProvider *DXQuotesProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuotesProvider *DXQuotesProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuotesProvider, INSTANCE, DXQuotesProvider *)

FOUNDATION_EXPORT void DXQuotesProvider_init(DXQuotesProvider *self);

FOUNDATION_EXPORT DXQuotesProvider *new_DXQuotesProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuotesProvider *create_DXQuotesProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuotesProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuotesProvider DXQuotesProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuotesProvider")
