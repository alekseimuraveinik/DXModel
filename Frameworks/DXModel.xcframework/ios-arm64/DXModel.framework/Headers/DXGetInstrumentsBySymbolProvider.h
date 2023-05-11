
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXGetInstrumentsBySymbolProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolProvider || defined(INCLUDE_DXGetInstrumentsBySymbolProvider))
#define DXGetInstrumentsBySymbolProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXGetInstrumentsBySymbolProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXGetInstrumentsBySymbolProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXGetInstrumentsBySymbolProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXGetInstrumentsBySymbolProvider)

inline DXGetInstrumentsBySymbolProvider *DXGetInstrumentsBySymbolProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXGetInstrumentsBySymbolProvider *DXGetInstrumentsBySymbolProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXGetInstrumentsBySymbolProvider, INSTANCE, DXGetInstrumentsBySymbolProvider *)

FOUNDATION_EXPORT void DXGetInstrumentsBySymbolProvider_init(DXGetInstrumentsBySymbolProvider *self);

FOUNDATION_EXPORT DXGetInstrumentsBySymbolProvider *new_DXGetInstrumentsBySymbolProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXGetInstrumentsBySymbolProvider *create_DXGetInstrumentsBySymbolProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXGetInstrumentsBySymbolProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolProvider DXGetInstrumentsBySymbolProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolProvider")
