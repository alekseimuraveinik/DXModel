
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketDepthResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResponseTO || defined(INCLUDE_DXMarketDepthResponseTO))
#define DXMarketDepthResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXMarketDepthResultTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMarketDepthResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXMarketDepthResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMarketDepthResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMarketDepthResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMarketDepthResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXMarketDepthResultTO *)getResult;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setResultWithDXMarketDepthResultTO:(DXMarketDepthResultTO *)result;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMarketDepthResponseTO)

inline DXMarketDepthResponseTO *DXMarketDepthResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketDepthResponseTO *DXMarketDepthResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketDepthResponseTO, EMPTY, DXMarketDepthResponseTO *)

FOUNDATION_EXPORT void DXMarketDepthResponseTO_init(DXMarketDepthResponseTO *self);

FOUNDATION_EXPORT DXMarketDepthResponseTO *new_DXMarketDepthResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketDepthResponseTO *create_DXMarketDepthResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketDepthResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResponseTO DXMarketDepthResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthResponseTO")
