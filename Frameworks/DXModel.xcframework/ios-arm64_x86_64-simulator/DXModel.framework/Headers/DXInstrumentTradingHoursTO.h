
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursInstrumentTradingHoursTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursInstrumentTradingHoursTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursInstrumentTradingHoursTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursInstrumentTradingHoursTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursInstrumentTradingHoursTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentTradingHoursTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursInstrumentTradingHoursTO || defined(INCLUDE_DXInstrumentTradingHoursTO))
#define DXInstrumentTradingHoursTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXInstrumentTradingHoursTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentTradingHoursTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXInstrumentTradingHoursTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXInstrumentTradingHoursTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentTradingHoursTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getTradingHours;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setTradingHoursWithPSListTO:(PSListTO *)tradingHours;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentTradingHoursTO)

inline DXInstrumentTradingHoursTO *DXInstrumentTradingHoursTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTradingHoursTO *DXInstrumentTradingHoursTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTradingHoursTO, EMPTY, DXInstrumentTradingHoursTO *)

FOUNDATION_EXPORT void DXInstrumentTradingHoursTO_init(DXInstrumentTradingHoursTO *self);

FOUNDATION_EXPORT DXInstrumentTradingHoursTO *new_DXInstrumentTradingHoursTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentTradingHoursTO *create_DXInstrumentTradingHoursTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentTradingHoursTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentTradinghoursInstrumentTradingHoursTO DXInstrumentTradingHoursTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursInstrumentTradingHoursTO")
