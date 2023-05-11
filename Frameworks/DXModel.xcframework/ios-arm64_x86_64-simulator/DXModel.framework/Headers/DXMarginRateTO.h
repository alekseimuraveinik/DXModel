
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentMarginratesMarginRateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentMarginratesMarginRateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentMarginratesMarginRateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentMarginratesMarginRateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentMarginratesMarginRateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarginRateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentMarginratesMarginRateTO || defined(INCLUDE_DXMarginRateTO))
#define DXMarginRateTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMarginRateTO : PSBaseTransferObject
@property (readonly, class, strong) DXMarginRateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMarginRateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMarginRateTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMarginRateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jdouble)getEndVolume;

- (jdouble)getMarginRate;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setEndVolumeWithDouble:(jdouble)endVolume;

- (void)setMarginRateWithDouble:(jdouble)marginRate;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMarginRateTO)

inline DXMarginRateTO *DXMarginRateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarginRateTO *DXMarginRateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarginRateTO, EMPTY, DXMarginRateTO *)

FOUNDATION_EXPORT void DXMarginRateTO_init(DXMarginRateTO *self);

FOUNDATION_EXPORT DXMarginRateTO *new_DXMarginRateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarginRateTO *create_DXMarginRateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarginRateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentMarginratesMarginRateTO DXMarginRateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentMarginratesMarginRateTO")
