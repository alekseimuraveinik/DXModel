
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursDayTradingHoursTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursDayTradingHoursTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursDayTradingHoursTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursDayTradingHoursTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursDayTradingHoursTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXDayTradingHoursTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursDayTradingHoursTO || defined(INCLUDE_DXDayTradingHoursTO))
#define DXDayTradingHoursTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXDayTradingHoursTO : PSBaseTransferObject
@property (readonly, class, strong) DXDayTradingHoursTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXDayTradingHoursTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXDayTradingHoursTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXDayTradingHoursTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getDay;

- (jlong)getTimeEnd;

- (PSListTO *)getTimeRanges;

- (jlong)getTimeStart;

- (NSUInteger)hash;

- (jboolean)isTradable;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDayWithInt:(jint)day;

- (void)setTimeEndWithLong:(jlong)timeEnd;

- (void)setTimeRangesWithPSListTO:(PSListTO *)timeRanges;

- (void)setTimeStartWithLong:(jlong)timeStart;

- (void)setTradableWithBoolean:(jboolean)isTradable;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXDayTradingHoursTO)

inline DXDayTradingHoursTO *DXDayTradingHoursTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXDayTradingHoursTO *DXDayTradingHoursTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXDayTradingHoursTO, EMPTY, DXDayTradingHoursTO *)

FOUNDATION_EXPORT void DXDayTradingHoursTO_init(DXDayTradingHoursTO *self);

FOUNDATION_EXPORT DXDayTradingHoursTO *new_DXDayTradingHoursTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXDayTradingHoursTO *create_DXDayTradingHoursTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXDayTradingHoursTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentTradinghoursDayTradingHoursTO DXDayTradingHoursTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentTradinghoursDayTradingHoursTO")
