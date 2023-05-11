
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSingleQuoteProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteProvider || defined(INCLUDE_DXSingleQuoteProvider))
#define DXSingleQuoteProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXSingleQuoteProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXSingleQuoteProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXSingleQuoteProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXSingleQuoteProvider)

inline DXSingleQuoteProvider *DXSingleQuoteProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSingleQuoteProvider *DXSingleQuoteProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSingleQuoteProvider, INSTANCE, DXSingleQuoteProvider *)

FOUNDATION_EXPORT void DXSingleQuoteProvider_init(DXSingleQuoteProvider *self);

FOUNDATION_EXPORT DXSingleQuoteProvider *new_DXSingleQuoteProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSingleQuoteProvider *create_DXSingleQuoteProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSingleQuoteProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteSingleQuoteProvider DXSingleQuoteProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteSingleQuoteProvider")
