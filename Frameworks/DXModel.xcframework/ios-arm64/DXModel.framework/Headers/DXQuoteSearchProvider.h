
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteSearchProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuoteSearchProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteSearchProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteSearchProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuoteSearchProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuoteSearchProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteSearchProvider || defined(INCLUDE_DXQuoteSearchProvider))
#define DXQuoteSearchProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXQuoteSearchProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXQuoteSearchProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXQuoteSearchProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXQuoteSearchProvider)

inline DXQuoteSearchProvider *DXQuoteSearchProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuoteSearchProvider *DXQuoteSearchProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuoteSearchProvider, INSTANCE, DXQuoteSearchProvider *)

FOUNDATION_EXPORT void DXQuoteSearchProvider_init(DXQuoteSearchProvider *self);

FOUNDATION_EXPORT DXQuoteSearchProvider *new_DXQuoteSearchProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuoteSearchProvider *create_DXQuoteSearchProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuoteSearchProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuoteSearchProvider DXQuoteSearchProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteSearchProvider")
