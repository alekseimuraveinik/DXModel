
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursTimeRangeTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursTimeRangeTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursTimeRangeTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursTimeRangeTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursTimeRangeTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXTimeRangeTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursTimeRangeTO || defined(INCLUDE_DXTimeRangeTO))
#define DXTimeRangeTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXTimeRangeTO : PSBaseTransferObject
@property (readonly, class, strong) DXTimeRangeTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXTimeRangeTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXTimeRangeTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXTimeRangeTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getTimeEnd;

- (jlong)getTimeStart;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setTimeEndWithLong:(jlong)timeEnd;

- (void)setTimeStartWithLong:(jlong)timeStart;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXTimeRangeTO)

inline DXTimeRangeTO *DXTimeRangeTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTimeRangeTO *DXTimeRangeTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTimeRangeTO, EMPTY, DXTimeRangeTO *)

FOUNDATION_EXPORT void DXTimeRangeTO_init(DXTimeRangeTO *self);

FOUNDATION_EXPORT DXTimeRangeTO *new_DXTimeRangeTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXTimeRangeTO *create_DXTimeRangeTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXTimeRangeTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentTradinghoursTimeRangeTO DXTimeRangeTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursTimeRangeTO")
