
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketDepthRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthRequestTO || defined(INCLUDE_DXMarketDepthRequestTO))
#define DXMarketDepthRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXInstrumentTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMarketDepthRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXMarketDepthRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMarketDepthRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (DXMarketDepthRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMarketDepthRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXInstrumentTO *)getInstrument;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMarketDepthRequestTO)

inline DXMarketDepthRequestTO *DXMarketDepthRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketDepthRequestTO *DXMarketDepthRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketDepthRequestTO, EMPTY, DXMarketDepthRequestTO *)

FOUNDATION_EXPORT void DXMarketDepthRequestTO_initWithDXInstrumentTO_(DXMarketDepthRequestTO *self, DXInstrumentTO *instrument);

FOUNDATION_EXPORT DXMarketDepthRequestTO *new_DXMarketDepthRequestTO_initWithDXInstrumentTO_(DXInstrumentTO *instrument) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketDepthRequestTO *create_DXMarketDepthRequestTO_initWithDXInstrumentTO_(DXInstrumentTO *instrument);

FOUNDATION_EXPORT void DXMarketDepthRequestTO_init(DXMarketDepthRequestTO *self);

FOUNDATION_EXPORT DXMarketDepthRequestTO *new_DXMarketDepthRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketDepthRequestTO *create_DXMarketDepthRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketDepthRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthRequestTO DXMarketDepthRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMarketdepthMarketDepthRequestTO")
