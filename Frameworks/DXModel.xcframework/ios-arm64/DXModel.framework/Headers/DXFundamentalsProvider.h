
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXFundamentalsProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsProvider || defined(INCLUDE_DXFundamentalsProvider))
#define DXFundamentalsProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXFundamentalsProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXFundamentalsProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXFundamentalsProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXFundamentalsProvider)

inline DXFundamentalsProvider *DXFundamentalsProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXFundamentalsProvider *DXFundamentalsProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXFundamentalsProvider, INSTANCE, DXFundamentalsProvider *)

FOUNDATION_EXPORT void DXFundamentalsProvider_init(DXFundamentalsProvider *self);

FOUNDATION_EXPORT DXFundamentalsProvider *new_DXFundamentalsProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXFundamentalsProvider *create_DXFundamentalsProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXFundamentalsProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsProvider DXFundamentalsProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsFundamentalsProvider")
