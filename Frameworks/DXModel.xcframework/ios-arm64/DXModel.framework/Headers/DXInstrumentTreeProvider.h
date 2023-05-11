
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentTreeProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeProvider || defined(INCLUDE_DXInstrumentTreeProvider))
#define DXInstrumentTreeProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXInstrumentTreeProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXInstrumentTreeProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXInstrumentTreeProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXInstrumentTreeProvider)

inline DXInstrumentTreeProvider *DXInstrumentTreeProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTreeProvider *DXInstrumentTreeProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTreeProvider, INSTANCE, DXInstrumentTreeProvider *)

FOUNDATION_EXPORT void DXInstrumentTreeProvider_init(DXInstrumentTreeProvider *self);

FOUNDATION_EXPORT DXInstrumentTreeProvider *new_DXInstrumentTreeProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentTreeProvider *create_DXInstrumentTreeProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentTreeProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeProvider DXInstrumentTreeProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeProvider")
